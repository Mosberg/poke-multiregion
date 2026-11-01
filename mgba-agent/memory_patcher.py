"""Cheat-style memory patching for pokemultiregion through the Lua bridge.

Everything is derived from the real build (see addresses.py). Unlike vanilla FireRed the SaveBlocks are
reached through pointers, money uses SaveBlock2.encryptionKey, and the bag is five pockets inside
SaveBlock1.  Run with the emulator open and mgba_agent_bridge.lua loaded.
"""
import struct
import sys

from addresses import BAG_POCKETS, SB1, SB2, SYMBOLS
from mgba_client import Bridge


def set_money(b: Bridge, amount: int):
    key = b.u32(b.sb2() + SB2["encryption_key"])
    b.w32(b.sb1() + SB1["money"], (amount ^ key) & 0xFFFFFFFF)
    print(f"[+] money set to {amount}")


def inject_item(b: Bridge, pocket: str, slot: int, item_id: int, quantity: int):
    """Quantity is XOR-encrypted with the low 16 bits of the encryption key."""
    offset, capacity = BAG_POCKETS[pocket]
    if not 0 <= slot < capacity:
        raise ValueError(f"{pocket} has {capacity} slots")
    key = b.u32(b.sb2() + SB2["encryption_key"]) & 0xFFFF
    b.write(b.sb1() + offset + slot * 4, struct.pack("<HH", item_id, (quantity ^ key) & 0xFFFF))
    print(f"[+] {pocket}[{slot}] = item {item_id} x{quantity}")


def set_flag(b: Bridge, flag_id: int, value: bool = True):
    addr = b.sb1() + SB1["flags"] + flag_id // 8
    cur = b.u8(addr)
    bit = 1 << (flag_id % 8)
    b.w8(addr, (cur | bit) if value else (cur & ~bit & 0xFF))


def warp_player(b: Bridge, map_group: int, map_num: int, x: int, y: int):
    """Best-effort immediate warp (the map reloads with a normal fade-in).

    Writes the destination into sWarpDestination and SaveBlock1.location/pos, then points
    gMain.callback2 at CB2_LoadMap, which is the same entry point the game's own warps use.
    Only do this while the overworld is running, not in battle or menus. Map ids are those in
    data/maps/map_groups.json of the build (e.g. MAP_PALLET_TOWN = Kanto group, check the file).
    """
    dest = SYMBOLS["sWarpDestination"]
    b.write(dest, struct.pack("<bbbxhh", map_group, map_num, -1, x, y))
    base = b.sb1()
    b.write(base + SB1["pos_x"], struct.pack("<hh", x, y))
    b.write(base + SB1["map_group"], struct.pack("<bbb", map_group, map_num, -1))
    b.write(base + 0x08, struct.pack("<hh", x, y))   # WarpData.x / .y
    b.w32(SYMBOLS["gMain"] + 0x04, SYMBOLS["CB2_LoadMap"] | 1)   # thumb bit
    print(f"[+] warping to group {map_group}, map {map_num} at ({x}, {y})")


if __name__ == "__main__":
    bridge = Bridge()
    if "--demo" in sys.argv:
        set_money(bridge, 999999)
        inject_item(bridge, "poke_balls", 0, 1, 99)          # ITEM_MASTER_BALL
        inject_item(bridge, "items", 0, 68, 99)              # ITEM_RARE_CANDY
    else:
        print("usage: python memory_patcher.py --demo   (sets money and adds Master Balls / Rare Candies)")
