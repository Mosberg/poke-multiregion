# MISSING

Everything known to be unfinished, unconverted or untested. Items are removed when done and appended when found.
Hard caps and approximations live in LIMITS.md.

## Johto: scripts (316 commands still become "not converted yet"; all 383 Johto maps load in the emulator smoke test, 0 failures)

Most frequent unsupported commands (run `poke-crystal-scripts <crystal> <project>` for the live list):

- Shops: Goldenrod Dept. Store floor logic, vending machines, Mart types BITTER/BARGAIN/PHARMACY/ROOFTOP (all open as a standard shop), Crystal item prices (Emerald prices are used)
- Pokecenter nurse: time-of-day greetings, Pokecom/phone and Pokerus handling (replaced by a plain heal), heal-machine animation
- `fruittree` (30), `fruittree`/berry trees, `itemnotify`, `verbosegiveitemvar`, `trade` (7)
- Time/date: phone call timers, daily events, DST prompts (no-ops); weekday checks now use the RTC (`JohtoGetWeekday`)
- Phone/Pokegear: the phone book does not exist (trainers always get refused when asking for a number, caller id reads 0, no calls, no rematches), radio (`special` radio functions), Pokegear menu entry, map card; scripted rematches that `readmem` a fight counter stay unconverted
- `loadvar`, `readmem`/`writemem`, `random`, `setlasttalked` use, `getcurlandmarkname`, `gettrainername`, `loadwildmon` (static wild battles: Sudowoodo, legendaries, Red, Lugia, Ho-Oh), `catchtutorial` (Route 29 dude)
- Decorations (`describedecoration`, decoration system, the player's room items)
- Specials: Bank of Mom, name rival, `FindPartyMonThatSpeciesYourTrainerID` (Togepi/Elm branches), Day-care, name rater, move tutor, Magnet Train, Card Flip, Coin Case, Unown/Ruins puzzles, Bill's PC
- Movement: `set_sliding`, `remove_sliding`, `turn_step`, `step_sleep`
- `farsjump`, text macros (`<...>`, `{d:...}`, `text_decimal`, `text_asm`)
- Script sound effects not in the SFX table (`SFX_READ_TEXT_2`, `SFX_STRENGTH`, `SFX_WARP_FROM/TO`, `SFX_FLY`)

Plus:
- `BGEVENT_IFSET` bg events are not converted (hidden items now are: 60 maps; item balls work - before this fix every Johto item ball was a stub; tested: Sprout Tower 3F Potion)
- Coord events with `SCENE_ANY` (no scene variable) are skipped
- Non-script object types (`OBJECTTYPE_COMMAND` other than `jumptext*`, e.g. `pokemart`) are not converted
- Cross-map script/label references (`farjump`, shared helper scripts) are not resolved
- Conditional (`conditional_event`) bg events

## Johto: content not imported

- Fishing (Old/Good/Super Rod tables), Headbutt trees, swarms, roaming Pokemon, Bug-Catching Contest table, flee mons, Unown unlocks
- Time-of-day (morning/night) wild tables
- Crystal map music assignments (all maps use generic songs), real Crystal songs/SFX
- Crystal overworld sprites and trainer pics (borrowed Hoenn/Kanto ones are used)
- Crystal text font / scroll arrow tiles
- Crystal-only items (Pokegear cards, Mystery Egg, Clear Bell, S.S. Ticket, Basement Key, Card Key, ...) and key-item scripts
- Crystal-only moves/mechanics differences (Crystal held items, Gen 2 move TMs/HMs mapping, Headbutt/Rock Smash field moves)
- Johto Pokedex ordering and area map, Johto town map/fly points (only New Bark Town has a heal location)
- Johto Pokemon Center/Mart/Gym rosters, Goldenrod Radio Tower, Underground, Bug Contest, Lake of Rage events
- Mobile Stadium, Battle Tower, Link/Trade, Mobile features (not planned)
- Gym puzzles and scripted rival/legend encounters beyond the New Bark Town opening
- Per-class trainer DVs, trainer battle music per class, "after-battle" phone rematches

## Johto: engine integration

- Johto Elite Four / Champion progression; Johto badge case/trainer card display (badges exist as flags, obedience, HM rules and `VAR_BADGES` use them)
- Johto town map, music sets, Pokedex area pages and trainer card (still Hoenn's)
- Pokemon Center healing/respawn points for every Johto town (only New Bark Town)
- Pokemon Center PC / Pokegear start-menu entry
- Day/night palettes and Crystal palette time system
- Johto Pokemon (Gen 2) mon data is the expansion's own; Crystal-specific moves/learnsets are not applied

## Johto: gyms and progression

- Togepi egg chain: the Aide in Violet's Pokemon Center hands out the egg (party gets an egg of species 175, flag set; tested). Hatching, `JohtoFindPartyMonSpecies` (Elm checking for the hatched Togepi) and Elm's follow-up scenes are converted but untested

- Cut trees work (40 trees, 23 maps; tested in Ilex Forest and on Route 29: prompt, flag, tile swap, persists after reload). Cut *grass* blocks and the "use Cut from the party menu" shortcut are not converted (only facing the tree and pressing A)
- Strength boulders and breakable rocks use the engine's native objects/scripts (untested in play); Crystal Whirlpool, Waterfall, Surf and Flash use tile behaviours

- Verified in play on the embedded emulator: Elm's scene, the Totodile starter (species 158; flags `GOT_TOTODILE_FROM_ELM`, `GOT_A_POKEMON_FROM_ELM` set, ball hidden, Aide scene reached), Mr. Pokemon's scene (Mystery Egg flag set). the Cherrygrove rival ambush runs to the end for all three starters (dialogue, battle, scene var advances, rival hides; tested with a flag-set level-9 starter, not the full playthrough). Not yet checked: what the rival says/uses per starter, and the scenes after Violet City
- `blackoutmod` is ignored: whiting out always returns to New Bark Town (only that heal location exists)

- Johto badges drive obedience and HM/field-move checks (`GetBadgeFlagForRegion`, `sJohtoFieldMoveBadge`) and `VAR_BADGES`, but this is **untested in play** (an attempted automated check measured nothing); the extension reports the Johto region and badges
- Fruit trees give their berry once per tree (no daily regrowth); Crystal-only items now exist (Mystery Egg, wings, tickets, scales...) with a question-mark icon and short descriptions

- Violet Gym plays (Falkner, badge text, after-talk); the badge is only a `FLAG_JOHTO_ENGINE_ZEPHYRBADGE` flag with no gameplay effect, `VAR_BADGES` is always 0 so the Rocket-activation branch never runs
- Mud-Slap TM replaced by a Nugget; Mystery Egg, Clear Bell, S.S. Ticket, Red Scale, Pink Bow, mail items do not exist as items
- Gym puzzle/guide scripts, Sprout Tower, Mr. Pokemon quest, Cherrygrove rival ambush untested

## Kanto / Yellow

- Yellow Pikachu mood, refusing Poke Balls/evolution stones, Pikachu happiness reactions
- Yellow gift starters (Bulbasaur/Charmander/Squirtle/Eevee evolutions handing-out events)
- Route 22 Jolteon upgrade and Jessie & James fights are built but never played in the emulator
- Play-testing of Viridian Forest, Mt. Moon, Cerulean, and the ferry back to Hoenn with a Kanto badge
- Plugin migration scripts (`poke-patch` etc.) do not reproduce the trainer-id/flag-band changes

## Verified only partially

- Johto start: Mom scene, New Bark Town, Elm's Lab, starter (Cyndaquil only), Aide's potion, Route 29 load, a wild encounter, Route 30 trainer
- Not played: Totodile/Chikorita choices, Elm's call-back scenes, rival ambush at Cherrygrove, Mr. Pokemon's house, Violet City gym, any gym fight, Johto save/continue round trip
- Johto wild encounters: the encounter fired but species/levels were not checked against the table

## Embedded emulator

- Cartridge RTC (needed for real time-of-day/weekday behaviour in Johto scripts), link cable, rewind, cheats, breakpoints/memory viewer panels (gba-kit has the debug adapter and debug UI packages; not wired in), a Debug Adapter (DAP) integration for the decomp's `.elf`
- Native-mGBA savestate import
- Live testing of keyboard/gamepad and audio in the webview beyond the screen (verified: screen, toolbar, bridge protocol, Python tools)
- Worker crash recovery and a visible error banner in the screen

## Tooling and extension

- VS Code extension UI (views, dashboard, chat participant, real model calls) untested
- Headless mGBA/Python bindings, RL stack and training are not set up
- `savespace-budget.md` offsets were corrected in the code but the document needs a full refresh
- No automated regression test that rebuilds the ROM and replays the Johto opening
- `poke-crystal-maps`, `-scripts`, `-trainers`, `-wild` are not yet chained into one `poke-crystal-all` command or into the plugin's `/migrate` skill

## How this file is maintained

Add a line whenever something is found missing, unimplemented or untested; delete it when it is done and verified.
