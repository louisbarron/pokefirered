// Trainer party data exists for all of the RS trainer classes, but
// are only filled with one of the following placeholder pokemon.
// The actual FRLG trainer party data starts after these.
#define DUMMY_TRAINER_MON           \
    {                               \
        .lvl = 5,                   \
        .species = ${SPECIES_PLACEHOLDER},   \
    }

#define DUMMY_TRAINER_MON_IV        \
    {                               \
        .iv = 100,                  \
        .lvl = 5,                   \
        .species = ${SPECIES_PLACEHOLDER},   \
    }

// Copy of Swimmer Male Finn's party
#define DUMMY_TRAINER_STARMIE       \
    {                               \
        .lvl = 38,                  \
        .species = ${SPECIES_PLACEHOLDER}, \
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
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCalvin[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJosh[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJoey[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDan[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTyler[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterEddie[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDillon[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDave[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen2[] = {
    {
        .iv = 20,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherRick[] = {
    {
        .iv = 0,
        .lvl = 6,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 6,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherDoug[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherSammy[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherGreg[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherJames[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherKent[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherRobby[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherCale[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherKeigo[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherElijah[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher2[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherBrent[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherConner[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice[] = {
    {
        .iv = 0,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassSally[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassRobin[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassCrissy[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMiriam[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassIris[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAli[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Lass2[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassHaley[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAnn[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassDawn[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassPaige[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassAndrea[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJulia[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassKay[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassLisa[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorEdmond[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorTrevor[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorLeonard[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorDuncan[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorHuey[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorDylan[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorPhillip[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SailorDwayne[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperLiam[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperShane[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperEthan[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Camper2[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperDrew[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerDiana[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerNancy[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCaitlin[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerHeidi[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCarol[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSofia[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMartha[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerTina[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerHannah[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark[] = {
    {
        .iv = 30,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman[] = {
    {
        .iv = 30,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacCooper[] = {
    {
        .iv = 30,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacSteve[] = {
    {
        .iv = 30,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacWinston[] = {
    {
        .iv = 30,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacDawson[] = {
    {
        .iv = 30,
        .lvl = 40,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 40,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 40,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacAshton[] = {
    {
        .iv = 30,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdJovan[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdMiguel[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 12,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdAidan[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdGlenn[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdLeslie[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd1[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd2[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerd3[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdErik[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdAvery[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdDerek[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdZac[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerMarcos[] = {
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 10,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerFranklin[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerNob[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerWayne[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerAlan[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerBrice[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerClark[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerTrent[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerDudley[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerAllen[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerEric[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerLenny[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerOliver[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerLucas[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJared[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerMalik[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerErnest[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerAlex[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerLao[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Biker1[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerHideo[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerRuben[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerBilly[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerNikolas[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaxon[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerWilliam[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerLukas[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerIsaac[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGerald[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar1[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar2[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar3[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarQuinn[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarRamon[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarDusty[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarArnie[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Burglar4[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarSimon[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BurglarLewis[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBaily[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBraxton[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBernie[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanDale[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanBarny[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanNed[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanChip[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanHank[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanElliot[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanRonald[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanClaude[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanNolan[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanAndrew[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleLuis[] = {
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleRichard[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleReece[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMatthew[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDouglas[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDavid[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleTony[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleAxle[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleBarry[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDean[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDarrin[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSpencer[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJack[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJerome[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleRoland[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallKoji[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallLuke[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCamron[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallRaul[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallIsaiah[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallZeek[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallJamal[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCorey[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallChase[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerHugo[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerJasper[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDirk[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDarian[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerStan[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Gamer1[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerRich[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyBridget[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyTamia[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLori[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLola[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautySheila[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleTiffany[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNora[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMelissa[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyGrace[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyOlivia[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyLauren[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAnya[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAlice[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleConnie[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleShirley[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicJohan[] = {
    {
        .iv = 50,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicTyron[] = {
    {
        .iv = 50,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicCameron[] = {
    {
        .iv = 50,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicPreston[] = {
    {
        .iv = 50,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerRandall[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerLuca[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerDalton[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerNelson[] = {
    {
        .iv = 0,
        .lvl = 41,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 41,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerKirk[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerShawn[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerGregory[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerEdward[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerKayden[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerNate[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerPhil[] = {
    {
        .iv = 40,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEdgar[] = {
    {
        .iv = 40,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerJason[] = {
    {
        .iv = 40,
        .lvl = 43,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerCole[] = {
    {
        .iv = 40,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerVincent[] = {
    {
        .iv = 40,
        .lvl = 44,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 44,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerJohn[] = {
    {
        .iv = 40,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperSebastian[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperPerry[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperDonald[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperEdwin[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperWilton[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRamiro[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRoger[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperReed[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperKeith[] = {
    {
        .iv = 0,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperCarter[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMitch[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBeck[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltKoichi[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltMike[] = {
    {
        .iv = 100,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHideki[] = {
    {
        .iv = 100,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltAaron[] = {
    {
        .iv = 100,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHitoshi[] = {
    {
        .iv = 100,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltAtsushi[] = {
    {
        .iv = 100,
        .lvl = 40,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 40,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltKiyo[] = {
    {
        .iv = 100,
        .lvl = 43,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltTakashi[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltDaisuke[] = {
    {
        .iv = 100,
        .lvl = 43,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabSquirtle[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = ${SPECIES_WATER_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabBulbasaur[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = ${SPECIES_GRASS_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalOaksLabCharmander[] = {
    {
        .iv = 0,
        .lvl = 5,
        .species = ${SPECIES_FIRE_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlySquirtle[] = {
    {
        .iv = 50,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 9,
        .species = ${SPECIES_WATER_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlyBulbasaur[] = {
    {
        .iv = 50,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 9,
        .species = ${SPECIES_GRASS_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22EarlyCharmander[] = {
    {
        .iv = 50,
        .lvl = 9,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 9,
        .species = ${SPECIES_FIRE_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalCeruleanSquirtle[] = {
    {
        .iv = 50,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 18,
        .species = ${SPECIES_WATER_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalCeruleanBulbasaur[] = {
    {
        .iv = 50,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 18,
        .species = ${SPECIES_GRASS_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalCeruleanCharmander[] = {
    {
        .iv = 50,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 18,
        .species = ${SPECIES_FIRE_STARTER_0},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTed[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistConnor[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJerry[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJose[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistRodney[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistBeau[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTaylor[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistJoshua[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistParker[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistEd[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistTravis[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistBraydon[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistIvan[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BossGiovanni[] = {
    {
        .iv = 250,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 250,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 250,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BossGiovanni2[] = {
    {
        .iv = 250,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 250,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 250,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 250,
        .lvl = 41,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderGiovanni[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 44,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt2[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt3[] = {
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 11,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt4[] = {
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 13,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt5[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt6[] = {
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 15,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt7[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt8[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt9[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt10[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt11[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt12[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt13[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt14[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt15[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt16[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt17[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt18[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt19[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt20[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt21[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt22[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt23[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt24[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt25[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt26[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt27[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt28[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt29[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt30[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt31[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt32[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt33[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt34[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt35[] = {
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt36[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt37[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt38[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt39[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt40[] = {
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt41[] = {
    {
        .iv = 0,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerSamuel[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerGeorge[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerColby[] = {
    {
        .iv = 100,
        .lvl = 41,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 43,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerPaul[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerRolando[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerGilbert[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerOwen[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerBerke[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerYuji[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerWarren[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerMary[] = {
    {
        .iv = 100,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerCaroline[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerAlexa[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerShannon[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerNaomi[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerBrooke[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerAustina[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerJulie[] = {
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourLorelei[] = {
    {
        .iv = 250,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourBruno[] = {
    {
        .iv = 250,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourAgatha[] = {
    {
        .iv = 250,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 58,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourLance[] = {
    {
        .iv = 250,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 58,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 250,
        .lvl = 60,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderBrock[] = {
    {
        .iv = 0,
        .lvl = 12,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderMisty[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderLtSurge[] = {
    {
        .iv = 0,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderErika[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderKoga[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderBlaine[] = {
    {
        .iv = 0,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 40,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 42,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LeaderSabrina[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 43,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanThomas[] = {
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanArthur[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanTucker[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanNorton[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanWalter[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneSquirtle[] = {
    {
        .iv = 50,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 20,
        .species = ${SPECIES_WATER_STARTER_1},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneBulbasaur[] = {
    {
        .iv = 50,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 20,
        .species = ${SPECIES_GRASS_STARTER_1},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSsAnneCharmander[] = {
    {
        .iv = 50,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 16,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 20,
        .species = ${SPECIES_FIRE_STARTER_1},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerSquirtle[] = {
    {
        .iv = 100,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 25,
        .species = ${SPECIES_WATER_STARTER_1},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerBulbasaur[] = {
    {
        .iv = 100,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 25,
        .species = ${SPECIES_GRASS_STARTER_1},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalPokemonTowerCharmander[] = {
    {
        .iv = 100,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 25,
        .species = ${SPECIES_FIRE_STARTER_1},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphSquirtle[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 40,
        .species = ${SPECIES_WATER_STARTER_2},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphBulbasaur[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 40,
        .species = ${SPECIES_GRASS_STARTER_2},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalSilphCharmander[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 40,
        .species = ${SPECIES_FIRE_STARTER_2},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22LateSquirtle[] = {
    {
        .iv = 150,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = ${SPECIES_WATER_STARTER_2},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22LateBulbasaur[] = {
    {
        .iv = 150,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = ${SPECIES_GRASS_STARTER_2},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RivalRoute22LateCharmander[] = {
    {
        .iv = 150,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 250,
        .lvl = 53,
        .species = ${SPECIES_FIRE_STARTER_2},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionFirstSquirtle[] = {
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 61,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionFirstBulbasaur[] = {
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 61,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionFirstCharmander[] = {
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 57,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 59,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 61,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerPatricia[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerCarly[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerHope[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerPaula[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerLaurel[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJody[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerTammy[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerRuth[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerKarina[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJanae[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerAngelica[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerEmilia[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerJennifer[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler1[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler2[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler3[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler4[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler5[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler6[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler7[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Channeler8[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerAmanda[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerStacy[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ChannelerTasha[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerJeremy[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlma[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerValerie[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerGwen[] = {
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerVirgil[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperFlint[] = {
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 14,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy[] = {
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIrene[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerDana[] = {
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAriana[] = {
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerLeah[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJustin[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerYazmin[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKindra[] = {
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerCelia[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanBrooks[] = {
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanLamar[] = {
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 17,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsEliAnne[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CoolCoupleRayTyra[] = {
    {
        .iv = 100,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsKiriJan[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya[] = {
    {
        .iv = 50,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleLeaJed[] = {
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLiaLuc[] = {
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher3[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher4[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher5[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher6[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher7[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcher8[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterBen4[] = {
    {
        .iv = 120,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassReli3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy2[] = {
    {
        .iv = 20,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy3[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterTimmy4[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice2[] = {
    {
        .iv = 20,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 20,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJanice3[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterChad4[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerFranklin2[] = {
    {
        .iv = 40,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnProfProfOak[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerBrendan[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerMay[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerRed[] = {DUMMY_TRAINER_MON};
static const struct TrainerMonNoItemDefaultMoves sParty_PlayerLeaf[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt42[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicJaclyn[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon[] = {
    {
        .iv = 50,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAmira[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAlize[] = {
    {
        .iv = 30,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerNicolas[] = {
    {
        .iv = 100,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerMadeline[] = {
    {
        .iv = 100,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyNikki[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacStanly[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_LadyJacki[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_STARDUST,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterDaisy[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGoon[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGoon2[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerGoon3[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_Biker2[] = {DUMMY_TRAINER_MON};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherAnthony[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 8,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherCharlie[] = {
    {
        .iv = 0,
        .lvl = 7,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 7,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsEliAnne2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterJohnson[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerRicardo[] = {
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaren[] = {
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt43[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt44[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt45[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt46[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt47[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt48[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketAdmin[] = {
    {
        .iv = 150,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketAdmin2[] = {
    {
        .iv = 200,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 200,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 200,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_ScientistGideon[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAmara[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMaria[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAbigail[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleFinn[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleGarrett[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanTommy[] = {
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya[] = {
    {
        .iv = 50,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperBryce[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerClaire[] = {
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 35,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia[] = {
    {
        .iv = 50,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyViolet[] = {
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 36,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAlexis[] = {
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 34,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsJoyMeg[] = {
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleTisha[] = {
    {
        .iv = 0,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterCelina[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterRayna[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_LadyGillian[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_STARDUST,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NUGGET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDestin[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleToby[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt49[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt50[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TeamRocketGrunt51[] = {
    {
        .iv = 50,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMilo[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChaz[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperHarold[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanTylor[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMymo[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNicole[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroAvaGeb[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyRose[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSamir[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleDenise[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsMiuMia[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerEarl[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacFoster[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLarry[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerDaryl[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHector[] = {
    {
        .iv = 30,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicDario[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicRodette[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_AromaLadyMiah[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleEveJon[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerMason[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy[] = {
    {
        .iv = 50,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlJocelyn[] = {
    {
        .iv = 50,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 50,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEvan[] = {
    {
        .iv = 40,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark2[] = {
    {
        .iv = 90,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 90,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerLogan[] = {
    {
        .iv = 100,
        .lvl = 37,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 40,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerJackson[] = {
    {
        .iv = 100,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerBeth[] = {
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 38,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerKatelyn[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerLeroy[] = {
    {
        .iv = 100,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerMichelle[] = {
    {
        .iv = 100,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CoolCoupleLexNya[] = {
    {
        .iv = 100,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacBrandon[] = {
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacBenjamin[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterEdna[] = {
    {
        .iv = 50,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GentlemanClifford[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_LadySelphy[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NUGGET,
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NUGGET,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLawson[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicLaura[] = {
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 100,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederBethany[] = {
    {
        .iv = 30,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAllison[] = {
    {
        .iv = 30,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 30,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherGarret[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherJonah[] = {
    {
        .iv = 0,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 45,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherVance[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterNash[] = {
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterCordell[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassDalia[] = {
    {
        .iv = 0,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassJoana[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRiley[] = {
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMarcy[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLayton[] = {
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 0,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerKelsey4[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky2[] = {
    {
        .iv = 20,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky3[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperRicky4[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperJeff4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle2[] = {
    {
        .iv = 20,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 18,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 26,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerIsabelle4[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu2[] = {
    {
        .iv = 40,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterYasu3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_EngineerBernie2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerDarian2[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris2[] = {
    {
        .iv = 40,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 24,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris3[] = {
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CamperChris4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia2[] = {
    {
        .iv = 40,
        .lvl = 25,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia3[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerAlicia4[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerJeremy2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacMark3[] = {
    {
        .iv = 150,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman2[] = {
    {
        .iv = 90,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 90,
        .lvl = 29,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHerman3[] = {
    {
        .iv = 150,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerTrent2[] = {
    {
        .iv = 60,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 31,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan2[] = {
    {
        .iv = 40,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 23,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 21,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 40,
        .lvl = 22,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_LassMegan3[] = {
    {
        .iv = 80,
        .lvl = 46,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SuperNerdGlenn2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_GamerRich2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaren2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanElliot2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RockerLuca2[] = {
    {
        .iv = 60,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautySheila2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperRobert3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie2[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerSusie4[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerLukas2[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny2[] = {
    {
        .iv = 60,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperBenny3[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMarlon3[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BeautyGrace2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChester3[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky2[] = {
    {
        .iv = 60,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 32,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky3[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerBecky4[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya2[] = {
    {
        .iv = 110,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 110,
        .lvl = 33,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya3[] = {
    {
        .iv = 130,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinRonMya4[] = {
    {
        .iv = 170,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerRuben2[] = {
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 48,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCamron2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BikerJaxon2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallIsaiah2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallCorey2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob2[] = {
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 28,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperJacob3[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleAlice2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleDarrin2[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PicnickerMissy3[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_FishermanWade2[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleJack2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SisAndBroLilIan3[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleFinn2[] = {
    {
        .iv = 80,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon2[] = {
    {
        .iv = 130,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlSharon3[] = {
    {
        .iv = 170,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya2[] = {
    {
        .iv = 130,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlTanya3[] = {
    {
        .iv = 170,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea2[] = {
    {
        .iv = 180,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltShea3[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh2[] = {
    {
        .iv = 180,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 180,
        .lvl = 50,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_BlackBeltHugh3[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia2[] = {
    {
        .iv = 130,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 130,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushKinMikKia3[] = {
    {
        .iv = 170,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TuberAmira2[] = {
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 47,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TwinsJoyMeg2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PainterRayna2[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungsterDestin2[] = {
    {
        .iv = 120,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnBreederAlize2[] = {
    {
        .iv = 150,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes2[] = {
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 30,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_YoungCoupleGiaJes3[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperMilo2[] = {
    {
        .iv = 120,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperChaz2[] = {
    {
        .iv = 120,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BirdKeeperHarold2[] = {
    {
        .iv = 120,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleNicole2[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicJaclyn2[] = {
    {
        .iv = 220,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleSamir2[] = {
    {
        .iv = 120,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_HikerEarl2[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_RuinManiacLarry2[] = {
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PokemaniacHector2[] = {
    {
        .iv = 150,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 150,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicDario2[] = {
    {
        .iv = 220,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PsychicRodette2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_JugglerMason2[] = {
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerNicolas2[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerMadeline2[] = {
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_CrushGirlCyndy2[] = {
    {
        .iv = 170,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
    {
        .iv = 170,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_BLACK_BELT,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_TamerEvan2[] = {
    {
        .iv = 160,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 160,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 160,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerJackson2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_PkmnRangerKatelyn2[] = {
    {
        .iv = 220,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerLeroy2[] = {
    {
        .iv = 220,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 52,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 55,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CooltrainerMichelle2[] = {
    {
        .iv = 220,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 53,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 56,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CoolCoupleLexNya2[] = {
    {
        .iv = 220,
        .lvl = 57,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 220,
        .lvl = 57,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton2[] = {
    {
        .iv = 20,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 20,
        .lvl = 19,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton3[] = {
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 60,
        .lvl = 27,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_BugCatcherColton4[] = {
    {
        .iv = 120,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 54,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 120,
        .lvl = 51,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleMatthew2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerMaleTony2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_SwimmerFemaleMelissa2[] = {
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 80,
        .lvl = 49,
        .species = ${SPECIES_PLACEHOLDER},
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourLorelei2[] = {
    {
        .iv = 255,
        .lvl = 64,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 63,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_CHERI_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourBruno2[] = {
    {
        .iv = 255,
        .lvl = 65,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_PERSIM_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourAgatha2[] = {
    {
        .iv = 255,
        .lvl = 66,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 65,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 68,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 70,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_CHESTO_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_EliteFourLance2[] = {
    {
        .iv = 255,
        .lvl = 68,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 66,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 70,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_PERSIM_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionRematchSquirtle[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionRematchBulbasaur[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonItemDefaultMoves sParty_ChampionRematchCharmander[] = {
    {
        .iv = 255,
        .lvl = 72,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 72,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 73,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_NONE,
    },
    {
        .iv = 255,
        .lvl = 75,
        .species = ${SPECIES_PLACEHOLDER},
        .heldItem = ITEM_SITRUS_BERRY,
    },
};

static const struct TrainerMonNoItemDefaultMoves sParty_CueBallPaxton[] = {
    {
        .iv = 50,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
    {
        .iv = 50,
        .lvl = 39,
        .species = ${SPECIES_PLACEHOLDER},
    },
};
