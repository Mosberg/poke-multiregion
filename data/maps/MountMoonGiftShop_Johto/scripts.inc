MountMoonGiftShop_Johto_MapScripts::
	.byte 0

MountMoonGiftShop_Johto_MountMoonGiftShopClerkScript_Entry::
	lockall
	goto MountMoonGiftShop_Johto_MountMoonGiftShopClerkScript

MountMoonGiftShop_Johto_MountMoonGiftShopLassScript_Entry::
	lockall
	goto MountMoonGiftShop_Johto_MountMoonGiftShopLassScript


MountMoonGiftShop_Johto_MountMoonGiftShopClerkScript:
	faceplayer
	@ TODO unsupported: pokemart MARTTYPE_STANDARD, MART_MT_MOON
	goto Johto_EventScript_Unimplemented

MountMoonGiftShop_Johto_MountMoonGiftShopLassScript:
	faceplayer
	message MountMoonGiftShop_Johto_MountMoonGiftShopLassText
	waitmessage
	waitbuttonpress
	closemessage
	releaseall
	end

MountMoonGiftShop_Johto_MountMoonGiftShopLassText:
	.string "When the sun goes\n"
	.string "down, CLEFAIRY\l"
	.string "come out to play.$"
