#define TMHM_LEARNSET(moves) {(u32)(moves), ((u64)(moves) >> 32)}
#define TMHM(tmhm) ((u64)1 << (ITEM_##tmhm - ITEM_TM01_FOCUS_PUNCH))

// This table determines which TMs and HMs a species is capable of learning.
// Each entry is a 64-bit bit array spread across two 32-bit values, with
// each bit corresponding to a machine.
static const u32 sTMHMLearnsets[][2] =
{
    [SPECIES_NONE]        = TMHM_LEARNSET(0),

    [SPECIES_TEST]   = TMHM_LEARNSET(TMHM(TM10_HIDDEN_POWER)
                                        | TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),

    [SPECIES_TESTTWO]   = TMHM_LEARNSET(TMHM(HM01_CUT)
                                        | TMHM(HM02_FLY)
                                        | TMHM(HM03_SURF)
                                        | TMHM(HM04_STRENGTH)
                                        | TMHM(HM05_FLASH)
                                        | TMHM(HM06_ROCK_SMASH)
                                        | TMHM(HM07_WATERFALL)
                                        | TMHM(HM08_DIVE)),


};
