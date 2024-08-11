PewterCity_Gym_Text_BrockIntro::
    .string "Gotta catch 'em all... but you got\p"
    .string "no chance against me!$"

@ NOTE: This defeat text actually causes a buffer overflow. It's too long for the gDisplayedStringBattle
@ buffer that it's put into, and it stomps all over the gBattleTextBuffs after, as well as the otherwise
@ unused array after that, sFlickerArray. Perhaps that's the reason why said array exists.
PewterCity_Gym_Text_BrockDefeat::
    .string "You received the BOULDERBADGE from\p"
    .string "BROCK!$"

PewterCity_Gym_Text_TakeThisWithYou::
    .string "Limited Edition Lockpick$"

PewterCity_Gym_Text_ReceivedTM39FromBrock::
    .string "'TECH MASTER ACQUIRED!'$"

PewterCity_Gym_Text_ExplainTM39::
    .string "Use ROCK TOMB on foe.$"

PewterCity_Gym_Text_BrockPostBattle::
    .string "What's this?$"

PewterCity_Gym_Text_DontHaveRoomForThis::
    .string "'SHIP INCOMING'$"

PewterCity_Gym_Text_LiamIntro::
    .string "You're a long way from home...$"

PewterCity_Gym_Text_LiamDefeat::
    .string "'The Cosmic Chart warns: Galactic\p"
    .string "coordinates malfunctioning!'$"

PewterCity_Gym_Text_LiamPostBattle::
    .string "'Get ready to rumble, punk!'$"

PewterCity_Gym_Text_LetMeTakeYouToTheTop::
    .string "Wanna start in Viridian Gym?$"

PewterCity_Gym_Text_LetsGetHappening::
    .string "Level 1: Jungle Jaunt$"

PewterCity_Gym_Text_TryDifferentPartyOrders::
    .string "CHOOSE YOUR Starter Strategically!$"

PewterCity_Gym_Text_ItsFreeLetsGetHappening::
    .string "FREE SERVICE AVAILABLE$"

PewterCity_Gym_Text_YoureChampMaterial::
    .string "'Congratulations! Brock Joins Your\p"
    .string "Party!'$"

PewterCity_Gym_Text_GymStatue::
    .string "Collections of rare minerals await\p"
    .string "you within!$"

PewterCity_Gym_Text_GymStatuePlayerWon::
    .string "BROCK: YOU THINK YOU CAN BEAT ME,\p"
    .string "YOUNG TRAINER?$"

