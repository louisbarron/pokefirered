#ifndef GUARD_CONSTANTS_POKEDEX_H
#define GUARD_CONSTANTS_POKEDEX_H

// National Pokedex order
enum {
    NATIONAL_DEX_NONE,
    NATIONAL_DEX_PETALIX,
    NATIONAL_DEX_PETALUX,
    NATIONAL_DEX_PETALIA,
    NATIONAL_DEX_FLARION,
    NATIONAL_DEX_FLARIX,
    NATIONAL_DEX_VICTIRAH,
    NATIONAL_DEX_VITARI,
    NATIONAL_DEX_VITALUXE,
    NATIONAL_DEX_AETHERON,
    NATIONAL_DEX_AETHRI,
    NATIONAL_DEX_VERDIGO,
    NATIONAL_DEX_VERALIS,
    NATIONAL_DEX_VERMEA,
    NATIONAL_DEX_TORVIA,
    NATIONAL_DEX_CELIGRA,
    NATIONAL_DEX_CELUMI,
    NATIONAL_DEX_FLENURA,
    NATIONAL_DEX_FLENIXA,
    NATIONAL_DEX_FLORENA,
    NATIONAL_DEX_PULSX,
    NATIONAL_DEX_PULSAR,
    NATIONAL_DEX_PULSITE,
    NATIONAL_DEX_TENEBRA,
    NATIONAL_DEX_CRAGS,
    NATIONAL_DEX_CRAGNOS,
    NATIONAL_DEX_MIRAK,
    NATIONAL_DEX_MIXER,
    NATIONAL_DEX_KRYPTA,
    NATIONAL_DEX_CRYPTIN,
    NATIONAL_DEX_CRYPTOR,
    NATIONAL_DEX_KHILRIN,
    NATIONAL_DEX_ASTEROS,
    NATIONAL_DEX_GYROP,
    NATIONAL_DEX_CALLIGO,
    NATIONAL_DEX_ASTRUX,
    NATIONAL_DEX_VIRIDIA,
    NATIONAL_DEX_VIRELIA,
    NATIONAL_DEX_VEIRAN,
    NATIONAL_DEX_FURIX,
    NATIONAL_DEX_STELLAL,
    NATIONAL_DEX_URAGI,
    NATIONAL_DEX_URAGON,
    NATIONAL_DEX_UROBOR,
    NATIONAL_DEX_TERRAGUL,
    NATIONAL_DEX_TERRACAEL,
    NATIONAL_DEX_SPIRA,
    NATIONAL_DEX_FUMIX,
    NATIONAL_DEX_FUMARA,
    NATIONAL_DEX_FUMARIN,
    NATIONAL_DEX_TENEBROUS,
    NATIONAL_DEX_TENEKROF,
    NATIONAL_DEX_LEMTUR,
    NATIONAL_DEX_VINEIA,
    NATIONAL_DEX_VINEKOR,
    NATIONAL_DEX_VINTRUB,
    NATIONAL_DEX_MOMOZA,
    NATIONAL_DEX_MOMOZOA,
    NATIONAL_DEX_MOMORAI,
    NATIONAL_DEX_NURVIO,
    NATIONAL_DEX_NURVIS,
    NATIONAL_DEX_NURIMAR,
    NATIONAL_DEX_KLOUDA,
    NATIONAL_DEX_KLODION,
    NATIONAL_DEX_TERRAZO,
    NATIONAL_DEX_TERRIGRON,
    NATIONAL_DEX_TERRAGO,
    NATIONAL_DEX_DOXON,
    NATIONAL_DEX_DOXYON,
    NATIONAL_DEX_AURARA,
    NATIONAL_DEX_AURORA,
    NATIONAL_DEX_SORVUS,
    NATIONAL_DEX_SORVOL,
    NATIONAL_DEX_TECHI,
    NATIONAL_DEX_TECHSOL,
    NATIONAL_DEX_TECHURA,
    NATIONAL_DEX_BRONZIX,
    NATIONAL_DEX_DUNRAH,
    NATIONAL_DEX_DUNARE,
    NATIONAL_DEX_CRYSTA,
    NATIONAL_DEX_KORVISA,
    NATIONAL_DEX_KORVIX,
    NATIONAL_DEX_KORVAX,
    NATIONAL_DEX_SEALORA,
    NATIONAL_DEX_SEALEIRA,
    NATIONAL_DEX_KAIDIKO,
    NATIONAL_DEX_PUPATOR,
    NATIONAL_DEX_AKMIDA,
    NATIONAL_DEX_RIVAGER,
    NATIONAL_DEX_RIVILE,
    NATIONAL_DEX_KARASHY,
    NATIONAL_DEX_AGATORA,
    NATIONAL_DEX_AGARIKS,
    NATIONAL_DEX_AGRAKA,
    NATIONAL_DEX_POCHET,
    NATIONAL_DEX_POCHETLIN,
    NATIONAL_DEX_POJEKT,
    NATIONAL_DEX_SERENITE,
    NATIONAL_DEX_SERINAX,
    NATIONAL_DEX_LUMINE,
    NATIONAL_DEX_LUMINON,
    NATIONAL_DEX_CELESTIS,
    NATIONAL_DEX_CELESTUS,
    NATIONAL_DEX_STELARUS,
    NATIONAL_DEX_CROQUON,
    NATIONAL_DEX_FANGOR,
    NATIONAL_DEX_VERDURA,
    NATIONAL_DEX_VERDUUS,
    NATIONAL_DEX_ASTARVE,
    NATIONAL_DEX_TUNDRAX,
    NATIONAL_DEX_TARNEX,
    NATIONAL_DEX_SCROLIA,
    NATIONAL_DEX_SCROLLUX,
    NATIONAL_DEX_AERHONE,
    NATIONAL_DEX_AEROLUT,
    NATIONAL_DEX_AERODIX,
    NATIONAL_DEX_AERTHYS,
    NATIONAL_DEX_ARTHYS,
    NATIONAL_DEX_CALLISTA,
    NATIONAL_DEX_LURAS,
    NATIONAL_DEX_LURIOS,
    NATIONAL_DEX_LURION,
    NATIONAL_DEX_IGNITOR,
    NATIONAL_DEX_AQUAVOLE,
    NATIONAL_DEX_AKVORA,
    NATIONAL_DEX_RHINOKS,
    NATIONAL_DEX_ROKITU,
    NATIONAL_DEX_SORILI,
    NATIONAL_DEX_SERILI,
    NATIONAL_DEX_FUMIGA,
    NATIONAL_DEX_FUMINIA,
    NATIONAL_DEX_FUMINDO,
    NATIONAL_DEX_TERRAKO,
    NATIONAL_DEX_TERROBE,
    NATIONAL_DEX_TERRIGON,
    NATIONAL_DEX_AEROPE,
    NATIONAL_DEX_AEROPEX,
    NATIONAL_DEX_VESPAS,
    NATIONAL_DEX_VESPERA,
    NATIONAL_DEX_GRAPHSIM,
    NATIONAL_DEX_EMBRIS,
    NATIONAL_DEX_EMBERG,
    NATIONAL_DEX_EMBLAZE,
    NATIONAL_DEX_LEVORA,
    NATIONAL_DEX_LEVAXON,
    NATIONAL_DEX_LEVIORA,
    NATIONAL_DEX_ROKUIL,
    NATIONAL_DEX_CRYSTALUX,
    NATIONAL_DEX_CRYSTAZE,
    NATIONAL_DEX_TINSTRY,
    NATIONAL_DEX_LIGNANT,
    NATIONAL_DEX_LUMINANT,
    NATIONAL_DEX_LUMINUXE,
    NATIONAL_DEX_GLIMMOR,
    NATIONAL_DEX_CALCIMONK,
    NATIONAL_DEX_CALCLION,
    NATIONAL_DEX_RUSTHOR,
    NATIONAL_DEX_ALKON,
    NATIONAL_DEX_TINTINN,
    NATIONAL_DEX_TINNION,
    NATIONAL_DEX_TINNEK,
    NATIONAL_DEX_LUMIN,
    NATIONAL_DEX_LUMINOR,
    NATIONAL_DEX_PRANJORA,
    NATIONAL_DEX_CHRONIS,
    NATIONAL_DEX_IGNIFERT,
    NATIONAL_DEX_IGNINTO,
    NATIONAL_DEX_TERRO,
    NATIONAL_DEX_ROCKPIN,
    NATIONAL_DEX_QILINI,
    NATIONAL_DEX_GELRATH,
    NATIONAL_DEX_GELRAID,
    NATIONAL_DEX_GLIMPIN,
    NATIONAL_DEX_GLIMVIR,
    NATIONAL_DEX_GLIMION,
    NATIONAL_DEX_AURSURF,
    NATIONAL_DEX_AURIVORE,
    NATIONAL_DEX_ONYRIX,
    NATIONAL_DEX_ONYXYS,
    NATIONAL_DEX_KAELOS,
    NATIONAL_DEX_CUIMOS,
    NATIONAL_DEX_KOROBI,
    NATIONAL_DEX_CULMOTH,
    NATIONAL_DEX_BOUNDI,
    NATIONAL_DEX_BOUNDIERE,
    NATIONAL_DEX_GRUMM,
    NATIONAL_DEX_GLITAS,
    NATIONAL_DEX_GLITRON,
    NATIONAL_DEX_MISTILE,
    NATIONAL_DEX_YUREKI,
    NATIONAL_DEX_YUKIMI,
    NATIONAL_DEX_YUMIRA,
    NATIONAL_DEX_TURBIN,
    NATIONAL_DEX_TURMADE,
    NATIONAL_DEX_TURMAG,
    NATIONAL_DEX_ELECTORO,
    NATIONAL_DEX_ELECTRON,
    NATIONAL_DEX_EXCAVA,
    NATIONAL_DEX_EXCELSIA,
    NATIONAL_DEX_DUSTOS,
    NATIONAL_DEX_DUSTOR,
    NATIONAL_DEX_AERFER,
    NATIONAL_DEX_AERAXIS,

};

#define KANTO_DEX_COUNT     NATIONAL_DEX_AERAXIS
#define JOHTO_DEX_COUNT     NATIONAL_DEX_AERAXIS
#define NATIONAL_DEX_COUNT  NATIONAL_DEX_AERAXIS

// Hoenn Pokedex order
enum {
    HOENN_DEX_NONE,
    HOENN_DEX_PETALIX,
    HOENN_DEX_PETALUX,
    HOENN_DEX_PETALIA,
    HOENN_DEX_FLARION,
    HOENN_DEX_FLARIX,
    HOENN_DEX_VICTIRAH,
    HOENN_DEX_VITARI,
    HOENN_DEX_VITALUXE,
    HOENN_DEX_AETHERON,
    HOENN_DEX_AETHRI,
    HOENN_DEX_VERDIGO,
    HOENN_DEX_VERALIS,
    HOENN_DEX_VERMEA,
    HOENN_DEX_TORVIA,
    HOENN_DEX_CELIGRA,
    HOENN_DEX_CELUMI,
    HOENN_DEX_FLENURA,
    HOENN_DEX_FLENIXA,
    HOENN_DEX_FLORENA,
    HOENN_DEX_PULSX,
    HOENN_DEX_PULSAR,
    HOENN_DEX_PULSITE,
    HOENN_DEX_TENEBRA,
    HOENN_DEX_CRAGS,
    HOENN_DEX_CRAGNOS,
    HOENN_DEX_MIRAK,
    HOENN_DEX_MIXER,
    HOENN_DEX_KRYPTA,
    HOENN_DEX_CRYPTIN,
    HOENN_DEX_CRYPTOR,
    HOENN_DEX_KHILRIN,
    HOENN_DEX_ASTEROS,
    HOENN_DEX_GYROP,
    HOENN_DEX_CALLIGO,
    HOENN_DEX_ASTRUX,
    HOENN_DEX_VIRIDIA,
    HOENN_DEX_VIRELIA,
    HOENN_DEX_VEIRAN,
    HOENN_DEX_FURIX,
    HOENN_DEX_STELLAL,
    HOENN_DEX_URAGI,
    HOENN_DEX_URAGON,
    HOENN_DEX_UROBOR,
    HOENN_DEX_TERRAGUL,
    HOENN_DEX_TERRACAEL,
    HOENN_DEX_SPIRA,
    HOENN_DEX_FUMIX,
    HOENN_DEX_FUMARA,
    HOENN_DEX_FUMARIN,
    HOENN_DEX_TENEBROUS,
    HOENN_DEX_TENEKROF,
    HOENN_DEX_LEMTUR,
    HOENN_DEX_VINEIA,
    HOENN_DEX_VINEKOR,
    HOENN_DEX_VINTRUB,
    HOENN_DEX_MOMOZA,
    HOENN_DEX_MOMOZOA,
    HOENN_DEX_MOMORAI,
    HOENN_DEX_NURVIO,
    HOENN_DEX_NURVIS,
    HOENN_DEX_NURIMAR,
    HOENN_DEX_KLOUDA,
    HOENN_DEX_KLODION,
    HOENN_DEX_TERRAZO,
    HOENN_DEX_TERRIGRON,
    HOENN_DEX_TERRAGO,
    HOENN_DEX_DOXON,
    HOENN_DEX_DOXYON,
    HOENN_DEX_AURARA,
    HOENN_DEX_AURORA,
    HOENN_DEX_SORVUS,
    HOENN_DEX_SORVOL,
    HOENN_DEX_TECHI,
    HOENN_DEX_TECHSOL,
    HOENN_DEX_TECHURA,
    HOENN_DEX_BRONZIX,
    HOENN_DEX_DUNRAH,
    HOENN_DEX_DUNARE,
    HOENN_DEX_CRYSTA,
    HOENN_DEX_KORVISA,
    HOENN_DEX_KORVIX,
    HOENN_DEX_KORVAX,
    HOENN_DEX_SEALORA,
    HOENN_DEX_SEALEIRA,
    HOENN_DEX_KAIDIKO,
    HOENN_DEX_PUPATOR,
    HOENN_DEX_AKMIDA,
    HOENN_DEX_RIVAGER,
    HOENN_DEX_RIVILE,
    HOENN_DEX_KARASHY,
    HOENN_DEX_AGATORA,
    HOENN_DEX_AGARIKS,
    HOENN_DEX_AGRAKA,
    HOENN_DEX_POCHET,
    HOENN_DEX_POCHETLIN,
    HOENN_DEX_POJEKT,
    HOENN_DEX_SERENITE,
    HOENN_DEX_SERINAX,
    HOENN_DEX_LUMINE,
    HOENN_DEX_LUMINON,
    HOENN_DEX_CELESTIS,
    HOENN_DEX_CELESTUS,
    HOENN_DEX_STELARUS,
    HOENN_DEX_CROQUON,
    HOENN_DEX_FANGOR,
    HOENN_DEX_VERDURA,
    HOENN_DEX_VERDUUS,
    HOENN_DEX_ASTARVE,
    HOENN_DEX_TUNDRAX,
    HOENN_DEX_TARNEX,
    HOENN_DEX_SCROLIA,
    HOENN_DEX_SCROLLUX,
    HOENN_DEX_AERHONE,
    HOENN_DEX_AEROLUT,
    HOENN_DEX_AERODIX,
    HOENN_DEX_AERTHYS,
    HOENN_DEX_ARTHYS,
    HOENN_DEX_CALLISTA,
    HOENN_DEX_LURAS,
    HOENN_DEX_LURIOS,
    HOENN_DEX_LURION,
    HOENN_DEX_IGNITOR,
    HOENN_DEX_AQUAVOLE,
    HOENN_DEX_AKVORA,
    HOENN_DEX_RHINOKS,
    HOENN_DEX_ROKITU,
    HOENN_DEX_SORILI,
    HOENN_DEX_SERILI,
    HOENN_DEX_FUMIGA,
    HOENN_DEX_FUMINIA,
    HOENN_DEX_FUMINDO,
    HOENN_DEX_TERRAKO,
    HOENN_DEX_TERROBE,
    HOENN_DEX_TERRIGON,
    HOENN_DEX_AEROPE,
    HOENN_DEX_AEROPEX,
    HOENN_DEX_VESPAS,
    HOENN_DEX_VESPERA,
    HOENN_DEX_GRAPHSIM,
    HOENN_DEX_EMBRIS,
    HOENN_DEX_EMBERG,
    HOENN_DEX_EMBLAZE,
    HOENN_DEX_LEVORA,
    HOENN_DEX_LEVAXON,
    HOENN_DEX_LEVIORA,
    HOENN_DEX_ROKUIL,
    HOENN_DEX_CRYSTALUX,
    HOENN_DEX_CRYSTAZE,
    HOENN_DEX_TINSTRY,
    HOENN_DEX_LIGNANT,
    HOENN_DEX_LUMINANT,
    HOENN_DEX_LUMINUXE,
    HOENN_DEX_GLIMMOR,
    HOENN_DEX_CALCIMONK,
    HOENN_DEX_CALCLION,
    HOENN_DEX_RUSTHOR,
    HOENN_DEX_ALKON,
    HOENN_DEX_TINTINN,
    HOENN_DEX_TINNION,
    HOENN_DEX_TINNEK,
    HOENN_DEX_LUMIN,
    HOENN_DEX_LUMINOR,
    HOENN_DEX_PRANJORA,
    HOENN_DEX_CHRONIS,
    HOENN_DEX_IGNIFERT,
    HOENN_DEX_IGNINTO,
    HOENN_DEX_TERRO,
    HOENN_DEX_ROCKPIN,
    HOENN_DEX_QILINI,
    HOENN_DEX_GELRATH,
    HOENN_DEX_GELRAID,
    HOENN_DEX_GLIMPIN,
    HOENN_DEX_GLIMVIR,
    HOENN_DEX_GLIMION,
    HOENN_DEX_AURSURF,
    HOENN_DEX_AURIVORE,
    HOENN_DEX_ONYRIX,
    HOENN_DEX_ONYXYS,
    HOENN_DEX_KAELOS,
    HOENN_DEX_CUIMOS,
    HOENN_DEX_KOROBI,
    HOENN_DEX_CULMOTH,
    HOENN_DEX_BOUNDI,
    HOENN_DEX_BOUNDIERE,
    HOENN_DEX_GRUMM,
    HOENN_DEX_GLITAS,
    HOENN_DEX_GLITRON,
    HOENN_DEX_MISTILE,
    HOENN_DEX_YUREKI,
    HOENN_DEX_YUKIMI,
    HOENN_DEX_YUMIRA,
    HOENN_DEX_TURBIN,
    HOENN_DEX_TURMADE,
    HOENN_DEX_TURMAG,
    HOENN_DEX_ELECTORO,
    HOENN_DEX_ELECTRON,
    HOENN_DEX_EXCAVA,
    HOENN_DEX_EXCELSIA,
    HOENN_DEX_DUSTOS,
    HOENN_DEX_DUSTOR,
    HOENN_DEX_AERFER,
    HOENN_DEX_AERAXIS,

};

#define HOENN_DEX_COUNT HOENN_DEX_AERAXIS

#endif // GUARD_CONSTANTS_POKEDEX_H
