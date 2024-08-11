// Trainer party data exists for all of the RS trainer classes, but
// are only filled with one of the following placeholder pokemon.
// The actual FRLG trainer party data starts after these.
#define DUMMY_TRAINER_MON           \
    {                               \
        .lvl = 5,                   \
        .species = SPECIES_AERFER,   \
    }

#define DUMMY_TRAINER_MON_IV        \
    {                               \
        .iv = 100,                  \
        .lvl = 5,                   \
        .species = SPECIES_AEROPEX,   \
    }

// Copy of Swimmer Male Finn's party
#define DUMMY_TRAINER_STARMIE       \
    {                               \
        .lvl = 38,                  \
        .species = SPECIES_SORVOL, \
    }

static const struct TrainerMonNoItemDefaultMoves sParty_AquaLeader[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaGruntM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaGruntF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSAromaLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSRuinManiac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Interviewer[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSTuberF[] = {DUMMY_TRAINER_STARMIE};
static const struct TrainerMonNoItemDefaultMoves sParty_RSTuberM[] = {DUMMY_TRAINER_STARMIE};
static const struct TrainerMonNoItemDefaultMoves sParty_RSCooltrainerM[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_RSCooltrainerF[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_HexManiac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBeauty[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RichBoy[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPokemaniac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSwimmerM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBlackBelt[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_Guitarist[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Kindler[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSCamper[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugManiac[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPsychicM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPsychicF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSGentleman[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_EliteFourSidney[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_EliteFourPhoebe[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderRoxanne[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderBrawly[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderTateLiza[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SchoolKidM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SchoolKidF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SrAndJr[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PokefanM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PokefanF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ExpertM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ExpertF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSYoungster[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSChampion[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSFisherman[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_CyclingTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_CyclingTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RunningTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RunningTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmingTriathleteM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_SwimmingTriathleteF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_DragonTamer[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBirdKeeper[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_NinjaBoy[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BattleGirl[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_ParasolLady[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSwimmerF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPicnicker[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSTwins[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSailor[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BoarderM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BoarderF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Collector[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Wally[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Brendan[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Brendan2[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_Brendan3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_May[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_May2[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_May3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnBreederM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnBreederF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnRangerM[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_RSPkmnRangerF[] = {DUMMY_TRAINER_MON_IV};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaLeader[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaGruntM[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaGruntF[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSLass[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSBugCatcher[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSHiker[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSYoungCouple[] = {DUMMY_TRAINER_MON, DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_OldCouple[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_RSSisAndBro[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaAdminMatt[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_AquaAdminShelly[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaAdminTabitha[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_MagmaAdminCourtney[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderWattson[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderFlannery[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderNorman[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderWinona[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_LeaderWallace[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_EliteFourGlacia[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_EliteFourDrake[] = {DUMMY_TRAINER_MON};

// Start of actual trainer data
static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen[] = {
    { .iv = 0, .lvl = 11, .species = SPECIES_YUREKI, },
    { .iv = 0, .lvl = 11, .species = SPECIES_AERHONE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCalvin[] = {
    { .iv = 0, .lvl = 14, .species = SPECIES_TINTINN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJosh[] = {
    { .iv = 0, .lvl = 10, .species = SPECIES_SEALORA, },
    { .iv = 0, .lvl = 10, .species = SPECIES_SCROLIA, },
    { .iv = 0, .lvl = 10, .species = SPECIES_EMBRIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy[] = {
    { .iv = 0, .lvl = 14, .species = SPECIES_SCROLIA, },
    { .iv = 0, .lvl = 14, .species = SPECIES_KOROBI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJoey[] = {
    { .iv = 0, .lvl = 15, .species = SPECIES_POCHETLIN, },
    { .iv = 0, .lvl = 15, .species = SPECIES_CELIGRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDan[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_LEVAXON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad[] = {
    { .iv = 0, .lvl = 14, .species = SPECIES_CELESTIS, },
    { .iv = 0, .lvl = 14, .species = SPECIES_LEVORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTyler[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_GRUMM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterEddie[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_ASTEROS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDillon[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_AERTHYS, },
    { .iv = 0, .lvl = 19, .species = SPECIES_ROCKPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_CUIMOS, },
    { .iv = 0, .lvl = 17, .species = SPECIES_GLITAS, },
    { .iv = 0, .lvl = 17, .species = SPECIES_TERRAGUL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDave[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_CRYSTALUX, },
    { .iv = 0, .lvl = 18, .species = SPECIES_GLIMMOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen2[] = {
    { .iv = 20, .lvl = 17, .species = SPECIES_BRONZIX, },
    { .iv = 20, .lvl = 17, .species = SPECIES_TINSTRY, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherRick[] = {
    { .iv = 0, .lvl = 6, .species = SPECIES_POCHET, },
    { .iv = 0, .lvl = 6, .species = SPECIES_SERENITE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherDoug[] = {
    { .iv = 0, .lvl = 7, .species = SPECIES_YUREKI, },
    { .iv = 0, .lvl = 7, .species = SPECIES_IGNIFERT, },
    { .iv = 0, .lvl = 7, .species = SPECIES_CELESTIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherSammy[] = {
    { .iv = 0, .lvl = 9, .species = SPECIES_AERFER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton[] = {
    { .iv = 0, .lvl = 10, .species = SPECIES_TURBIN, },
    { .iv = 0, .lvl = 10, .species = SPECIES_GRUMM, },
    { .iv = 0, .lvl = 10, .species = SPECIES_FUMIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherGreg[] = {
    { .iv = 0, .lvl = 9, .species = SPECIES_LEVORA, },
    { .iv = 0, .lvl = 9, .species = SPECIES_VESPAS, },
    { .iv = 0, .lvl = 9, .species = SPECIES_TERRAZO, },
    { .iv = 0, .lvl = 9, .species = SPECIES_AERHONE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherJames[] = {
    { .iv = 0, .lvl = 11, .species = SPECIES_VESPAS, },
    { .iv = 0, .lvl = 11, .species = SPECIES_CALCIMONK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherKent[] = {
    { .iv = 0, .lvl = 11, .species = SPECIES_TINSTRY, },
    { .iv = 0, .lvl = 11, .species = SPECIES_CELIGRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherRobby[] = {
    { .iv = 0, .lvl = 10, .species = SPECIES_KHILRIN, },
    { .iv = 0, .lvl = 10, .species = SPECIES_AURSURF, },
    { .iv = 0, .lvl = 10, .species = SPECIES_TENEBROUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherCale[] = {
    { .iv = 0, .lvl = 10, .species = SPECIES_KRYPTA, },
    { .iv = 0, .lvl = 10, .species = SPECIES_ELECTORO, },
    { .iv = 0, .lvl = 10, .species = SPECIES_URAGI, },
    { .iv = 0, .lvl = 10, .species = SPECIES_AETHRI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherKeigo[] = {
    { .iv = 0, .lvl = 16, .species = SPECIES_TORVIA, },
    { .iv = 0, .lvl = 16, .species = SPECIES_SERENITE, },
    { .iv = 0, .lvl = 16, .species = SPECIES_LUMINANT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherElijah[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_GLITAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher2[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_TERRIGRON, },
    { .iv = 0, .lvl = 18, .species = SPECIES_TINTINN, },
    { .iv = 0, .lvl = 18, .species = SPECIES_VINEKOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherBrent[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_VIRIDIA, },
    { .iv = 0, .lvl = 19, .species = SPECIES_AEROPE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherConner[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_LUMINANT, },
    { .iv = 0, .lvl = 20, .species = SPECIES_GELRATH, },
    { .iv = 0, .lvl = 20, .species = SPECIES_TERROBE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice[] = {
    { .iv = 0, .lvl = 9, .species = SPECIES_RHINOKS, },
    { .iv = 0, .lvl = 9, .species = SPECIES_KRYPTA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassSally[] = {
    { .iv = 0, .lvl = 10, .species = SPECIES_TERRAGUL, },
    { .iv = 0, .lvl = 10, .species = SPECIES_TURBIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassRobin[] = {
    { .iv = 0, .lvl = 14, .species = SPECIES_BRONZIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassCrissy[] = {
    { .iv = 0, .lvl = 31, .species = SPECIES_NURIMAR, },
    { .iv = 0, .lvl = 31, .species = SPECIES_VERMEA, },
    { .iv = 0, .lvl = 31, .species = SPECIES_VINTRUB, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMiriam[] = {
    { .iv = 0, .lvl = 11, .species = SPECIES_AEROPE, },
    { .iv = 0, .lvl = 11, .species = SPECIES_CRAGS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassIris[] = {
    { .iv = 0, .lvl = 14, .species = SPECIES_URAGI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli[] = {
    { .iv = 0, .lvl = 16, .species = SPECIES_LURAS, },
    { .iv = 0, .lvl = 16, .species = SPECIES_KOROBI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAli[] = {
    { .iv = 0, .lvl = 12, .species = SPECIES_AQUAVOLE, },
    { .iv = 0, .lvl = 12, .species = SPECIES_CUIMOS, },
    { .iv = 0, .lvl = 12, .species = SPECIES_NURVIO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lass2[] = {
    { .iv = 0, .lvl = 15, .species = SPECIES_SERENITE, },
    { .iv = 0, .lvl = 15, .species = SPECIES_TENEBRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassHaley[] = {
    { .iv = 0, .lvl = 13, .species = SPECIES_CALCIMONK, },
    { .iv = 0, .lvl = 13, .species = SPECIES_SORILI, },
    { .iv = 0, .lvl = 13, .species = SPECIES_CELESTIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAnn[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_ASTRUX, },
    { .iv = 0, .lvl = 18, .species = SPECIES_GLITAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassDawn[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_ELECTORO, },
    { .iv = 0, .lvl = 18, .species = SPECIES_TERRO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassPaige[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_RUSTHOR, },
    { .iv = 0, .lvl = 23, .species = SPECIES_TECHSOL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAndrea[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_URAGON, },
    { .iv = 0, .lvl = 24, .species = SPECIES_AEROLUT, },
    { .iv = 0, .lvl = 24, .species = SPECIES_AKVORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_YUKIMI, },
    { .iv = 0, .lvl = 19, .species = SPECIES_FUMIX, },
    { .iv = 0, .lvl = 19, .species = SPECIES_KOROBI, },
    { .iv = 0, .lvl = 19, .species = SPECIES_AKMIDA, },
    { .iv = 0, .lvl = 19, .species = SPECIES_KLOUDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJulia[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_TERRAGO, },
    { .iv = 0, .lvl = 22, .species = SPECIES_AGATORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassKay[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_ONYRIX, },
    { .iv = 0, .lvl = 23, .species = SPECIES_TURMADE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassLisa[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_DOXON, },
    { .iv = 0, .lvl = 23, .species = SPECIES_POCHETLIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorEdmond[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_CRAGS, },
    { .iv = 0, .lvl = 18, .species = SPECIES_LUMINE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorTrevor[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_CRYSTA, },
    { .iv = 0, .lvl = 17, .species = SPECIES_SORILI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorLeonard[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_DUSTOS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorDuncan[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_GELRATH, },
    { .iv = 0, .lvl = 17, .species = SPECIES_AERHONE, },
    { .iv = 0, .lvl = 17, .species = SPECIES_VINEKOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorHuey[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_CRYSTALUX, },
    { .iv = 0, .lvl = 18, .species = SPECIES_ROCKPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorDylan[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_FUMIX, },
    { .iv = 0, .lvl = 17, .species = SPECIES_KRYPTA, },
    { .iv = 0, .lvl = 17, .species = SPECIES_KRYPTA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorPhillip[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_ELECTORO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorDwayne[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_LUMIN, },
    { .iv = 0, .lvl = 21, .species = SPECIES_VIRIDIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperLiam[] = {
    { .iv = 0, .lvl = 10, .species = SPECIES_LEVORA, },
    { .iv = 0, .lvl = 11, .species = SPECIES_TECHI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperShane[] = {
    { .iv = 0, .lvl = 14, .species = SPECIES_DOXON, },
    { .iv = 0, .lvl = 14, .species = SPECIES_GRAPHSIM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperEthan[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_URAGI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_GLIMPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff[] = {
    { .iv = 0, .lvl = 16, .species = SPECIES_STELLAL, },
    { .iv = 0, .lvl = 16, .species = SPECIES_VIRIDIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Camper2[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_AGATORA, },
    { .iv = 0, .lvl = 21, .species = SPECIES_SCROLIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperDrew[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_SPIRA, },
    { .iv = 0, .lvl = 19, .species = SPECIES_MOMOZOA, },
    { .iv = 0, .lvl = 19, .species = SPECIES_ROCKPIN, },
    { .iv = 0, .lvl = 19, .species = SPECIES_RHINOKS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerDiana[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_CRYSTALUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerNancy[] = {
    { .iv = 0, .lvl = 16, .species = SPECIES_URAGI, },
    { .iv = 0, .lvl = 16, .species = SPECIES_PUPATOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle[] = {
    { .iv = 0, .lvl = 16, .species = SPECIES_EMBRIS, },
    { .iv = 0, .lvl = 16, .species = SPECIES_CELIGRA, },
    { .iv = 0, .lvl = 16, .species = SPECIES_NURVIO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey[] = {
    { .iv = 0, .lvl = 15, .species = SPECIES_YUKIMI, },
    { .iv = 0, .lvl = 15, .species = SPECIES_GRUMM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_VIRIDIA, },
    { .iv = 0, .lvl = 18, .species = SPECIES_KARASHY, },
    { .iv = 0, .lvl = 18, .species = SPECIES_FUMIGA, },
    { .iv = 0, .lvl = 18, .species = SPECIES_MOMOZOA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCaitlin[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_CALLISTA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerHeidi[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_SEALORA, },
    { .iv = 0, .lvl = 20, .species = SPECIES_TERRO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCarol[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_FLORENA, },
    { .iv = 0, .lvl = 21, .species = SPECIES_TERRAGUL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSofia[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_CRYPTIN, },
    { .iv = 0, .lvl = 21, .species = SPECIES_ROKITU, },
    { .iv = 0, .lvl = 21, .species = SPECIES_LUMIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMartha[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_LURIOS, },
    { .iv = 0, .lvl = 22, .species = SPECIES_VERDURA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerTina[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_LUMINUXE, },
    { .iv = 0, .lvl = 24, .species = SPECIES_AURARA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerHannah[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_FUMINDO, },
    { .iv = 0, .lvl = 24, .species = SPECIES_TINNION, },
    { .iv = 0, .lvl = 24, .species = SPECIES_SERILI, },
    { .iv = 0, .lvl = 24, .species = SPECIES_LUMINE, },
    { .iv = 0, .lvl = 24, .species = SPECIES_LUMINUXE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark[] = {
    { .iv = 30, .lvl = 29, .species = SPECIES_TUNDRAX, },
    { .iv = 30, .lvl = 29, .species = SPECIES_KORVAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman[] = {
    { .iv = 30, .lvl = 20, .species = SPECIES_SEALORA, },
    { .iv = 30, .lvl = 20, .species = SPECIES_CELIGRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacCooper[] = {
    { .iv = 30, .lvl = 20, .species = SPECIES_ROKUIL, },
    { .iv = 30, .lvl = 20, .species = SPECIES_ONYRIX, },
    { .iv = 30, .lvl = 20, .species = SPECIES_CELESTUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacSteve[] = {
    { .iv = 30, .lvl = 22, .species = SPECIES_AURIVORE, },
    { .iv = 30, .lvl = 22, .species = SPECIES_AEROPE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacWinston[] = {
    { .iv = 30, .lvl = 25, .species = SPECIES_ELECTRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacDawson[] = {
    { .iv = 30, .lvl = 40, .species = SPECIES_LUMINUXE, },
    { .iv = 30, .lvl = 40, .species = SPECIES_CRYPTOR, },
    { .iv = 30, .lvl = 40, .species = SPECIES_AERAXIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacAshton[] = {
    { .iv = 30, .lvl = 23, .species = SPECIES_CRYPTIN, },
    { .iv = 30, .lvl = 23, .species = SPECIES_TERROBE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdJovan[] = {
    { .iv = 0, .lvl = 11, .species = SPECIES_ASTEROS, },
    { .iv = 0, .lvl = 11, .species = SPECIES_TERRAZO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdMiguel[] = {
    { .iv = 0, .lvl = 12, .species = SPECIES_AERTHYS, },
    { .iv = 0, .lvl = 12, .species = SPECIES_TERRAGUL, },
    { .iv = 0, .lvl = 12, .species = SPECIES_ASTEROS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdAidan[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_TERROBE, },
    { .iv = 0, .lvl = 20, .species = SPECIES_LEVAXON, },
    { .iv = 0, .lvl = 20, .species = SPECIES_MOMOZOA, },
    { .iv = 0, .lvl = 20, .species = SPECIES_TERRAGUL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdGlenn[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_VINEKOR, },
    { .iv = 0, .lvl = 22, .species = SPECIES_DOXON, },
    { .iv = 0, .lvl = 22, .species = SPECIES_SEALORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdLeslie[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_CRYSTAZE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd1[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_POCHETLIN, },
    { .iv = 0, .lvl = 22, .species = SPECIES_FUMINIA, },
    { .iv = 0, .lvl = 22, .species = SPECIES_VERALIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd2[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_PRANJORA, },
    { .iv = 0, .lvl = 20, .species = SPECIES_ASTRUX, },
    { .iv = 0, .lvl = 20, .species = SPECIES_FUMINIA, },
    { .iv = 0, .lvl = 20, .species = SPECIES_LUMINANT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd3[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_TUNDRAX, },
    { .iv = 0, .lvl = 24, .species = SPECIES_KHILRIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdErik[] = {
    { .iv = 0, .lvl = 36, .species = SPECIES_TINSTRY, },
    { .iv = 0, .lvl = 36, .species = SPECIES_ARTHYS, },
    { .iv = 0, .lvl = 36, .species = SPECIES_TERRACAEL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdAvery[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_FUMARIN, },
    { .iv = 0, .lvl = 34, .species = SPECIES_ALKON, },
    { .iv = 0, .lvl = 34, .species = SPECIES_ROKUIL, },
    { .iv = 0, .lvl = 34, .species = SPECIES_PRANJORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdDerek[] = {
    { .iv = 0, .lvl = 41, .species = SPECIES_VEIRAN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdZac[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_TORVIA, },
    { .iv = 0, .lvl = 37, .species = SPECIES_TERRIGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerMarcos[] = {
    { .iv = 0, .lvl = 10, .species = SPECIES_DOXON, },
    { .iv = 0, .lvl = 10, .species = SPECIES_SPIRA, },
    { .iv = 0, .lvl = 10, .species = SPECIES_VESPAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerFranklin[] = {
    { .iv = 0, .lvl = 15, .species = SPECIES_SERENITE, },
    { .iv = 0, .lvl = 15, .species = SPECIES_FUMIGA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerNob[] = {
    { .iv = 0, .lvl = 13, .species = SPECIES_MISTILE, },
    { .iv = 0, .lvl = 13, .species = SPECIES_VINEIA, },
    { .iv = 0, .lvl = 13, .species = SPECIES_TERROBE, },
    { .iv = 0, .lvl = 13, .species = SPECIES_TURBIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerWayne[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_CUIMOS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerAlan[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_SEALORA, },
    { .iv = 0, .lvl = 21, .species = SPECIES_TORVIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerBrice[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_TUNDRAX, },
    { .iv = 0, .lvl = 20, .species = SPECIES_ROCKPIN, },
    { .iv = 0, .lvl = 20, .species = SPECIES_POCHETLIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerClark[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_STELLAL, },
    { .iv = 0, .lvl = 21, .species = SPECIES_DUNRAH, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerTrent[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_SORVUS, },
    { .iv = 0, .lvl = 19, .species = SPECIES_KOROBI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerDudley[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_VERDURA, },
    { .iv = 0, .lvl = 21, .species = SPECIES_PULSX, },
    { .iv = 0, .lvl = 21, .species = SPECIES_CRAGS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerAllen[] = {
    { .iv = 0, .lvl = 25, .species = SPECIES_SORVUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerEric[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_AURSURF, },
    { .iv = 0, .lvl = 20, .species = SPECIES_MOMOZOA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerLenny[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_TORVIA, },
    { .iv = 0, .lvl = 19, .species = SPECIES_LUMIN, },
    { .iv = 0, .lvl = 19, .species = SPECIES_GYROP, },
    { .iv = 0, .lvl = 19, .species = SPECIES_RIVAGER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerOliver[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_SEALORA, },
    { .iv = 0, .lvl = 20, .species = SPECIES_CRYPTIN, },
    { .iv = 0, .lvl = 20, .species = SPECIES_VESPAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerLucas[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_LUMINE, },
    { .iv = 0, .lvl = 21, .species = SPECIES_SERENITE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJared[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_GELRATH, },
    { .iv = 0, .lvl = 28, .species = SPECIES_URAGON, },
    { .iv = 0, .lvl = 28, .species = SPECIES_AEROPE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerMalik[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_EMBERG, },
    { .iv = 0, .lvl = 29, .species = SPECIES_TUNDRAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerErnest[] = {
    { .iv = 0, .lvl = 25, .species = SPECIES_AEROPE, },
    { .iv = 0, .lvl = 25, .species = SPECIES_YUKIMI, },
    { .iv = 0, .lvl = 25, .species = SPECIES_ROKUIL, },
    { .iv = 0, .lvl = 25, .species = SPECIES_KORVIX, },
    { .iv = 0, .lvl = 25, .species = SPECIES_SORVUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerAlex[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_DUSTOR, },
    { .iv = 0, .lvl = 28, .species = SPECIES_TERRACAEL, },
    { .iv = 0, .lvl = 28, .species = SPECIES_TURMADE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerLao[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_SORVOL, },
    { .iv = 0, .lvl = 29, .species = SPECIES_SPIRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Biker1[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerHideo[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_ALKON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerRuben[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_PRANJORA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_AEROLUT, },
    { .iv = 0, .lvl = 28, .species = SPECIES_LUMINUXE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerBilly[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_BOUNDIERE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerNikolas[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_YUMIRA, },
    { .iv = 0, .lvl = 29, .species = SPECIES_TENEBRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaxon[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_TURMADE, },
    { .iv = 0, .lvl = 29, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerWilliam[] = {
    { .iv = 0, .lvl = 25, .species = SPECIES_EMBERG, },
    { .iv = 0, .lvl = 25, .species = SPECIES_SERENITE, },
    { .iv = 0, .lvl = 25, .species = SPECIES_VIRELIA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_CRYPTIN, },
    { .iv = 0, .lvl = 25, .species = SPECIES_CELESTUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerLukas[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_TERRAGO, },
    { .iv = 0, .lvl = 26, .species = SPECIES_SORVUS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_TURMADE, },
    { .iv = 0, .lvl = 26, .species = SPECIES_AURORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerIsaac[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_KOROBI, },
    { .iv = 0, .lvl = 28, .species = SPECIES_MOMORAI, },
    { .iv = 0, .lvl = 28, .species = SPECIES_CRAGS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGerald[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_MIXER, },
    { .iv = 0, .lvl = 29, .species = SPECIES_LURION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar1[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_POJEKT, },
    { .iv = 0, .lvl = 29, .species = SPECIES_FUMINDO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar2[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_AERFER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar3[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_CELESTUS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_AGARIKS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_NURVIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarQuinn[] = {
    { .iv = 0, .lvl = 36, .species = SPECIES_SORVOL, },
    { .iv = 0, .lvl = 36, .species = SPECIES_STELARUS, },
    { .iv = 0, .lvl = 36, .species = SPECIES_VEIRAN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarRamon[] = {
    { .iv = 0, .lvl = 41, .species = SPECIES_TECHURA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarDusty[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_AKVORA, },
    { .iv = 0, .lvl = 37, .species = SPECIES_IGNIFERT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarArnie[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_GLIMION, },
    { .iv = 0, .lvl = 34, .species = SPECIES_LUMINON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar4[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_FUMARIN, },
    { .iv = 0, .lvl = 34, .species = SPECIES_TERRAGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarSimon[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_TINNEK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarLewis[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_BRONZIX, },
    { .iv = 0, .lvl = 34, .species = SPECIES_MOMORAI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBaily[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_ONYRIX, },
    { .iv = 0, .lvl = 21, .species = SPECIES_LURIOS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBraxton[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_VINEKOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBernie[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_KORVISA, },
    { .iv = 0, .lvl = 18, .species = SPECIES_LEMTUR, },
    { .iv = 0, .lvl = 18, .species = SPECIES_AERTHYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanDale[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_TERRAGUL, },
    { .iv = 0, .lvl = 17, .species = SPECIES_AERFER, },
    { .iv = 0, .lvl = 17, .species = SPECIES_TERROBE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanBarny[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_AGATORA, },
    { .iv = 0, .lvl = 17, .species = SPECIES_ASTRUX, },
    { .iv = 0, .lvl = 17, .species = SPECIES_VERALIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanNed[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_POCHETLIN, },
    { .iv = 0, .lvl = 22, .species = SPECIES_CALCIMONK, },
    { .iv = 0, .lvl = 22, .species = SPECIES_TERROBE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanChip[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_LURIOS, },
    { .iv = 0, .lvl = 24, .species = SPECIES_SERENITE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanHank[] = {
    { .iv = 0, .lvl = 27, .species = SPECIES_URAGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanElliot[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_FUMARA, },
    { .iv = 0, .lvl = 21, .species = SPECIES_KLOUDA, },
    { .iv = 0, .lvl = 21, .species = SPECIES_TUNDRAX, },
    { .iv = 0, .lvl = 21, .species = SPECIES_KORVIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanRonald[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_SERILI, },
    { .iv = 0, .lvl = 28, .species = SPECIES_VIRELIA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_CRYSTAZE, },
    { .iv = 0, .lvl = 28, .species = SPECIES_ROCKPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanClaude[] = {
    { .iv = 0, .lvl = 31, .species = SPECIES_TUNDRAX, },
    { .iv = 0, .lvl = 31, .species = SPECIES_CELIGRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade[] = {
    { .iv = 0, .lvl = 27, .species = SPECIES_CALLIGO, },
    { .iv = 0, .lvl = 27, .species = SPECIES_AKVORA, },
    { .iv = 0, .lvl = 27, .species = SPECIES_LEVIORA, },
    { .iv = 0, .lvl = 27, .species = SPECIES_KOROBI, },
    { .iv = 0, .lvl = 27, .species = SPECIES_KORVIX, },
    { .iv = 0, .lvl = 27, .species = SPECIES_IGNINTO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanNolan[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_STELLAL, },
    { .iv = 0, .lvl = 33, .species = SPECIES_ROCKPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanAndrew[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_SCROLIA, },
    { .iv = 0, .lvl = 24, .species = SPECIES_ASTRUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleLuis[] = {
    { .iv = 0, .lvl = 16, .species = SPECIES_VIRIDIA, },
    { .iv = 0, .lvl = 16, .species = SPECIES_MOMOZOA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleRichard[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_MIRAK, },
    { .iv = 0, .lvl = 30, .species = SPECIES_VINTRUB, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleReece[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_VERMEA, },
    { .iv = 0, .lvl = 29, .species = SPECIES_FUMINDO, },
    { .iv = 0, .lvl = 29, .species = SPECIES_NURVIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMatthew[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_GLITAS, },
    { .iv = 0, .lvl = 30, .species = SPECIES_LEVIORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDouglas[] = {
    { .iv = 0, .lvl = 27, .species = SPECIES_TENEBRA, },
    { .iv = 0, .lvl = 27, .species = SPECIES_TINNION, },
    { .iv = 0, .lvl = 27, .species = SPECIES_AURIVORE, },
    { .iv = 0, .lvl = 27, .species = SPECIES_FUMINDO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDavid[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_AURIVORE, },
    { .iv = 0, .lvl = 29, .species = SPECIES_EMBERG, },
    { .iv = 0, .lvl = 29, .species = SPECIES_KORVAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleTony[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_GELRATH, },
    { .iv = 0, .lvl = 30, .species = SPECIES_VESPAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleAxle[] = {
    { .iv = 0, .lvl = 27, .species = SPECIES_VESPAS, },
    { .iv = 0, .lvl = 27, .species = SPECIES_GLIMVIR, },
    { .iv = 0, .lvl = 27, .species = SPECIES_DUNRAH, },
    { .iv = 0, .lvl = 27, .species = SPECIES_ELECTRON, },
    { .iv = 0, .lvl = 27, .species = SPECIES_SERILI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleBarry[] = {
    { .iv = 0, .lvl = 31, .species = SPECIES_SERILI, },
    { .iv = 0, .lvl = 31, .species = SPECIES_LUMINE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDean[] = {
    { .iv = 0, .lvl = 35, .species = SPECIES_DOXYON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDarrin[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_IGNIFERT, },
    { .iv = 0, .lvl = 28, .species = SPECIES_SERENITE, },
    { .iv = 0, .lvl = 28, .species = SPECIES_STELLAL, },
    { .iv = 0, .lvl = 28, .species = SPECIES_CRYSTA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSpencer[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_LURION, },
    { .iv = 0, .lvl = 33, .species = SPECIES_AERODIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJack[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_TERRAGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJerome[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_CRYPTOR, },
    { .iv = 0, .lvl = 33, .species = SPECIES_VESPAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleRoland[] = {
    { .iv = 0, .lvl = 32, .species = SPECIES_POJEKT, },
    { .iv = 0, .lvl = 32, .species = SPECIES_CALCIMONK, },
    { .iv = 0, .lvl = 32, .species = SPECIES_TUNDRAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallKoji[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_KLOUDA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_TUNDRAX, },
    { .iv = 0, .lvl = 28, .species = SPECIES_TURMADE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallLuke[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_AURORA, },
    { .iv = 0, .lvl = 29, .species = SPECIES_NURVIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCamron[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_AERTHYS, },
    { .iv = 0, .lvl = 29, .species = SPECIES_CELESTUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallRaul[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_TUNDRAX, },
    { .iv = 0, .lvl = 29, .species = SPECIES_AERODIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallIsaiah[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_AURIVORE, },
    { .iv = 0, .lvl = 29, .species = SPECIES_EMBERG, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallZeek[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallJamal[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_FANGOR, },
    { .iv = 0, .lvl = 26, .species = SPECIES_MISTILE, },
    { .iv = 0, .lvl = 26, .species = SPECIES_LUMINUXE, },
    { .iv = 0, .lvl = 26, .species = SPECIES_VIRELIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCorey[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_POJEKT, },
    { .iv = 0, .lvl = 29, .species = SPECIES_LEVIORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallChase[] = {
    { .iv = 0, .lvl = 31, .species = SPECIES_KOROBI, },
    { .iv = 0, .lvl = 31, .species = SPECIES_KLOUDA, },
    { .iv = 0, .lvl = 31, .species = SPECIES_FUMARA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerHugo[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_GLIMPIN, },
    { .iv = 0, .lvl = 18, .species = SPECIES_AERHONE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerJasper[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_CRAGS, },
    { .iv = 0, .lvl = 18, .species = SPECIES_FUMIGA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDirk[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_NURVIO, },
    { .iv = 0, .lvl = 18, .species = SPECIES_TURBIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDarian[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_TERRAGUL, },
    { .iv = 0, .lvl = 18, .species = SPECIES_AURARA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerStan[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_LUMINE, },
    { .iv = 0, .lvl = 22, .species = SPECIES_FUMINIA, },
    { .iv = 0, .lvl = 22, .species = SPECIES_YUKIMI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gamer1[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerRich[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_DOXON, },
    { .iv = 0, .lvl = 24, .species = SPECIES_AURARA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyBridget[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_TURBIN, },
    { .iv = 0, .lvl = 21, .species = SPECIES_DOXON, },
    { .iv = 0, .lvl = 21, .species = SPECIES_YUKIMI, },
    { .iv = 0, .lvl = 21, .species = SPECIES_EXCAVA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyTamia[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_KOROBI, },
    { .iv = 0, .lvl = 24, .species = SPECIES_AGARIKS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLori[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_SEALORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLola[] = {
    { .iv = 0, .lvl = 27, .species = SPECIES_GLIMVIR, },
    { .iv = 0, .lvl = 27, .species = SPECIES_TERRAGO, },
    { .iv = 0, .lvl = 27, .species = SPECIES_TECHSOL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautySheila[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_RIVAGER, },
    { .iv = 0, .lvl = 29, .species = SPECIES_VINEKOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleTiffany[] = {
    { .iv = 0, .lvl = 35, .species = SPECIES_ONYXYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNora[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_POJEKT, },
    { .iv = 0, .lvl = 30, .species = SPECIES_PULSAR, },
    { .iv = 0, .lvl = 30, .species = SPECIES_CRYPTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMelissa[] = {
    { .iv = 0, .lvl = 31, .species = SPECIES_MOMORAI, },
    { .iv = 0, .lvl = 31, .species = SPECIES_VINTRUB, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyGrace[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_GLIMVIR, },
    { .iv = 0, .lvl = 29, .species = SPECIES_KARASHY, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyOlivia[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_ELECTRON, },
    { .iv = 0, .lvl = 29, .species = SPECIES_LUMIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLauren[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_DOXYON, },
    { .iv = 0, .lvl = 33, .species = SPECIES_ASTRUX, },
    { .iv = 0, .lvl = 33, .species = SPECIES_POJEKT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAnya[] = {
    { .iv = 0, .lvl = 27, .species = SPECIES_EXCAVA, },
    { .iv = 0, .lvl = 27, .species = SPECIES_GLIMVIR, },
    { .iv = 0, .lvl = 27, .species = SPECIES_CROQUON, },
    { .iv = 0, .lvl = 27, .species = SPECIES_CRYPTIN, },
    { .iv = 0, .lvl = 27, .species = SPECIES_CHRONIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAlice[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_SEALORA, },
    { .iv = 0, .lvl = 30, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleConnie[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_LEMTUR, },
    { .iv = 0, .lvl = 29, .species = SPECIES_CALCIMONK, },
    { .iv = 0, .lvl = 29, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleShirley[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_IGNITOR, },
    { .iv = 0, .lvl = 30, .species = SPECIES_GLIMVIR, },
    { .iv = 0, .lvl = 30, .species = SPECIES_AERFER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicJohan[] = {
    { .iv = 50, .lvl = 31, .species = SPECIES_KLOUDA, },
    { .iv = 50, .lvl = 31, .species = SPECIES_SEALORA, },
    { .iv = 50, .lvl = 31, .species = SPECIES_EXCAVA, },
    { .iv = 50, .lvl = 31, .species = SPECIES_TERRIGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicTyron[] = {
    { .iv = 50, .lvl = 34, .species = SPECIES_STELARUS, },
    { .iv = 50, .lvl = 34, .species = SPECIES_DOXYON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicCameron[] = {
    { .iv = 50, .lvl = 33, .species = SPECIES_EXCELSIA, },
    { .iv = 50, .lvl = 33, .species = SPECIES_CELIGRA, },
    { .iv = 50, .lvl = 33, .species = SPECIES_ASTEROS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicPreston[] = {
    { .iv = 50, .lvl = 38, .species = SPECIES_VINTRUB, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerRandall[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_TERRO, },
    { .iv = 0, .lvl = 20, .species = SPECIES_GLIMPIN, },
    { .iv = 0, .lvl = 20, .species = SPECIES_LUMINE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerLuca[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_FANGOR, },
    { .iv = 0, .lvl = 29, .species = SPECIES_AKMIDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerDalton[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_AEROPEX, },
    { .iv = 0, .lvl = 29, .species = SPECIES_ELECTRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerNelson[] = {
    { .iv = 0, .lvl = 41, .species = SPECIES_LURION, },
    { .iv = 0, .lvl = 41, .species = SPECIES_VERMEA, },
    { .iv = 0, .lvl = 41, .species = SPECIES_POJEKT, },
    { .iv = 0, .lvl = 41, .species = SPECIES_EMBLAZE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerKirk[] = {
    { .iv = 0, .lvl = 31, .species = SPECIES_BOUNDIERE, },
    { .iv = 0, .lvl = 31, .species = SPECIES_TENEBRA, },
    { .iv = 0, .lvl = 31, .species = SPECIES_BOUNDIERE, },
    { .iv = 0, .lvl = 31, .species = SPECIES_CELIGRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerShawn[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_TERRACAEL, },
    { .iv = 0, .lvl = 34, .species = SPECIES_PULSAR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerGregory[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_TENEKROF, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerEdward[] = {
    { .iv = 0, .lvl = 46, .species = SPECIES_VEIRAN, },
    { .iv = 0, .lvl = 46, .species = SPECIES_VERMEA, },
    { .iv = 0, .lvl = 47, .species = SPECIES_ARTHYS, },
    { .iv = 0, .lvl = 48, .species = SPECIES_TERRIGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerKayden[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_GLIMION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerNate[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_CRYSTA, },
    { .iv = 0, .lvl = 34, .species = SPECIES_LUMINUXE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerPhil[] = {
    { .iv = 40, .lvl = 34, .species = SPECIES_CELUMI, },
    { .iv = 40, .lvl = 34, .species = SPECIES_VESPAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEdgar[] = {
    { .iv = 40, .lvl = 33, .species = SPECIES_TENEKROF, },
    { .iv = 40, .lvl = 33, .species = SPECIES_PUPATOR, },
    { .iv = 40, .lvl = 33, .species = SPECIES_FUMINDO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerJason[] = {
    { .iv = 40, .lvl = 43, .species = SPECIES_PULSITE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerCole[] = {
    { .iv = 40, .lvl = 39, .species = SPECIES_VERMEA, },
    { .iv = 40, .lvl = 39, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerVincent[] = {
    { .iv = 40, .lvl = 44, .species = SPECIES_UROBOR, },
    { .iv = 40, .lvl = 44, .species = SPECIES_KORVAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerJohn[] = {
    { .iv = 40, .lvl = 42, .species = SPECIES_IGNITOR, },
    { .iv = 40, .lvl = 42, .species = SPECIES_VERDUUS, },
    { .iv = 40, .lvl = 42, .species = SPECIES_VINTRUB, },
    { .iv = 40, .lvl = 42, .species = SPECIES_CALLIGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperSebastian[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_PULSAR, },
    { .iv = 0, .lvl = 29, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperPerry[] = {
    { .iv = 0, .lvl = 25, .species = SPECIES_GLITAS, },
    { .iv = 0, .lvl = 25, .species = SPECIES_QILINI, },
    { .iv = 0, .lvl = 25, .species = SPECIES_AURARA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_URAGON, },
    { .iv = 0, .lvl = 25, .species = SPECIES_GLIMVIR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_EXCAVA, },
    { .iv = 0, .lvl = 26, .species = SPECIES_NURVIS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_VERALIS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_SERILI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperDonald[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_CALCIMONK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_TINNION, },
    { .iv = 0, .lvl = 29, .species = SPECIES_KAIDIKO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperEdwin[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_URAGON, },
    { .iv = 0, .lvl = 26, .species = SPECIES_AETHRI, },
    { .iv = 0, .lvl = 26, .species = SPECIES_CRYPTIN, },
    { .iv = 0, .lvl = 26, .species = SPECIES_TUNDRAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_BRONZIX, },
    { .iv = 0, .lvl = 28, .species = SPECIES_NURVIS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_CRYPTIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperWilton[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_LUMINE, },
    { .iv = 0, .lvl = 29, .species = SPECIES_EMBERG, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRamiro[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_YUMIRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_CRYSTA, },
    { .iv = 0, .lvl = 26, .species = SPECIES_DUNRAH, },
    { .iv = 0, .lvl = 26, .species = SPECIES_GELRATH, },
    { .iv = 0, .lvl = 26, .species = SPECIES_AGARIKS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRoger[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_TECHSOL, },
    { .iv = 0, .lvl = 30, .species = SPECIES_KAIDIKO, },
    { .iv = 0, .lvl = 30, .species = SPECIES_LURION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperReed[] = {
    { .iv = 0, .lvl = 39, .species = SPECIES_TINNEK, },
    { .iv = 0, .lvl = 39, .species = SPECIES_VEIRAN, },
    { .iv = 0, .lvl = 39, .species = SPECIES_EXCELSIA, },
    { .iv = 0, .lvl = 39, .species = SPECIES_SCROLLUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperKeith[] = {
    { .iv = 0, .lvl = 39, .species = SPECIES_AERODIX, },
    { .iv = 0, .lvl = 39, .species = SPECIES_ONYXYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperCarter[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_ONYXYS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_SERENITE, },
    { .iv = 0, .lvl = 28, .species = SPECIES_CHRONIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMitch[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_VESPAS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_YUKIMI, },
    { .iv = 0, .lvl = 26, .species = SPECIES_GLITAS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_ROCKPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBeck[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_GYROP, },
    { .iv = 0, .lvl = 29, .species = SPECIES_FLORENA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_VESPAS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_TURMADE, },
    { .iv = 0, .lvl = 28, .species = SPECIES_SPIRA, },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltKoichi[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_GELRAID,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_CELESTUS,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltMike[] = {
    {
        .iv = 100,
        .lvl = 31,
        .species = SPECIES_TURBIN,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 31,
        .species = SPECIES_TECHURA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 31,
        .species = SPECIES_STELARUS,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHideki[] = {
    {
        .iv = 100,
        .lvl = 32,
        .species = SPECIES_TERROBE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 32,
        .species = SPECIES_CELESTIS,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltAaron[] = {
    {
        .iv = 100,
        .lvl = 36,
        .species = SPECIES_STELLAL,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHitoshi[] = {
    {
        .iv = 100,
        .lvl = 31,
        .species = SPECIES_LUMINON,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 31,
        .species = SPECIES_CALCIMONK,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 31,
        .species = SPECIES_TERRAGO,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltAtsushi[] = {
    {
        .iv = 100,
        .lvl = 40,
        .species = SPECIES_AGATORA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 40,
        .species = SPECIES_SERENITE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltKiyo[] = {
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_AURIVORE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltTakashi[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_LURION,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_TERRACAEL,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_IGNITOR,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltDaisuke[] = {
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_PULSAR,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_AERAXIS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = SPECIES_FUMINDO,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabSquirtle[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_VITARI,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabBulbasaur[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_PETALIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabCharmander[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = SPECIES_FLARION,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlySquirtle[] = {
    { .iv = 50, .lvl = 9, .species = SPECIES_AERTHYS, },
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_VITARI,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlyBulbasaur[] = {
    { .iv = 50, .lvl = 9, .species = SPECIES_VESPAS, },
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_PETALIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlyCharmander[] = {
    { .iv = 50, .lvl = 9, .species = SPECIES_PULSX, },
    {
        .iv = 50,
        .lvl = 9,
        .species = SPECIES_FLARION,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalCeruleanSquirtle[] = {
    { .iv = 50, .lvl = 17, .species = SPECIES_FUMIGA, },
    { .iv = 50, .lvl = 16, .species = SPECIES_LUMINANT, },
    { .iv = 50, .lvl = 15, .species = SPECIES_LURAS, },
    {
        .iv = 100,
        .lvl = 18,
        .species = SPECIES_VITARI,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalCeruleanBulbasaur[] = {
    { .iv = 50, .lvl = 17, .species = SPECIES_TURBIN, },
    { .iv = 50, .lvl = 16, .species = SPECIES_RIVAGER, },
    { .iv = 50, .lvl = 15, .species = SPECIES_LEVAXON, },
    {
        .iv = 100,
        .lvl = 18,
        .species = SPECIES_PETALIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalCeruleanCharmander[] = {
    { .iv = 50, .lvl = 17, .species = SPECIES_ALKON, },
    { .iv = 50, .lvl = 16, .species = SPECIES_VERDURA, },
    { .iv = 50, .lvl = 15, .species = SPECIES_ONYRIX, },
    {
        .iv = 100,
        .lvl = 18,
        .species = SPECIES_FLARION,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTed[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_ELECTRON, },
    { .iv = 0, .lvl = 29, .species = SPECIES_EXCAVA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistConnor[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_TUNDRAX, },
    { .iv = 0, .lvl = 26, .species = SPECIES_RIVAGER, },
    { .iv = 0, .lvl = 26, .species = SPECIES_BOUNDIERE, },
    { .iv = 0, .lvl = 26, .species = SPECIES_TENEBROUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJerry[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_TINSTRY, },
    { .iv = 0, .lvl = 28, .species = SPECIES_FUMARA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_ROKITU, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJose[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_IGNITOR, },
    { .iv = 0, .lvl = 29, .species = SPECIES_EMBERG, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistRodney[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_FLORENA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistBeau[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_TURMADE, },
    { .iv = 0, .lvl = 26, .species = SPECIES_ONYXYS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_TECHSOL, },
    { .iv = 0, .lvl = 26, .species = SPECIES_TERRIGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTaylor[] = {
    { .iv = 0, .lvl = 25, .species = SPECIES_VERDURA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_CELIGRA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_CALLISTA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_FUMINDO, },
    { .iv = 0, .lvl = 25, .species = SPECIES_TINNION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJoshua[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_LEVIORA, },
    { .iv = 0, .lvl = 29, .species = SPECIES_QILINI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistParker[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_AERFER, },
    { .iv = 0, .lvl = 29, .species = SPECIES_AERFER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistEd[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_ROCKPIN, },
    { .iv = 0, .lvl = 28, .species = SPECIES_ONYXYS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_LEVIORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTravis[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_SORVOL, },
    { .iv = 0, .lvl = 29, .species = SPECIES_LUMINUXE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistBraydon[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_PUPATOR, },
    { .iv = 0, .lvl = 33, .species = SPECIES_PULSAR, },
    { .iv = 0, .lvl = 33, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistIvan[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_ALKON, },
    { .iv = 0, .lvl = 34, .species = SPECIES_ALKON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BossGiovanni[] = {
    { .iv = 250, .lvl = 25, .species = SPECIES_CRYPTIN, },
    { .iv = 250, .lvl = 24, .species = SPECIES_KOROBI, },
    { .iv = 250, .lvl = 29, .species = SPECIES_GRAPHSIM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BossGiovanni2[] = {
    { .iv = 250, .lvl = 37, .species = SPECIES_DUSTOR, },
    { .iv = 250, .lvl = 35, .species = SPECIES_CALCIMONK, },
    { .iv = 250, .lvl = 37, .species = SPECIES_CHRONIS, },
    { .iv = 250, .lvl = 41, .species = SPECIES_GLIMION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderGiovanni[] = {
    { .iv = 0, .lvl = 45, .species = SPECIES_GRUMM, },
    { .iv = 0, .lvl = 42, .species = SPECIES_TENEKROF, },
    { .iv = 0, .lvl = 44, .species = SPECIES_GYROP, },
    { .iv = 0, .lvl = 45, .species = SPECIES_AKVORA, },
    { .iv = 0, .lvl = 50, .species = SPECIES_ASTEROS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt[] = {
    { .iv = 0, .lvl = 13, .species = SPECIES_POCHET, },
    { .iv = 0, .lvl = 13, .species = SPECIES_GRUMM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt2[] = {
    { .iv = 0, .lvl = 11, .species = SPECIES_TENEBRA, },
    { .iv = 0, .lvl = 11, .species = SPECIES_RUSTHOR, },
    { .iv = 0, .lvl = 11, .species = SPECIES_FUMIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt3[] = {
    { .iv = 0, .lvl = 11, .species = SPECIES_ELECTORO, },
    { .iv = 0, .lvl = 11, .species = SPECIES_MOMOZA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt4[] = {
    { .iv = 0, .lvl = 13, .species = SPECIES_SORVUS, },
    { .iv = 0, .lvl = 13, .species = SPECIES_POCHET, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt5[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_IGNITOR, },
    { .iv = 0, .lvl = 17, .species = SPECIES_IGNITOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt6[] = {
    { .iv = 0, .lvl = 15, .species = SPECIES_TINSTRY, },
    { .iv = 0, .lvl = 15, .species = SPECIES_AEROPE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt7[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_YUKIMI, },
    { .iv = 0, .lvl = 20, .species = SPECIES_AQUAVOLE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt8[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_AERFER, },
    { .iv = 0, .lvl = 21, .species = SPECIES_GLIMPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt9[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_CALCIMONK, },
    { .iv = 0, .lvl = 21, .species = SPECIES_FUMINIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt10[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_KARASHY, },
    { .iv = 0, .lvl = 20, .species = SPECIES_AURSURF, },
    { .iv = 0, .lvl = 20, .species = SPECIES_GLIMPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt11[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_DUSTOS, },
    { .iv = 0, .lvl = 19, .species = SPECIES_TURBIN, },
    { .iv = 0, .lvl = 19, .species = SPECIES_CELESTUS, },
    { .iv = 0, .lvl = 19, .species = SPECIES_CRYSTALUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt12[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_TENEBROUS, },
    { .iv = 0, .lvl = 22, .species = SPECIES_ROCKPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt13[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_QILINI, },
    { .iv = 0, .lvl = 17, .species = SPECIES_FURIX, },
    { .iv = 0, .lvl = 17, .species = SPECIES_VINEKOR, },
    { .iv = 0, .lvl = 17, .species = SPECIES_CRYSTALUX, },
    { .iv = 0, .lvl = 17, .species = SPECIES_PRANJORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt14[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_ROKITU, },
    { .iv = 0, .lvl = 20, .species = SPECIES_VIRIDIA, },
    { .iv = 0, .lvl = 20, .species = SPECIES_VERALIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt15[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_CELIGRA, },
    { .iv = 0, .lvl = 21, .species = SPECIES_GYROP, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt16[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_LEVAXON, },
    { .iv = 0, .lvl = 23, .species = SPECIES_RIVAGER, },
    { .iv = 0, .lvl = 23, .species = SPECIES_TECHSOL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt17[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_PUPATOR, },
    { .iv = 0, .lvl = 23, .species = SPECIES_CELIGRA, },
    { .iv = 0, .lvl = 23, .species = SPECIES_ASTARVE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt18[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_RHINOKS, },
    { .iv = 0, .lvl = 21, .species = SPECIES_SCROLIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt19[] = {
    { .iv = 0, .lvl = 25, .species = SPECIES_VIRELIA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_RIVAGER, },
    { .iv = 0, .lvl = 25, .species = SPECIES_SCROLLUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt20[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_AEROLUT, },
    { .iv = 0, .lvl = 26, .species = SPECIES_TINSTRY, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt21[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_SORVUS, },
    { .iv = 0, .lvl = 23, .species = SPECIES_AURIVORE, },
    { .iv = 0, .lvl = 23, .species = SPECIES_SPIRA, },
    { .iv = 0, .lvl = 23, .species = SPECIES_CRAGS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt22[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_TURMADE, },
    { .iv = 0, .lvl = 26, .species = SPECIES_TURMADE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt23[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_FUMARA, },
    { .iv = 0, .lvl = 29, .species = SPECIES_URAGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt24[] = {
    { .iv = 0, .lvl = 25, .species = SPECIES_BOUNDIERE, },
    { .iv = 0, .lvl = 25, .species = SPECIES_AEROPE, },
    { .iv = 0, .lvl = 25, .species = SPECIES_AKVORA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_AEROLUT, },
    { .iv = 0, .lvl = 25, .species = SPECIES_POJEKT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt25[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_YUMIRA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_KLOUDA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_FLORENA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt26[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_DUNRAH, },
    { .iv = 0, .lvl = 29, .species = SPECIES_TENEKROF, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt27[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_KORVAX, },
    { .iv = 0, .lvl = 28, .species = SPECIES_CRYSTA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt28[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_SERILI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt29[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_STELLAL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt30[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_LUMINE, },
    { .iv = 0, .lvl = 29, .species = SPECIES_LUMINUXE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt31[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_VERDUUS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_VERMEA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_AURORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt32[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_CALLISTA, },
    { .iv = 0, .lvl = 26, .species = SPECIES_AERTHYS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_AERTHYS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_GRUMM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt33[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_IGNITOR, },
    { .iv = 0, .lvl = 29, .species = SPECIES_CELESTUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt34[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_URAGON, },
    { .iv = 0, .lvl = 29, .species = SPECIES_AETHRI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt35[] = {
    { .iv = 0, .lvl = 26, .species = SPECIES_BRONZIX, },
    { .iv = 0, .lvl = 26, .species = SPECIES_CELESTUS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_VESPAS, },
    { .iv = 0, .lvl = 26, .species = SPECIES_ASTEROS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt36[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_BRONZIX, },
    { .iv = 0, .lvl = 28, .species = SPECIES_EXCAVA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_LURIOS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt37[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_SORVUS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_KAIDIKO, },
    { .iv = 0, .lvl = 28, .species = SPECIES_TINSTRY, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt38[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_SPIRA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_FUMARA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_MOMORAI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt39[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_LURION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt40[] = {
    { .iv = 0, .lvl = 25, .species = SPECIES_KORVIX, },
    { .iv = 0, .lvl = 25, .species = SPECIES_VERDURA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_GRUMM, },
    { .iv = 0, .lvl = 25, .species = SPECIES_FLORENA, },
    { .iv = 0, .lvl = 25, .species = SPECIES_CROQUON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt41[] = {
    { .iv = 0, .lvl = 32, .species = SPECIES_ROCKPIN, },
    { .iv = 0, .lvl = 32, .species = SPECIES_ONYXYS, },
    { .iv = 0, .lvl = 32, .species = SPECIES_CELIGRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerSamuel[] = {
    { .iv = 100, .lvl = 37, .species = SPECIES_TORVIA, },
    { .iv = 100, .lvl = 37, .species = SPECIES_PULSITE, },
    { .iv = 100, .lvl = 38, .species = SPECIES_LEVIORA, },
    { .iv = 100, .lvl = 39, .species = SPECIES_KORVAX, },
    { .iv = 100, .lvl = 39, .species = SPECIES_FUMARIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerGeorge[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_ROKITU, },
    { .iv = 100, .lvl = 42, .species = SPECIES_SEALEIRA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_NURIMAR, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AERODIX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_DUSTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerColby[] = {
    { .iv = 100, .lvl = 41, .species = SPECIES_STELARUS, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AERODIX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_CRYSTA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AGRAKA, },
    { .iv = 100, .lvl = 43, .species = SPECIES_ONYXYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerPaul[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_FLORENA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_CROQUON, },
    { .iv = 100, .lvl = 42, .species = SPECIES_LEVIORA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_ARTHYS, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TERRIGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerRolando[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_DUSTOR, },
    { .iv = 100, .lvl = 42, .species = SPECIES_EXCELSIA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_KOROBI, },
    { .iv = 100, .lvl = 42, .species = SPECIES_CALLISTA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_LEVIORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerGilbert[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_VEIRAN, },
    { .iv = 100, .lvl = 42, .species = SPECIES_SCROLLUX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_SPIRA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TERRAGO, },
    { .iv = 100, .lvl = 42, .species = SPECIES_MIRAK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerOwen[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_TERRIGON, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TERRACAEL, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TARNEX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AERODIX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_CULMOTH, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerBerke[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_TARNEX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_ASTARVE, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TARNEX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_VEIRAN, },
    { .iv = 100, .lvl = 42, .species = SPECIES_KHILRIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerYuji[] = {
    { .iv = 100, .lvl = 38, .species = SPECIES_KAIDIKO, },
    { .iv = 100, .lvl = 38, .species = SPECIES_DUSTOR, },
    { .iv = 100, .lvl = 38, .species = SPECIES_TERRACAEL, },
    { .iv = 100, .lvl = 38, .species = SPECIES_KORVAX, },
    { .iv = 100, .lvl = 38, .species = SPECIES_TERRO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerWarren[] = {
    { .iv = 100, .lvl = 37, .species = SPECIES_TURMAG, },
    { .iv = 100, .lvl = 37, .species = SPECIES_VINTRUB, },
    { .iv = 100, .lvl = 38, .species = SPECIES_GLITRON, },
    { .iv = 100, .lvl = 39, .species = SPECIES_MIXER, },
    { .iv = 100, .lvl = 39, .species = SPECIES_DUNARE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerMary[] = {
    { .iv = 100, .lvl = 22, .species = SPECIES_KORVIX, },
    { .iv = 100, .lvl = 22, .species = SPECIES_PULSX, },
    { .iv = 100, .lvl = 22, .species = SPECIES_PRANJORA, },
    { .iv = 100, .lvl = 22, .species = SPECIES_YUKIMI, },
    { .iv = 100, .lvl = 22, .species = SPECIES_ROKUIL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerCaroline[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_TARNEX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_KLODION, },
    { .iv = 100, .lvl = 42, .species = SPECIES_SORVOL, },
    { .iv = 100, .lvl = 42, .species = SPECIES_FURIX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_VINTRUB, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerAlexa[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_TENEBRA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_POJEKT, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AEROPEX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AERODIX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TENEKROF, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerShannon[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_TARNEX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_LURION, },
    { .iv = 100, .lvl = 42, .species = SPECIES_POJEKT, },
    { .iv = 100, .lvl = 42, .species = SPECIES_YUMIRA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_DUNARE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerNaomi[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_TERRO, },
    { .iv = 100, .lvl = 42, .species = SPECIES_CULMOTH, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AKMIDA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AURIVORE, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TARNEX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerBrooke[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_FLORENA, },
    { .iv = 100, .lvl = 42, .species = SPECIES_DOXYON, },
    { .iv = 100, .lvl = 42, .species = SPECIES_MIRAK, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TARNEX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_ASTRUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerAustina[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_KLODION, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AETHRI, },
    { .iv = 100, .lvl = 42, .species = SPECIES_QILINI, },
    { .iv = 100, .lvl = 42, .species = SPECIES_NURIMAR, },
    { .iv = 100, .lvl = 42, .species = SPECIES_KORVAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerJulie[] = {
    { .iv = 100, .lvl = 42, .species = SPECIES_GLIMION, },
    { .iv = 100, .lvl = 42, .species = SPECIES_SCROLLUX, },
    { .iv = 100, .lvl = 42, .species = SPECIES_GLIMION, },
    { .iv = 100, .lvl = 42, .species = SPECIES_TURMAG, },
    { .iv = 100, .lvl = 42, .species = SPECIES_AKVORA, },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourLorelei[] = {
    {
        .iv = 250,
        .lvl = 52,
        .species = SPECIES_DUNARE,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 51,
        .species = SPECIES_CELESTIS,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 52,
        .species = SPECIES_LUMIN,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = SPECIES_TINSTRY,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = SPECIES_GLIMPIN,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourBruno[] = {
    {
        .iv = 250,
        .lvl = 51,
        .species = SPECIES_CELIGRA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = SPECIES_CALCIMONK,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = SPECIES_VINEIA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = SPECIES_KLODION,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 56,
        .species = SPECIES_SCROLIA,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourAgatha[] = {
    {
        .iv = 250,
        .lvl = 54,
        .species = SPECIES_GLITRON,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = SPECIES_AERFER,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = SPECIES_SERENITE,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 56,
        .species = SPECIES_ARTHYS,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 58,
        .species = SPECIES_VESPAS,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourLance[] = {
    {
        .iv = 250,
        .lvl = 56,
        .species = SPECIES_TORVIA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = SPECIES_TURMAG,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = SPECIES_TURBIN,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 58,
        .species = SPECIES_SPIRA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 60,
        .species = SPECIES_LEVAXON,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderBrock[] = {
    { .iv = 0, .lvl = 12, .species = SPECIES_ALKON, },
    { .iv = 0, .lvl = 14, .species = SPECIES_LUMIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderMisty[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_KAIDIKO, },
    { .iv = 0, .lvl = 21, .species = SPECIES_CELESTUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderLtSurge[] = {
    { .iv = 0, .lvl = 21, .species = SPECIES_CUIMOS, },
    { .iv = 0, .lvl = 18, .species = SPECIES_AURARA, },
    { .iv = 0, .lvl = 24, .species = SPECIES_YUKIMI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderErika[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_CALLIGO, },
    { .iv = 0, .lvl = 24, .species = SPECIES_BRONZIX, },
    { .iv = 0, .lvl = 29, .species = SPECIES_CALCIMONK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderKoga[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_TERRIGON, },
    { .iv = 0, .lvl = 39, .species = SPECIES_ROCKPIN, },
    { .iv = 0, .lvl = 37, .species = SPECIES_EMBLAZE, },
    { .iv = 0, .lvl = 43, .species = SPECIES_TINNEK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderBlaine[] = {
    { .iv = 0, .lvl = 42, .species = SPECIES_FANGOR, },
    { .iv = 0, .lvl = 40, .species = SPECIES_ELECTRON, },
    { .iv = 0, .lvl = 42, .species = SPECIES_FUMARIN, },
    { .iv = 0, .lvl = 47, .species = SPECIES_GRUMM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderSabrina[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_POJEKT, },
    { .iv = 0, .lvl = 37, .species = SPECIES_VERDUUS, },
    { .iv = 0, .lvl = 38, .species = SPECIES_EMBLAZE, },
    { .iv = 0, .lvl = 43, .species = SPECIES_ASTARVE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanThomas[] = {
    { .iv = 0, .lvl = 18, .species = SPECIES_ONYRIX, },
    { .iv = 0, .lvl = 18, .species = SPECIES_AERHONE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanArthur[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_TERRO, },
    { .iv = 0, .lvl = 19, .species = SPECIES_VINEKOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanTucker[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_VINEKOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanNorton[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_TARNEX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanWalter[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_TERRIGRON, },
    { .iv = 0, .lvl = 17, .species = SPECIES_MIXER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneSquirtle[] = {
    { .iv = 50, .lvl = 19, .species = SPECIES_AERHONE, },
    { .iv = 50, .lvl = 16, .species = SPECIES_DOXON, },
    { .iv = 50, .lvl = 18, .species = SPECIES_MOMOZOA, },
    {
        .iv = 100,
        .lvl = 20,
        .species = SPECIES_VITALUXE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneBulbasaur[] = {
    { .iv = 50, .lvl = 19, .species = SPECIES_TUNDRAX, },
    { .iv = 50, .lvl = 16, .species = SPECIES_RUSTHOR, },
    { .iv = 50, .lvl = 18, .species = SPECIES_FURIX, },
    {
        .iv = 100,
        .lvl = 20,
        .species = SPECIES_PETALUX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneCharmander[] = {
    { .iv = 50, .lvl = 19, .species = SPECIES_VERALIS, },
    { .iv = 50, .lvl = 16, .species = SPECIES_RHINOKS, },
    { .iv = 50, .lvl = 18, .species = SPECIES_AERHONE, },
    {
        .iv = 100,
        .lvl = 20,
        .species = SPECIES_FLARIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerSquirtle[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_FANGOR, },
    { .iv = 100, .lvl = 23, .species = SPECIES_ASTARVE, },
    { .iv = 100, .lvl = 22, .species = SPECIES_VINEKOR, },
    { .iv = 100, .lvl = 20, .species = SPECIES_AURSURF, },
    {
        .iv = 100,
        .lvl = 25,
        .species = SPECIES_VITALUXE,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerBulbasaur[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_GLIMVIR, },
    { .iv = 100, .lvl = 23, .species = SPECIES_GLIMVIR, },
    { .iv = 100, .lvl = 22, .species = SPECIES_POCHETLIN, },
    { .iv = 100, .lvl = 20, .species = SPECIES_AQUAVOLE, },
    {
        .iv = 100,
        .lvl = 25,
        .species = SPECIES_PETALUX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerCharmander[] = {
    { .iv = 100, .lvl = 25, .species = SPECIES_CELESTUS, },
    { .iv = 100, .lvl = 23, .species = SPECIES_ASTARVE, },
    { .iv = 100, .lvl = 22, .species = SPECIES_DUNRAH, },
    { .iv = 100, .lvl = 20, .species = SPECIES_AURSURF, },
    {
        .iv = 100,
        .lvl = 25,
        .species = SPECIES_FLARIX,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphSquirtle[] = {
    { .iv = 100, .lvl = 37, .species = SPECIES_TURMAG, },
    { .iv = 100, .lvl = 38, .species = SPECIES_IGNINTO, },
    { .iv = 100, .lvl = 35, .species = SPECIES_URAGON, },
    { .iv = 100, .lvl = 35, .species = SPECIES_LUMINUXE, },
    {
        .iv = 150,
        .lvl = 40,
        .species = SPECIES_AETHERON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphBulbasaur[] = {
    { .iv = 100, .lvl = 37, .species = SPECIES_GYROP, },
    { .iv = 100, .lvl = 38, .species = SPECIES_ASTEROS, },
    { .iv = 100, .lvl = 35, .species = SPECIES_URAGON, },
    { .iv = 100, .lvl = 35, .species = SPECIES_VEIRAN, },
    {
        .iv = 150,
        .lvl = 40,
        .species = SPECIES_PETALIA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphCharmander[] = {
    { .iv = 100, .lvl = 37, .species = SPECIES_GLITRON, },
    { .iv = 100, .lvl = 38, .species = SPECIES_SCROLLUX, },
    { .iv = 100, .lvl = 35, .species = SPECIES_AURORA, },
    { .iv = 100, .lvl = 35, .species = SPECIES_IGNINTO, },
    {
        .iv = 150,
        .lvl = 40,
        .species = SPECIES_VICTIRAH,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22LateSquirtle[] = {
    { .iv = 150, .lvl = 47, .species = SPECIES_ALKON, },
    { .iv = 150, .lvl = 45, .species = SPECIES_LEMTUR, },
    { .iv = 150, .lvl = 45, .species = SPECIES_TECHURA, },
    { .iv = 150, .lvl = 45, .species = SPECIES_AURIVORE, },
    { .iv = 150, .lvl = 47, .species = SPECIES_DUNARE, },
    {
        .iv = 250,
        .lvl = 53,
        .species = SPECIES_AETHERON,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22LateBulbasaur[] = {
    { .iv = 150, .lvl = 47, .species = SPECIES_AETHRI, },
    { .iv = 150, .lvl = 45, .species = SPECIES_TENEKROF, },
    { .iv = 150, .lvl = 45, .species = SPECIES_GRUMM, },
    { .iv = 150, .lvl = 45, .species = SPECIES_LEVIORA, },
    { .iv = 150, .lvl = 47, .species = SPECIES_MIRAK, },
    {
        .iv = 250,
        .lvl = 53,
        .species = SPECIES_PETALIA,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22LateCharmander[] = {
    { .iv = 150, .lvl = 47, .species = SPECIES_STELARUS, },
    { .iv = 150, .lvl = 45, .species = SPECIES_IGNIFERT, },
    { .iv = 150, .lvl = 45, .species = SPECIES_UROBOR, },
    { .iv = 150, .lvl = 45, .species = SPECIES_GLIMION, },
    { .iv = 150, .lvl = 47, .species = SPECIES_TENEBRA, },
    {
        .iv = 250,
        .lvl = 53,
        .species = SPECIES_VICTIRAH,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionFirstSquirtle[] = {
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_FUMINIA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_SPIRA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_CELESTIS,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_EMBRIS,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 61,
        .species = SPECIES_ROKUIL,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_TURBIN,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionFirstBulbasaur[] = {
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_AEROPE,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_FLENIXA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_SEALEIRA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_ALKON,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 61,
        .species = SPECIES_CULMOTH,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_BRONZIX,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionFirstCharmander[] = {
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_TERRACAEL,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = SPECIES_FUMIX,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_ALKON,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = SPECIES_LUMINANT,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 61,
        .species = SPECIES_SEALEIRA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_TENEKROF,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerPatricia[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_KORVIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerCarly[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_LEMTUR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerHope[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_SERENITE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerPaula[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_VESPAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerLaurel[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_CALLIGO, },
    { .iv = 0, .lvl = 23, .species = SPECIES_IGNIFERT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJody[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_TUNDRAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerTammy[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_KLOUDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerRuth[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_FUMARA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerKarina[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_ONYRIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJanae[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_TERRO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerAngelica[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_SCROLIA, },
    { .iv = 0, .lvl = 22, .species = SPECIES_AETHRI, },
    { .iv = 0, .lvl = 22, .species = SPECIES_GLITAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerEmilia[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_DUSTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJennifer[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_RIVAGER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler1[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_CHRONIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler2[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_KLOUDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler3[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_TERRAGUL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler4[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_MOMOZOA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler5[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_CALLIGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler6[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_AKMIDA, },
    { .iv = 0, .lvl = 22, .species = SPECIES_LUMINANT, },
    { .iv = 0, .lvl = 22, .species = SPECIES_FLORENA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler7[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_BOUNDIERE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler8[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_KORVIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerAmanda[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_CRYSTA, },
    { .iv = 0, .lvl = 34, .species = SPECIES_GLITRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerStacy[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_CULMOTH, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerTasha[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_FLORENA, },
    { .iv = 0, .lvl = 33, .species = SPECIES_YUMIRA, },
    { .iv = 0, .lvl = 33, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerJeremy[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_CRYSTALUX, },
    { .iv = 0, .lvl = 20, .species = SPECIES_CROQUON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlma[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_CRYSTAZE, },
    { .iv = 0, .lvl = 28, .species = SPECIES_ASTRUX, },
    { .iv = 0, .lvl = 28, .species = SPECIES_TINNION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_VINEKOR, },
    { .iv = 0, .lvl = 24, .species = SPECIES_KOROBI, },
    { .iv = 0, .lvl = 24, .species = SPECIES_KAELOS, },
    { .iv = 0, .lvl = 24, .species = SPECIES_SORVUS, },
    { .iv = 0, .lvl = 24, .species = SPECIES_CALCIMONK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerValerie[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_PUPATOR, },
    { .iv = 0, .lvl = 30, .species = SPECIES_SCROLLUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerGwen[] = {
    { .iv = 0, .lvl = 27, .species = SPECIES_AERFER, },
    { .iv = 0, .lvl = 27, .species = SPECIES_TENEKROF, },
    { .iv = 0, .lvl = 27, .species = SPECIES_SCROLLUX, },
    { .iv = 0, .lvl = 27, .species = SPECIES_PUPATOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerVirgil[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_CELESTUS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_VERDUUS, },
    { .iv = 0, .lvl = 28, .species = SPECIES_URAGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperFlint[] = {
    { .iv = 0, .lvl = 14, .species = SPECIES_GLITAS, },
    { .iv = 0, .lvl = 14, .species = SPECIES_LUMIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy[] = {
    { .iv = 0, .lvl = 31, .species = SPECIES_TERRACAEL, },
    { .iv = 0, .lvl = 31, .species = SPECIES_LUMINE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIrene[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_ALKON, },
    { .iv = 0, .lvl = 30, .species = SPECIES_RHINOKS, },
    { .iv = 0, .lvl = 30, .species = SPECIES_PULSAR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerDana[] = {
    { .iv = 0, .lvl = 20, .species = SPECIES_KLOUDA, },
    { .iv = 0, .lvl = 20, .species = SPECIES_TINTINN, },
    { .iv = 0, .lvl = 20, .species = SPECIES_MOMOZOA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAriana[] = {
    { .iv = 0, .lvl = 19, .species = SPECIES_CUIMOS, },
    { .iv = 0, .lvl = 19, .species = SPECIES_AERFER, },
    { .iv = 0, .lvl = 19, .species = SPECIES_BRONZIX, },
    { .iv = 0, .lvl = 19, .species = SPECIES_GLIMPIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerLeah[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_SORVUS, },
    { .iv = 0, .lvl = 22, .species = SPECIES_AGATORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJustin[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_FUMINDO, },
    { .iv = 0, .lvl = 29, .species = SPECIES_TURMADE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerYazmin[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_KORVAX, },
    { .iv = 0, .lvl = 29, .species = SPECIES_MOMORAI, },
    { .iv = 0, .lvl = 29, .species = SPECIES_TINNION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKindra[] = {
    { .iv = 0, .lvl = 28, .species = SPECIES_SEALORA, },
    { .iv = 0, .lvl = 28, .species = SPECIES_TECHSOL, },
    { .iv = 0, .lvl = 28, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_EXCAVA, },
    { .iv = 0, .lvl = 29, .species = SPECIES_ASTRUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCelia[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_FUMARIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanBrooks[] = {
    { .iv = 0, .lvl = 23, .species = SPECIES_DUNRAH, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanLamar[] = {
    { .iv = 0, .lvl = 17, .species = SPECIES_KARASHY, },
    { .iv = 0, .lvl = 17, .species = SPECIES_CALLIGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsEliAnne[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_TINTINN, },
    { .iv = 0, .lvl = 22, .species = SPECIES_RHINOKS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CoolCoupleRayTyra[] = {
    { .iv = 100, .lvl = 45, .species = SPECIES_VERDUUS, },
    { .iv = 100, .lvl = 45, .species = SPECIES_AEROPEX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_AEROPE, },
    { .iv = 0, .lvl = 24, .species = SPECIES_AKVORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsKiriJan[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_TURMADE, },
    { .iv = 0, .lvl = 29, .species = SPECIES_VESPAS, },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya[] = {
    {
        .iv = 50,
        .lvl = 29,
        .species = SPECIES_ALKON,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 29,
        .species = SPECIES_VESPAS,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleLeaJed[] = {
    { .iv = 0, .lvl = 29, .species = SPECIES_SCROLLUX, },
    { .iv = 0, .lvl = 29, .species = SPECIES_FUMINDO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLiaLuc[] = {
    { .iv = 0, .lvl = 30, .species = SPECIES_FUMARA, },
    { .iv = 0, .lvl = 30, .species = SPECIES_KLOUDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_LUMINUXE, },
    { .iv = 0, .lvl = 33, .species = SPECIES_GLIMION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher4[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher5[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher6[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher7[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher8[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen3[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_SERENITE, },
    { .iv = 60, .lvl = 28, .species = SPECIES_CRYSTAZE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen4[] = {
    { .iv = 120, .lvl = 48, .species = SPECIES_UROBOR, },
    { .iv = 120, .lvl = 48, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad2[] = {
    { .iv = 20, .lvl = 20, .species = SPECIES_VINEKOR, },
    { .iv = 20, .lvl = 20, .species = SPECIES_ASTARVE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli2[] = {
    { .iv = 20, .lvl = 20, .species = SPECIES_MIRAK, },
    { .iv = 20, .lvl = 20, .species = SPECIES_AERTHYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli3[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_LURIOS, },
    { .iv = 60, .lvl = 28, .species = SPECIES_RHINOKS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy2[] = {
    { .iv = 20, .lvl = 19, .species = SPECIES_CRAGS, },
    { .iv = 20, .lvl = 19, .species = SPECIES_AERFER, },
    { .iv = 20, .lvl = 19, .species = SPECIES_TUNDRAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy3[] = {
    { .iv = 60, .lvl = 27, .species = SPECIES_ELECTRON, },
    { .iv = 60, .lvl = 27, .species = SPECIES_CALLISTA, },
    { .iv = 60, .lvl = 27, .species = SPECIES_EMBERG, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy4[] = {
    { .iv = 120, .lvl = 52, .species = SPECIES_DUSTOR, },
    { .iv = 120, .lvl = 52, .species = SPECIES_STELARUS, },
    { .iv = 120, .lvl = 52, .species = SPECIES_NURIMAR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad3[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_GLITAS, },
    { .iv = 60, .lvl = 28, .species = SPECIES_POJEKT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice2[] = {
    { .iv = 20, .lvl = 20, .species = SPECIES_PRANJORA, },
    { .iv = 20, .lvl = 20, .species = SPECIES_CELESTUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice3[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_LURIOS, },
    { .iv = 60, .lvl = 28, .species = SPECIES_TERRO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad4[] = {
    { .iv = 80, .lvl = 48, .species = SPECIES_RIVILE, },
    { .iv = 80, .lvl = 48, .species = SPECIES_IGNIFERT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerFranklin2[] = {
    { .iv = 40, .lvl = 25, .species = SPECIES_LUMIN, },
    { .iv = 40, .lvl = 25, .species = SPECIES_TERRAGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnProfProfOak[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerBrendan[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerMay[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerRed[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerLeaf[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt42[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_RUSTHOR, },
    { .iv = 0, .lvl = 49, .species = SPECIES_AKVORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicJaclyn[] = {
    { .iv = 100, .lvl = 48, .species = SPECIES_ARTHYS, },
    { .iv = 100, .lvl = 48, .species = SPECIES_ONYXYS, },
    { .iv = 100, .lvl = 49, .species = SPECIES_FUMINDO, },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon[] = {
    {
        .iv = 50,
        .lvl = 37,
        .species = SPECIES_MOMOZOA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 37,
        .species = SPECIES_TINNEK,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAmira[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_PULSAR, },
    { .iv = 0, .lvl = 35, .species = SPECIES_DUSTOR, },
    { .iv = 0, .lvl = 34, .species = SPECIES_SEALORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAlize[] = {
    { .iv = 30, .lvl = 48, .species = SPECIES_TENEKROF, },
    { .iv = 30, .lvl = 48, .species = SPECIES_AKVORA, },
    { .iv = 30, .lvl = 48, .species = SPECIES_ROKUIL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerNicolas[] = {
    { .iv = 100, .lvl = 51, .species = SPECIES_VERDUUS, },
    { .iv = 100, .lvl = 51, .species = SPECIES_EXCELSIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerMadeline[] = {
    { .iv = 100, .lvl = 51, .species = SPECIES_GRAPHSIM, },
    { .iv = 100, .lvl = 51, .species = SPECIES_SERINAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyNikki[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_SEALORA, },
    { .iv = 0, .lvl = 37, .species = SPECIES_FLORENA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacStanly[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_CRYSTA, },
    { .iv = 0, .lvl = 48, .species = SPECIES_BOUNDIERE, },
    { .iv = 0, .lvl = 48, .species = SPECIES_LUMINUXE, },
};

static const struct TrainerMonItemDefaultMoves sParty_LadyJacki[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_TERRIGON,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = SPECIES_YUMIRA,
        .heldItem = ITEM_STARDUST,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterDaisy[] = {
    { .iv = 50, .lvl = 50, .species = SPECIES_EXCELSIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGoon[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_MIRAK, },
    { .iv = 0, .lvl = 37, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGoon2[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_AEROPEX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGoon3[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_GLITRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Biker2[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherAnthony[] = {
    { .iv = 0, .lvl = 7, .species = SPECIES_TERRAKO, },
    { .iv = 0, .lvl = 8, .species = SPECIES_TERRAKO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherCharlie[] = {
    { .iv = 0, .lvl = 7, .species = SPECIES_EXCAVA, },
    { .iv = 0, .lvl = 7, .species = SPECIES_TUNDRAX, },
    { .iv = 0, .lvl = 7, .species = SPECIES_TURBIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsEliAnne2[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_AEROLUT, },
    { .iv = 60, .lvl = 28, .species = SPECIES_VINEKOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJohnson[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_SCROLLUX, },
    { .iv = 0, .lvl = 33, .species = SPECIES_PUPATOR, },
    { .iv = 0, .lvl = 34, .species = SPECIES_SERINAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerRicardo[] = {
    { .iv = 0, .lvl = 22, .species = SPECIES_SORVUS, },
    { .iv = 0, .lvl = 22, .species = SPECIES_TURMADE, },
    { .iv = 0, .lvl = 23, .species = SPECIES_FUMARA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaren[] = {
    { .iv = 0, .lvl = 24, .species = SPECIES_AETHRI, },
    { .iv = 0, .lvl = 24, .species = SPECIES_TERRAGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt43[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_BOUNDIERE, },
    { .iv = 0, .lvl = 37, .species = SPECIES_UROBOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt44[] = {
    { .iv = 0, .lvl = 35, .species = SPECIES_AGARIKS, },
    { .iv = 0, .lvl = 35, .species = SPECIES_LUMINON, },
    { .iv = 0, .lvl = 35, .species = SPECIES_EMBLAZE, },
    { .iv = 0, .lvl = 35, .species = SPECIES_TINNEK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt45[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_ASTARVE, },
    { .iv = 0, .lvl = 38, .species = SPECIES_BRONZIX, },
    { .iv = 0, .lvl = 38, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt46[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_AURIVORE, },
    { .iv = 0, .lvl = 48, .species = SPECIES_CULMOTH, },
    { .iv = 0, .lvl = 48, .species = SPECIES_AETHRI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt47[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_EXCELSIA, },
    { .iv = 0, .lvl = 48, .species = SPECIES_GLIMION, },
    { .iv = 0, .lvl = 48, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt48[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_VINTRUB, },
    { .iv = 0, .lvl = 49, .species = SPECIES_KOROBI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketAdmin[] = {
    { .iv = 150, .lvl = 52, .species = SPECIES_UROBOR, },
    { .iv = 150, .lvl = 53, .species = SPECIES_TERRAGO, },
    { .iv = 150, .lvl = 54, .species = SPECIES_SCROLLUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketAdmin2[] = {
    { .iv = 200, .lvl = 53, .species = SPECIES_GLIMMOR, },
    { .iv = 200, .lvl = 54, .species = SPECIES_VESPERA, },
    { .iv = 200, .lvl = 55, .species = SPECIES_IGNIFERT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistGideon[] = {
    { .iv = 0, .lvl = 46, .species = SPECIES_DUSTOR, },
    { .iv = 0, .lvl = 46, .species = SPECIES_GYROP, },
    { .iv = 0, .lvl = 46, .species = SPECIES_GLIMION, },
    { .iv = 0, .lvl = 46, .species = SPECIES_SERINAX, },
    { .iv = 0, .lvl = 46, .species = SPECIES_MIXER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAmara[] = {
    { .iv = 0, .lvl = 36, .species = SPECIES_VINTRUB, },
    { .iv = 0, .lvl = 36, .species = SPECIES_ONYXYS, },
    { .iv = 0, .lvl = 36, .species = SPECIES_PULSITE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMaria[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_PULSITE, },
    { .iv = 0, .lvl = 37, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAbigail[] = {
    { .iv = 0, .lvl = 35, .species = SPECIES_ROCKPIN, },
    { .iv = 0, .lvl = 36, .species = SPECIES_EXCELSIA, },
    { .iv = 0, .lvl = 37, .species = SPECIES_GRAPHSIM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleFinn[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_TARNEX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleGarrett[] = {
    { .iv = 0, .lvl = 35, .species = SPECIES_NURIMAR, },
    { .iv = 0, .lvl = 35, .species = SPECIES_TENEBRA, },
    { .iv = 0, .lvl = 38, .species = SPECIES_AKMIDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanTommy[] = {
    { .iv = 0, .lvl = 33, .species = SPECIES_AKVORA, },
    { .iv = 0, .lvl = 33, .species = SPECIES_STELLAL, },
    { .iv = 0, .lvl = 35, .species = SPECIES_ASTRUX, },
    { .iv = 0, .lvl = 35, .species = SPECIES_SORVOL, },
    { .iv = 0, .lvl = 35, .species = SPECIES_EMBLAZE, },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya[] = {
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_PUPATOR,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_CRYPTOR,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_FURIX,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = SPECIES_CALCIMONK,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_CHRONIS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = SPECIES_LEVIORA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperBryce[] = {
    { .iv = 0, .lvl = 36, .species = SPECIES_RUSTHOR, },
    { .iv = 0, .lvl = 36, .species = SPECIES_IGNITOR, },
    { .iv = 0, .lvl = 36, .species = SPECIES_IGNINTO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerClaire[] = {
    { .iv = 0, .lvl = 35, .species = SPECIES_ALKON, },
    { .iv = 0, .lvl = 35, .species = SPECIES_FANGOR, },
    { .iv = 0, .lvl = 35, .species = SPECIES_IGNIFERT, },
    { .iv = 0, .lvl = 35, .species = SPECIES_MISTILE, },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia[] = {
    {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_ONYRIX,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 39,
        .species = SPECIES_STELARUS,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyViolet[] = {
    { .iv = 0, .lvl = 36, .species = SPECIES_LUMINUXE, },
    { .iv = 0, .lvl = 36, .species = SPECIES_NURIMAR, },
    { .iv = 0, .lvl = 36, .species = SPECIES_GLITRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAlexis[] = {
    { .iv = 0, .lvl = 34, .species = SPECIES_STELLAL, },
    { .iv = 0, .lvl = 34, .species = SPECIES_TERRIGON, },
    { .iv = 0, .lvl = 34, .species = SPECIES_STELARUS, },
    { .iv = 0, .lvl = 34, .species = SPECIES_KHILRIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsJoyMeg[] = {
    { .iv = 0, .lvl = 37, .species = SPECIES_ARTHYS, },
    { .iv = 0, .lvl = 37, .species = SPECIES_ASTRUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleTisha[] = {
    { .iv = 0, .lvl = 38, .species = SPECIES_GLIMION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterCelina[] = {
    { .iv = 50, .lvl = 50, .species = SPECIES_TINSTRY, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterRayna[] = {
    { .iv = 50, .lvl = 50, .species = SPECIES_DOXYON, },
};

static const struct TrainerMonItemDefaultMoves sParty_LadyGillian[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = SPECIES_FUMINIA,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = SPECIES_VESPERA,
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_TURMAG,
        .heldItem = ITEM_NUGGET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDestin[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_VINTRUB, },
    { .iv = 0, .lvl = 48, .species = SPECIES_LUMINOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleToby[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_VEIRAN, },
    { .iv = 0, .lvl = 48, .species = SPECIES_RIVILE, },
    { .iv = 0, .lvl = 48, .species = SPECIES_CALCLION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt49[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_LEVIORA, },
    { .iv = 0, .lvl = 48, .species = SPECIES_TERRACAEL, },
    { .iv = 0, .lvl = 48, .species = SPECIES_TERRIGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt50[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_GYROP, },
    { .iv = 0, .lvl = 49, .species = SPECIES_TENEBRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt51[] = {
    { .iv = 50, .lvl = 48, .species = SPECIES_MIRAK, },
    { .iv = 50, .lvl = 48, .species = SPECIES_LURION, },
    { .iv = 50, .lvl = 48, .species = SPECIES_AEROPEX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMilo[] = {
    { .iv = 0, .lvl = 47, .species = SPECIES_CALLISTA, },
    { .iv = 0, .lvl = 49, .species = SPECIES_CRYSTAZE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChaz[] = {
    { .iv = 0, .lvl = 47, .species = SPECIES_TINNEK, },
    { .iv = 0, .lvl = 49, .species = SPECIES_CELUMI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperHarold[] = {
    { .iv = 0, .lvl = 47, .species = SPECIES_MOMORAI, },
    { .iv = 0, .lvl = 49, .species = SPECIES_VERDUUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanTylor[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_SERINAX, },
    { .iv = 0, .lvl = 49, .species = SPECIES_VESPERA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMymo[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_ALKON, },
    { .iv = 0, .lvl = 49, .species = SPECIES_TINNEK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNicole[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_MIRAK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroAvaGeb[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_AURORA, },
    { .iv = 0, .lvl = 50, .species = SPECIES_NURIMAR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyRose[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_CELUMI, },
    { .iv = 0, .lvl = 49, .species = SPECIES_AERODIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSamir[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_QILINI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleDenise[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_AEROPEX, },
    { .iv = 0, .lvl = 49, .species = SPECIES_KAELOS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsMiuMia[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_SORVOL, },
    { .iv = 0, .lvl = 50, .species = SPECIES_GELRAID, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerEarl[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_RHINOKS, },
    { .iv = 0, .lvl = 49, .species = SPECIES_ARTHYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacFoster[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_KOROBI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLarry[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_EMBLAZE, },
    { .iv = 0, .lvl = 49, .species = SPECIES_AKMIDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerDaryl[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_AERODIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHector[] = {
    { .iv = 30, .lvl = 49, .species = SPECIES_LURION, },
    { .iv = 30, .lvl = 49, .species = SPECIES_CALLISTA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicDario[] = {
    { .iv = 100, .lvl = 52, .species = SPECIES_TERRIGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicRodette[] = {
    { .iv = 100, .lvl = 48, .species = SPECIES_TURMAG, },
    { .iv = 100, .lvl = 48, .species = SPECIES_LEVIORA, },
    { .iv = 100, .lvl = 50, .species = SPECIES_MOMORAI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyMiah[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_ELECTRON, },
    { .iv = 0, .lvl = 50, .species = SPECIES_TERRAGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleEveJon[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_CRYPTOR, },
    { .iv = 0, .lvl = 50, .species = SPECIES_KORVAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerMason[] = {
    { .iv = 0, .lvl = 47, .species = SPECIES_TINNEK, },
    { .iv = 0, .lvl = 47, .species = SPECIES_NURIMAR, },
    { .iv = 0, .lvl = 47, .species = SPECIES_FUMARIN, },
    { .iv = 0, .lvl = 47, .species = SPECIES_TINNEK, },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy[] = {
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_FUMIX,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_CRYPTOR,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = SPECIES_SERINAX,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlJocelyn[] = {
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_TENEBROUS,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 38,
        .species = SPECIES_LEVORA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEvan[] = {
    { .iv = 40, .lvl = 48, .species = SPECIES_GELRAID, },
    { .iv = 40, .lvl = 48, .species = SPECIES_CULMOTH, },
    { .iv = 40, .lvl = 49, .species = SPECIES_VESPERA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark2[] = {
    { .iv = 90, .lvl = 33, .species = SPECIES_ASTARVE, },
    { .iv = 90, .lvl = 33, .species = SPECIES_GRAPHSIM, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerLogan[] = {
    { .iv = 100, .lvl = 37, .species = SPECIES_VESPAS, },
    { .iv = 100, .lvl = 40, .species = SPECIES_DUSTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerJackson[] = {
    { .iv = 100, .lvl = 49, .species = SPECIES_CALLISTA, },
    { .iv = 100, .lvl = 49, .species = SPECIES_RIVILE, },
    { .iv = 100, .lvl = 49, .species = SPECIES_POJEKT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerBeth[] = {
    { .iv = 100, .lvl = 38, .species = SPECIES_GLITRON, },
    { .iv = 100, .lvl = 38, .species = SPECIES_CRYSTA, },
    { .iv = 100, .lvl = 38, .species = SPECIES_VERDUUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerKatelyn[] = {
    { .iv = 100, .lvl = 52, .species = SPECIES_ELECTRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerLeroy[] = {
    { .iv = 100, .lvl = 47, .species = SPECIES_AKVORA, },
    { .iv = 100, .lvl = 48, .species = SPECIES_VESPERA, },
    { .iv = 100, .lvl = 47, .species = SPECIES_MOMORAI, },
    { .iv = 100, .lvl = 48, .species = SPECIES_FUMARIN, },
    { .iv = 100, .lvl = 50, .species = SPECIES_GLIMION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerMichelle[] = {
    { .iv = 100, .lvl = 47, .species = SPECIES_SCROLLUX, },
    { .iv = 100, .lvl = 47, .species = SPECIES_GELRAID, },
    { .iv = 100, .lvl = 48, .species = SPECIES_VERMEA, },
    { .iv = 100, .lvl = 48, .species = SPECIES_VERMEA, },
    { .iv = 100, .lvl = 50, .species = SPECIES_QILINI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CoolCoupleLexNya[] = {
    { .iv = 100, .lvl = 52, .species = SPECIES_YUMIRA, },
    { .iv = 100, .lvl = 52, .species = SPECIES_TINNEK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacBrandon[] = {
    { .iv = 0, .lvl = 50, .species = SPECIES_ASTRUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacBenjamin[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_VINTRUB, },
    { .iv = 0, .lvl = 48, .species = SPECIES_IGNIFERT, },
    { .iv = 0, .lvl = 48, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterEdna[] = {
    { .iv = 50, .lvl = 50, .species = SPECIES_KAELOS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanClifford[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_GLIMMOR, },
    { .iv = 0, .lvl = 49, .species = SPECIES_RUSTHOR, },
};

static const struct TrainerMonItemDefaultMoves sParty_LadySelphy[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_TERRAZO,
        .heldItem = ITEM_NUGGET,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = SPECIES_TECHURA,
        .heldItem = ITEM_NUGGET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLawson[] = {
    { .iv = 0, .lvl = 47, .species = SPECIES_PULSITE, },
    { .iv = 0, .lvl = 48, .species = SPECIES_LEVIORA, },
    { .iv = 0, .lvl = 49, .species = SPECIES_EMBLAZE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicLaura[] = {
    { .iv = 100, .lvl = 48, .species = SPECIES_LUMINOR, },
    { .iv = 100, .lvl = 48, .species = SPECIES_TINNEK, },
    { .iv = 100, .lvl = 49, .species = SPECIES_TENEBRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederBethany[] = {
    { .iv = 30, .lvl = 50, .species = SPECIES_ONYXYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAllison[] = {
    { .iv = 30, .lvl = 48, .species = SPECIES_FANGOR, },
    { .iv = 30, .lvl = 48, .species = SPECIES_TORVIA, },
    { .iv = 30, .lvl = 48, .species = SPECIES_FLORENA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherGarret[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_GELRAID, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherJonah[] = {
    { .iv = 0, .lvl = 45, .species = SPECIES_YUMIRA, },
    { .iv = 0, .lvl = 45, .species = SPECIES_CROQUON, },
    { .iv = 0, .lvl = 46, .species = SPECIES_TURMAG, },
    { .iv = 0, .lvl = 47, .species = SPECIES_TECHURA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherVance[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_CRYPTOR, },
    { .iv = 0, .lvl = 48, .species = SPECIES_EMBLAZE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterNash[] = {
    { .iv = 0, .lvl = 47, .species = SPECIES_GYROP, },
    { .iv = 0, .lvl = 47, .species = SPECIES_LUMINON, },
    { .iv = 0, .lvl = 49, .species = SPECIES_YUMIRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCordell[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_TERRACAEL, },
    { .iv = 0, .lvl = 48, .species = SPECIES_NURIMAR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassDalia[] = {
    { .iv = 0, .lvl = 46, .species = SPECIES_NURIMAR, },
    { .iv = 0, .lvl = 47, .species = SPECIES_CALCLION, },
    { .iv = 0, .lvl = 47, .species = SPECIES_CROQUON, },
    { .iv = 0, .lvl = 48, .species = SPECIES_DOXYON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJoana[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_CELUMI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRiley[] = {
    { .iv = 0, .lvl = 49, .species = SPECIES_CALLISTA, },
    { .iv = 0, .lvl = 50, .species = SPECIES_TECHURA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMarcy[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_TENEKROF, },
    { .iv = 0, .lvl = 48, .species = SPECIES_YUMIRA, },
    { .iv = 0, .lvl = 49, .species = SPECIES_SERILI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLayton[] = {
    { .iv = 0, .lvl = 48, .species = SPECIES_ASTRUX, },
    { .iv = 0, .lvl = 48, .species = SPECIES_TERRACAEL, },
    { .iv = 0, .lvl = 48, .species = SPECIES_LURION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey2[] = {
    { .iv = 20, .lvl = 21, .species = SPECIES_FLORENA, },
    { .iv = 20, .lvl = 21, .species = SPECIES_DUSTOS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey3[] = {
    { .iv = 60, .lvl = 29, .species = SPECIES_GLIMVIR, },
    { .iv = 60, .lvl = 29, .species = SPECIES_KHILRIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey4[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_VINTRUB, },
    { .iv = 80, .lvl = 49, .species = SPECIES_AGRAKA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky2[] = {
    { .iv = 20, .lvl = 22, .species = SPECIES_FUMINIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky3[] = {
    { .iv = 60, .lvl = 30, .species = SPECIES_TECHSOL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky4[] = {
    { .iv = 120, .lvl = 55, .species = SPECIES_LUMINOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff2[] = {
    { .iv = 20, .lvl = 21, .species = SPECIES_DOXON, },
    { .iv = 20, .lvl = 21, .species = SPECIES_KORVIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff3[] = {
    { .iv = 60, .lvl = 29, .species = SPECIES_AERODIX, },
    { .iv = 60, .lvl = 29, .species = SPECIES_GYROP, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff4[] = {
    { .iv = 120, .lvl = 54, .species = SPECIES_CELUMI, },
    { .iv = 120, .lvl = 54, .species = SPECIES_UROBOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle2[] = {
    { .iv = 20, .lvl = 21, .species = SPECIES_POCHETLIN, },
    { .iv = 20, .lvl = 21, .species = SPECIES_LEVAXON, },
    { .iv = 20, .lvl = 18, .species = SPECIES_VINEKOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle3[] = {
    { .iv = 60, .lvl = 29, .species = SPECIES_KORVAX, },
    { .iv = 60, .lvl = 29, .species = SPECIES_ASTARVE, },
    { .iv = 60, .lvl = 26, .species = SPECIES_KORVIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle4[] = {
    { .iv = 80, .lvl = 47, .species = SPECIES_TECHURA, },
    { .iv = 80, .lvl = 47, .species = SPECIES_RHINOKS, },
    { .iv = 80, .lvl = 50, .species = SPECIES_ASTEROS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu2[] = {
    { .iv = 40, .lvl = 22, .species = SPECIES_TENEBROUS, },
    { .iv = 40, .lvl = 22, .species = SPECIES_GLIMMOR, },
    { .iv = 40, .lvl = 22, .species = SPECIES_LUMIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu3[] = {
    { .iv = 80, .lvl = 47, .species = SPECIES_LUMINON, },
    { .iv = 80, .lvl = 47, .species = SPECIES_RIVILE, },
    { .iv = 80, .lvl = 47, .species = SPECIES_LURION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBernie2[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_SORVUS, },
    { .iv = 60, .lvl = 28, .species = SPECIES_MOMORAI, },
    { .iv = 60, .lvl = 28, .species = SPECIES_CROQUON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDarian2[] = {
    { .iv = 60, .lvl = 29, .species = SPECIES_CRYPTIN, },
    { .iv = 60, .lvl = 29, .species = SPECIES_TENEBRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris2[] = {
    { .iv = 40, .lvl = 24, .species = SPECIES_VERALIS, },
    { .iv = 40, .lvl = 24, .species = SPECIES_VERDURA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris3[] = {
    { .iv = 60, .lvl = 29, .species = SPECIES_AERODIX, },
    { .iv = 60, .lvl = 29, .species = SPECIES_TERRAGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris4[] = {
    { .iv = 120, .lvl = 54, .species = SPECIES_TECHURA, },
    { .iv = 120, .lvl = 54, .species = SPECIES_FLORENA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia2[] = {
    { .iv = 40, .lvl = 25, .species = SPECIES_LUMINUXE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia3[] = {
    { .iv = 60, .lvl = 30, .species = SPECIES_TERRIGON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia4[] = {
    { .iv = 120, .lvl = 55, .species = SPECIES_MOMORAI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerJeremy2[] = {
    { .iv = 60, .lvl = 30, .species = SPECIES_KORVAX, },
    { .iv = 60, .lvl = 28, .species = SPECIES_KHILRIN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark3[] = {
    { .iv = 150, .lvl = 54, .species = SPECIES_CRYSTA, },
    { .iv = 150, .lvl = 54, .species = SPECIES_DUSTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman2[] = {
    { .iv = 90, .lvl = 29, .species = SPECIES_NURVIS, },
    { .iv = 90, .lvl = 29, .species = SPECIES_SEALORA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman3[] = {
    { .iv = 150, .lvl = 54, .species = SPECIES_TENEKROF, },
    { .iv = 150, .lvl = 54, .species = SPECIES_GLITRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerTrent2[] = {
    { .iv = 60, .lvl = 31, .species = SPECIES_POJEKT, },
    { .iv = 60, .lvl = 31, .species = SPECIES_CRYPTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan2[] = {
    { .iv = 40, .lvl = 22, .species = SPECIES_CRYSTAZE, },
    { .iv = 40, .lvl = 22, .species = SPECIES_CELESTUS, },
    { .iv = 40, .lvl = 23, .species = SPECIES_POCHETLIN, },
    { .iv = 40, .lvl = 21, .species = SPECIES_AQUAVOLE, },
    { .iv = 40, .lvl = 22, .species = SPECIES_CHRONIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan3[] = {
    { .iv = 80, .lvl = 46, .species = SPECIES_SCROLLUX, },
    { .iv = 80, .lvl = 47, .species = SPECIES_SCROLLUX, },
    { .iv = 80, .lvl = 47, .species = SPECIES_MOMORAI, },
    { .iv = 80, .lvl = 47, .species = SPECIES_IGNITOR, },
    { .iv = 80, .lvl = 48, .species = SPECIES_TERRAGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdGlenn2[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_VERMEA, },
    { .iv = 60, .lvl = 28, .species = SPECIES_ONYXYS, },
    { .iv = 60, .lvl = 28, .species = SPECIES_NURVIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerRich2[] = {
    { .iv = 60, .lvl = 30, .species = SPECIES_AKVORA, },
    { .iv = 60, .lvl = 30, .species = SPECIES_RUSTHOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaren2[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_AERFER, },
    { .iv = 60, .lvl = 30, .species = SPECIES_VINTRUB, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanElliot2[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_MISTILE, },
    { .iv = 60, .lvl = 28, .species = SPECIES_CELIGRA, },
    { .iv = 60, .lvl = 28, .species = SPECIES_RIVAGER, },
    { .iv = 60, .lvl = 28, .species = SPECIES_MIRAK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerLuca2[] = {
    { .iv = 60, .lvl = 33, .species = SPECIES_SORVOL, },
    { .iv = 60, .lvl = 33, .species = SPECIES_TUNDRAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautySheila2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_TURMAG, },
    { .iv = 80, .lvl = 49, .species = SPECIES_SERILI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert2[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_CUIMOS, },
    { .iv = 60, .lvl = 28, .species = SPECIES_MOMORAI, },
    { .iv = 60, .lvl = 28, .species = SPECIES_TERRIGON, },
    { .iv = 60, .lvl = 28, .species = SPECIES_GLIMVIR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert3[] = {
    { .iv = 80, .lvl = 47, .species = SPECIES_KLODION, },
    { .iv = 80, .lvl = 47, .species = SPECIES_LEVIORA, },
    { .iv = 80, .lvl = 47, .species = SPECIES_ALKON, },
    { .iv = 80, .lvl = 47, .species = SPECIES_LURION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie2[] = {
    { .iv = 60, .lvl = 27, .species = SPECIES_GRUMM, },
    { .iv = 60, .lvl = 27, .species = SPECIES_CRYSTAZE, },
    { .iv = 60, .lvl = 27, .species = SPECIES_EXCAVA, },
    { .iv = 60, .lvl = 27, .species = SPECIES_STELLAL, },
    { .iv = 60, .lvl = 27, .species = SPECIES_FANGOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie3[] = {
    { .iv = 80, .lvl = 47, .species = SPECIES_GELRAID, },
    { .iv = 80, .lvl = 47, .species = SPECIES_CRAGNOS, },
    { .iv = 80, .lvl = 47, .species = SPECIES_ASTEROS, },
    { .iv = 80, .lvl = 47, .species = SPECIES_KLODION, },
    { .iv = 80, .lvl = 47, .species = SPECIES_STELARUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie4[] = {
    { .iv = 120, .lvl = 52, .species = SPECIES_FLORENA, },
    { .iv = 120, .lvl = 52, .species = SPECIES_RHINOKS, },
    { .iv = 120, .lvl = 52, .species = SPECIES_MISTILE, },
    { .iv = 120, .lvl = 52, .species = SPECIES_TURMAG, },
    { .iv = 120, .lvl = 52, .species = SPECIES_STELARUS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerLukas2[] = {
    { .iv = 80, .lvl = 47, .species = SPECIES_KLODION, },
    { .iv = 80, .lvl = 47, .species = SPECIES_AERODIX, },
    { .iv = 80, .lvl = 47, .species = SPECIES_YUMIRA, },
    { .iv = 80, .lvl = 47, .species = SPECIES_VINTRUB, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny2[] = {
    { .iv = 60, .lvl = 32, .species = SPECIES_QILINI, },
    { .iv = 60, .lvl = 32, .species = SPECIES_LUMINON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny3[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_TENEBRA, },
    { .iv = 80, .lvl = 49, .species = SPECIES_TERRAGO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon2[] = {
    { .iv = 60, .lvl = 30, .species = SPECIES_STELARUS, },
    { .iv = 60, .lvl = 30, .species = SPECIES_SCROLLUX, },
    { .iv = 60, .lvl = 30, .species = SPECIES_ROKUIL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon3[] = {
    { .iv = 80, .lvl = 48, .species = SPECIES_ARTHYS, },
    { .iv = 80, .lvl = 48, .species = SPECIES_CULMOTH, },
    { .iv = 80, .lvl = 48, .species = SPECIES_AERAXIS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyGrace2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_CULMOTH, },
    { .iv = 80, .lvl = 49, .species = SPECIES_GLIMION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester2[] = {
    { .iv = 60, .lvl = 30, .species = SPECIES_TERRAGO, },
    { .iv = 60, .lvl = 30, .species = SPECIES_CALCIMONK, },
    { .iv = 60, .lvl = 30, .species = SPECIES_SPIRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester3[] = {
    { .iv = 80, .lvl = 48, .species = SPECIES_TERRACAEL, },
    { .iv = 80, .lvl = 48, .species = SPECIES_AEROPEX, },
    { .iv = 80, .lvl = 48, .species = SPECIES_GLITRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky2[] = {
    { .iv = 60, .lvl = 32, .species = SPECIES_GRUMM, },
    { .iv = 60, .lvl = 32, .species = SPECIES_AURIVORE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky3[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_CHRONIS, },
    { .iv = 80, .lvl = 49, .species = SPECIES_SERILI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky4[] = {
    { .iv = 120, .lvl = 54, .species = SPECIES_KAIDIKO, },
    { .iv = 120, .lvl = 54, .species = SPECIES_KHILRIN, },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya2[] = {
    {
        .iv = 110,
        .lvl = 33,
        .species = SPECIES_KOROBI,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 110,
        .lvl = 33,
        .species = SPECIES_FUMINDO,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya3[] = {
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_BOUNDIERE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_AERFER,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya4[] = {
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_VERDURA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_CRAGS,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerRuben2[] = {
    { .iv = 80, .lvl = 48, .species = SPECIES_MOMORAI, },
    { .iv = 80, .lvl = 48, .species = SPECIES_LUMINON, },
    { .iv = 80, .lvl = 48, .species = SPECIES_EXCELSIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCamron2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_CALLIGO, },
    { .iv = 80, .lvl = 49, .species = SPECIES_AEROPEX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaxon2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_KARASHY, },
    { .iv = 80, .lvl = 49, .species = SPECIES_AERODIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallIsaiah2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_CALCLION, },
    { .iv = 80, .lvl = 49, .species = SPECIES_TECHURA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCorey2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_ELECTRON, },
    { .iv = 80, .lvl = 49, .species = SPECIES_ROKUIL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob2[] = {
    { .iv = 60, .lvl = 28, .species = SPECIES_AURIVORE, },
    { .iv = 60, .lvl = 28, .species = SPECIES_TINNION, },
    { .iv = 60, .lvl = 28, .species = SPECIES_TENEKROF, },
    { .iv = 60, .lvl = 28, .species = SPECIES_VERMEA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob3[] = {
    { .iv = 80, .lvl = 47, .species = SPECIES_TERRAGO, },
    { .iv = 80, .lvl = 47, .species = SPECIES_TORVIA, },
    { .iv = 80, .lvl = 47, .species = SPECIES_LUMINON, },
    { .iv = 80, .lvl = 47, .species = SPECIES_VEIRAN, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAlice2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_TINNEK, },
    { .iv = 80, .lvl = 49, .species = SPECIES_DUSTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDarrin2[] = {
    { .iv = 120, .lvl = 52, .species = SPECIES_EMBLAZE, },
    { .iv = 120, .lvl = 52, .species = SPECIES_MIXER, },
    { .iv = 120, .lvl = 52, .species = SPECIES_CULMOTH, },
    { .iv = 120, .lvl = 52, .species = SPECIES_SERILI, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_KAIDIKO, },
    { .iv = 80, .lvl = 49, .species = SPECIES_GELRAID, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy3[] = {
    { .iv = 120, .lvl = 54, .species = SPECIES_SCROLLUX, },
    { .iv = 120, .lvl = 54, .species = SPECIES_FUMINDO, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade2[] = {
    { .iv = 80, .lvl = 47, .species = SPECIES_ASTARVE, },
    { .iv = 80, .lvl = 47, .species = SPECIES_STELLAL, },
    { .iv = 80, .lvl = 47, .species = SPECIES_LURION, },
    { .iv = 80, .lvl = 47, .species = SPECIES_TERRIGON, },
    { .iv = 80, .lvl = 47, .species = SPECIES_EXCELSIA, },
    { .iv = 80, .lvl = 47, .species = SPECIES_LURION, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJack2[] = {
    { .iv = 80, .lvl = 50, .species = SPECIES_YUMIRA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan2[] = {
    { .iv = 80, .lvl = 50, .species = SPECIES_CHRONIS, },
    { .iv = 80, .lvl = 50, .species = SPECIES_SERINAX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan3[] = {
    { .iv = 120, .lvl = 55, .species = SPECIES_RIVILE, },
    { .iv = 120, .lvl = 55, .species = SPECIES_FLORENA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleFinn2[] = {
    { .iv = 80, .lvl = 50, .species = SPECIES_AKVORA, },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon2[] = {
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_CALCIMONK,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_POCHETLIN,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon3[] = {
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_TERRACAEL,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_IGNITOR,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya2[] = {
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_LEVORA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 50,
        .species = SPECIES_TINNION,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya3[] = {
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_SERENITE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = SPECIES_CALCIMONK,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea2[] = {
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_PULSITE,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_FUMINIA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea3[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_GYROP,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_VERMEA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh2[] = {
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_LURION,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = SPECIES_VERMEA,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh3[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_CALLISTA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = SPECIES_LUMINON,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia2[] = {
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_SPIRA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = SPECIES_NURIMAR,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia3[] = {
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_GRAPHSIM,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 56,
        .species = SPECIES_ROKUIL,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAmira2[] = {
    { .iv = 80, .lvl = 47, .species = SPECIES_DOXYON, },
    { .iv = 80, .lvl = 47, .species = SPECIES_GLIMMOR, },
    { .iv = 80, .lvl = 47, .species = SPECIES_CRYSTA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsJoyMeg2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_SORVOL, },
    { .iv = 80, .lvl = 49, .species = SPECIES_SCROLLUX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterRayna2[] = {
    { .iv = 120, .lvl = 54, .species = SPECIES_MIXER, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDestin2[] = {
    { .iv = 120, .lvl = 53, .species = SPECIES_POJEKT, },
    { .iv = 120, .lvl = 53, .species = SPECIES_EXCELSIA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAlize2[] = {
    { .iv = 150, .lvl = 53, .species = SPECIES_PUPATOR, },
    { .iv = 150, .lvl = 53, .species = SPECIES_AURORA, },
    { .iv = 150, .lvl = 53, .species = SPECIES_PULSITE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes2[] = {
    { .iv = 60, .lvl = 30, .species = SPECIES_KORVAX, },
    { .iv = 60, .lvl = 30, .species = SPECIES_DUSTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes3[] = {
    { .iv = 120, .lvl = 55, .species = SPECIES_STELARUS, },
    { .iv = 120, .lvl = 55, .species = SPECIES_TINNEK, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMilo2[] = {
    { .iv = 120, .lvl = 53, .species = SPECIES_EMBLAZE, },
    { .iv = 120, .lvl = 55, .species = SPECIES_CRYSTAZE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChaz2[] = {
    { .iv = 120, .lvl = 53, .species = SPECIES_TURMAG, },
    { .iv = 120, .lvl = 55, .species = SPECIES_ONYXYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperHarold2[] = {
    { .iv = 120, .lvl = 53, .species = SPECIES_GLIMION, },
    { .iv = 120, .lvl = 55, .species = SPECIES_AERODIX, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNicole2[] = {
    { .iv = 120, .lvl = 54, .species = SPECIES_PUPATOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicJaclyn2[] = {
    { .iv = 220, .lvl = 52, .species = SPECIES_SPIRA, },
    { .iv = 220, .lvl = 52, .species = SPECIES_CULMOTH, },
    { .iv = 220, .lvl = 54, .species = SPECIES_AGRAKA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSamir2[] = {
    { .iv = 120, .lvl = 55, .species = SPECIES_TURMAG, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerEarl2[] = {
    { .iv = 120, .lvl = 54, .species = SPECIES_KORVAX, },
    { .iv = 120, .lvl = 54, .species = SPECIES_RIVILE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLarry2[] = {
    { .iv = 120, .lvl = 54, .species = SPECIES_AERODIX, },
    { .iv = 120, .lvl = 54, .species = SPECIES_STELLAL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHector2[] = {
    { .iv = 150, .lvl = 55, .species = SPECIES_FUMINDO, },
    { .iv = 150, .lvl = 55, .species = SPECIES_BOUNDIERE, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicDario2[] = {
    { .iv = 220, .lvl = 56, .species = SPECIES_UROBOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicRodette2[] = {
    { .iv = 220, .lvl = 53, .species = SPECIES_TORVIA, },
    { .iv = 220, .lvl = 53, .species = SPECIES_TURMAG, },
    { .iv = 220, .lvl = 53, .species = SPECIES_ELECTRON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerMason2[] = {
    { .iv = 120, .lvl = 52, .species = SPECIES_BRONZIX, },
    { .iv = 120, .lvl = 52, .species = SPECIES_TINNEK, },
    { .iv = 120, .lvl = 52, .species = SPECIES_TARNEX, },
    { .iv = 120, .lvl = 52, .species = SPECIES_GYROP, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerNicolas2[] = {
    { .iv = 220, .lvl = 55, .species = SPECIES_SERINAX, },
    { .iv = 220, .lvl = 55, .species = SPECIES_ONYXYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerMadeline2[] = {
    { .iv = 220, .lvl = 55, .species = SPECIES_TECHURA, },
    { .iv = 220, .lvl = 55, .species = SPECIES_TURMAG, },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy2[] = {
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_TERRAZO,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_SPIRA,
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 54,
        .species = SPECIES_AEROPE,
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEvan2[] = {
    { .iv = 160, .lvl = 52, .species = SPECIES_CELUMI, },
    { .iv = 160, .lvl = 52, .species = SPECIES_UROBOR, },
    { .iv = 160, .lvl = 55, .species = SPECIES_ARTHYS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerJackson2[] = {
    { .iv = 220, .lvl = 53, .species = SPECIES_TERRACAEL, },
    { .iv = 220, .lvl = 54, .species = SPECIES_TERRAGO, },
    { .iv = 220, .lvl = 55, .species = SPECIES_TERRACAEL, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerKatelyn2[] = {
    { .iv = 220, .lvl = 56, .species = SPECIES_POJEKT, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerLeroy2[] = {
    { .iv = 220, .lvl = 52, .species = SPECIES_TURMAG, },
    { .iv = 220, .lvl = 54, .species = SPECIES_AEROPEX, },
    { .iv = 220, .lvl = 52, .species = SPECIES_KORVAX, },
    { .iv = 220, .lvl = 52, .species = SPECIES_VERMEA, },
    { .iv = 220, .lvl = 55, .species = SPECIES_DOXYON, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerMichelle2[] = {
    { .iv = 220, .lvl = 53, .species = SPECIES_MIRAK, },
    { .iv = 220, .lvl = 53, .species = SPECIES_AKVORA, },
    { .iv = 220, .lvl = 54, .species = SPECIES_CRYSTAZE, },
    { .iv = 220, .lvl = 54, .species = SPECIES_GLIMION, },
    { .iv = 220, .lvl = 56, .species = SPECIES_AKMIDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CoolCoupleLexNya2[] = {
    { .iv = 220, .lvl = 57, .species = SPECIES_DUNARE, },
    { .iv = 220, .lvl = 57, .species = SPECIES_AKMIDA, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton2[] = {
    { .iv = 20, .lvl = 19, .species = SPECIES_EMBRIS, },
    { .iv = 20, .lvl = 19, .species = SPECIES_VERDURA, },
    { .iv = 20, .lvl = 19, .species = SPECIES_GLITAS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton3[] = {
    { .iv = 60, .lvl = 27, .species = SPECIES_DUNRAH, },
    { .iv = 60, .lvl = 27, .species = SPECIES_TUNDRAX, },
    { .iv = 60, .lvl = 27, .species = SPECIES_CUIMOS, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton4[] = {
    { .iv = 120, .lvl = 51, .species = SPECIES_AERODIX, },
    { .iv = 120, .lvl = 54, .species = SPECIES_STELLAL, },
    { .iv = 120, .lvl = 51, .species = SPECIES_UROBOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMatthew2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_GRAPHSIM, },
    { .iv = 80, .lvl = 49, .species = SPECIES_CRYPTOR, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleTony2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_KAIDIKO, },
    { .iv = 80, .lvl = 49, .species = SPECIES_VINTRUB, },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMelissa2[] = {
    { .iv = 80, .lvl = 49, .species = SPECIES_AERAXIS, },
    { .iv = 80, .lvl = 49, .species = SPECIES_VEIRAN, },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourLorelei2[] = {
    {
        .iv = 255,
        .lvl = 64,
        .species = SPECIES_TERRAKO,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_GYROP,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = SPECIES_PULSAR,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_PULSX,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_ASTARVE,
        .heldItem = ITEM_CHERI_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourBruno2[] = {
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_LUMINON,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_VINTRUB,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_CELUMI,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_TERRAKO,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_CRYSTALUX,
        .heldItem = ITEM_PERSIM_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourAgatha2[] = {
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_ROKITU,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_KAIDIKO,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = SPECIES_EMBLAZE,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_SORVOL,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 70,
        .species = SPECIES_TERRAKO,
        .heldItem = ITEM_CHESTO_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourLance2[] = {
    {
        .iv = 255,
        .lvl = 68,
        .species = SPECIES_LUMINON,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_TENEBRA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = SPECIES_VESPAS,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 70,
        .species = SPECIES_YUMIRA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_VIRELIA,
        .heldItem = ITEM_PERSIM_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionRematchSquirtle[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_YUKIMI,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_IGNITOR,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_VINEKOR,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_ASTEROS,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_IGNINTO,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_SERINAX,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionRematchBulbasaur[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_SEALORA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_AGARIKS,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_NURIMAR,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_KRYPTA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_TERRAKO,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_TERRAGUL,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionRematchCharmander[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_TERRO,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_UROBOR,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = SPECIES_CALCLION,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_UROBOR,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = SPECIES_SPIRA,
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = SPECIES_AKVORA,
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallPaxton[] = {
    { .iv = 50, .lvl = 39, .species = SPECIES_ASTRUX, },
    { .iv = 50, .lvl = 39, .species = SPECIES_TINSTRY, },
};
