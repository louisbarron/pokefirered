const struct PokedexEntry gPokedexEntries[] =
{
    [NATIONAL_DEX_NONE] =
    {
        .categoryName = _("UNKNOWN"),
        .height = 0,
        .weight = 0,
        .description = gDummyPokedexText,
        .unusedDescription = gDummyPokedexTextUnused,
        .pokemonScale = 256,
        .pokemonOffset = 0,
        .trainerScale = 256,
        .trainerOffset = 0,
    },
    [NATIONAL_DEX_TEST] =
    {
        .categoryName = _("CATEGORY"),
        .height = 7,
        .weight = 69,
        .description = gTestPokedexText,
        .unusedDescription = gTestPokedexTextUnused,
        .pokemonScale = 271,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 2,
    },
    [NATIONAL_DEX_TESTTWO] =
    {
        .categoryName = _("CAT"),
        .height = 7,
        .weight = 69,
        .description = gTesttwoPokedexText,
        .unusedDescription = gTesttwoPokedexTextUnused,
        .pokemonScale = 271,
        .pokemonOffset = 0,
        .trainerScale = 271,
        .trainerOffset = 2,
    },

};
