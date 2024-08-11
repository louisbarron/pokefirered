#include "global.h"
#include "gflib.h"
#include "mail_data.h"
#include "pokemon_icon.h"
#include "graphics.h"

#define POKE_ICON_BASE_PAL_TAG 56000

struct MonIconSpriteTemplate
{
    const struct OamData * oam;
    const u8 *image;
    const union AnimCmd *const * anims;
    const union AffineAnimCmd *const * affineAnims;
    SpriteCallback callback;
    u16 paletteTag;
};

static u8 CreateMonIconSprite(const struct MonIconSpriteTemplate * template, s16 x, s16 y, u8 subpriority);
static void DestroyMonIconInternal(struct Sprite *sprite);

const u16 gMonIconPalettes[][16] = {
    INCBIN_U16("graphics/pokemon/icon_palettes/icon_palette_0.gbapal"),
    INCBIN_U16("graphics/pokemon/icon_palettes/icon_palette_1.gbapal"),
    INCBIN_U16("graphics/pokemon/icon_palettes/icon_palette_2.gbapal")
};

const u8 *const gMonIconTable[] = {
    [SPECIES_NONE]        = gMonIcon_QuestionMark,
    [SPECIES_PETALIX]   = gMonIcon_Petalix,
    [SPECIES_PETALUX]   = gMonIcon_Petalux,
    [SPECIES_PETALIA]   = gMonIcon_Petalia,
    [SPECIES_FLARION]   = gMonIcon_Flarion,
    [SPECIES_FLARIX]   = gMonIcon_Flarix,
    [SPECIES_VICTIRAH]   = gMonIcon_Victirah,
    [SPECIES_VITARI]   = gMonIcon_Vitari,
    [SPECIES_VITALUXE]   = gMonIcon_Vitaluxe,
    [SPECIES_AETHERON]   = gMonIcon_Aetheron,
    [SPECIES_AETHRI]   = gMonIcon_Aethri,
    [SPECIES_VERDIGO]   = gMonIcon_Verdigo,
    [SPECIES_VERALIS]   = gMonIcon_Veralis,
    [SPECIES_VERMEA]   = gMonIcon_Vermea,
    [SPECIES_TORVIA]   = gMonIcon_Torvia,
    [SPECIES_CELIGRA]   = gMonIcon_Celigra,
    [SPECIES_CELUMI]   = gMonIcon_Celumi,
    [SPECIES_FLENURA]   = gMonIcon_Flenura,
    [SPECIES_FLENIXA]   = gMonIcon_Flenixa,
    [SPECIES_FLORENA]   = gMonIcon_Florena,
    [SPECIES_PULSX]   = gMonIcon_Pulsx,
    [SPECIES_PULSAR]   = gMonIcon_Pulsar,
    [SPECIES_PULSITE]   = gMonIcon_Pulsite,
    [SPECIES_TENEBRA]   = gMonIcon_Tenebra,
    [SPECIES_CRAGS]   = gMonIcon_Crags,
    [SPECIES_CRAGNOS]   = gMonIcon_Cragnos,
    [SPECIES_MIRAK]   = gMonIcon_Mirak,
    [SPECIES_MIXER]   = gMonIcon_Mixer,
    [SPECIES_KRYPTA]   = gMonIcon_Krypta,
    [SPECIES_CRYPTIN]   = gMonIcon_Cryptin,
    [SPECIES_CRYPTOR]   = gMonIcon_Cryptor,
    [SPECIES_KHILRIN]   = gMonIcon_Khilrin,
    [SPECIES_ASTEROS]   = gMonIcon_Asteros,
    [SPECIES_GYROP]   = gMonIcon_Gyrop,
    [SPECIES_CALLIGO]   = gMonIcon_Calligo,
    [SPECIES_ASTRUX]   = gMonIcon_Astrux,
    [SPECIES_VIRIDIA]   = gMonIcon_Viridia,
    [SPECIES_VIRELIA]   = gMonIcon_Virelia,
    [SPECIES_VEIRAN]   = gMonIcon_Veiran,
    [SPECIES_FURIX]   = gMonIcon_Furix,
    [SPECIES_STELLAL]   = gMonIcon_Stellal,
    [SPECIES_URAGI]   = gMonIcon_Uragi,
    [SPECIES_URAGON]   = gMonIcon_Uragon,
    [SPECIES_UROBOR]   = gMonIcon_Urobor,
    [SPECIES_TERRAGUL]   = gMonIcon_Terragul,
    [SPECIES_TERRACAEL]   = gMonIcon_Terracael,
    [SPECIES_SPIRA]   = gMonIcon_Spira,
    [SPECIES_FUMIX]   = gMonIcon_Fumix,
    [SPECIES_FUMARA]   = gMonIcon_Fumara,
    [SPECIES_FUMARIN]   = gMonIcon_Fumarin,
    [SPECIES_TENEBROUS]   = gMonIcon_Tenebrous,
    [SPECIES_TENEKROF]   = gMonIcon_Tenekrof,
    [SPECIES_LEMTUR]   = gMonIcon_Lemtur,
    [SPECIES_VINEIA]   = gMonIcon_Vineia,
    [SPECIES_VINEKOR]   = gMonIcon_Vinekor,
    [SPECIES_VINTRUB]   = gMonIcon_Vintrub,
    [SPECIES_MOMOZA]   = gMonIcon_Momoza,
    [SPECIES_MOMOZOA]   = gMonIcon_Momozoa,
    [SPECIES_MOMORAI]   = gMonIcon_Momorai,
    [SPECIES_NURVIO]   = gMonIcon_Nurvio,
    [SPECIES_NURVIS]   = gMonIcon_Nurvis,
    [SPECIES_NURIMAR]   = gMonIcon_Nurimar,
    [SPECIES_KLOUDA]   = gMonIcon_Klouda,
    [SPECIES_KLODION]   = gMonIcon_Klodion,
    [SPECIES_TERRAZO]   = gMonIcon_Terrazo,
    [SPECIES_TERRIGRON]   = gMonIcon_Terrigron,
    [SPECIES_TERRAGO]   = gMonIcon_Terrago,
    [SPECIES_DOXON]   = gMonIcon_Doxon,
    [SPECIES_DOXYON]   = gMonIcon_Doxyon,
    [SPECIES_AURARA]   = gMonIcon_Aurara,
    [SPECIES_AURORA]   = gMonIcon_Aurora,
    [SPECIES_SORVUS]   = gMonIcon_Sorvus,
    [SPECIES_SORVOL]   = gMonIcon_Sorvol,
    [SPECIES_TECHI]   = gMonIcon_Techi,
    [SPECIES_TECHSOL]   = gMonIcon_Techsol,
    [SPECIES_TECHURA]   = gMonIcon_Techura,
    [SPECIES_BRONZIX]   = gMonIcon_Bronzix,
    [SPECIES_DUNRAH]   = gMonIcon_Dunrah,
    [SPECIES_DUNARE]   = gMonIcon_Dunare,
    [SPECIES_CRYSTA]   = gMonIcon_Crysta,
    [SPECIES_KORVISA]   = gMonIcon_Korvisa,
    [SPECIES_KORVIX]   = gMonIcon_Korvix,
    [SPECIES_KORVAX]   = gMonIcon_Korvax,
    [SPECIES_SEALORA]   = gMonIcon_Sealora,
    [SPECIES_SEALEIRA]   = gMonIcon_Sealeira,
    [SPECIES_KAIDIKO]   = gMonIcon_Kaidiko,
    [SPECIES_PUPATOR]   = gMonIcon_Pupator,
    [SPECIES_AKMIDA]   = gMonIcon_Akmida,
    [SPECIES_RIVAGER]   = gMonIcon_Rivager,
    [SPECIES_RIVILE]   = gMonIcon_Rivile,
    [SPECIES_KARASHY]   = gMonIcon_Karashy,
    [SPECIES_AGATORA]   = gMonIcon_Agatora,
    [SPECIES_AGARIKS]   = gMonIcon_Agariks,
    [SPECIES_AGRAKA]   = gMonIcon_Agraka,
    [SPECIES_POCHET]   = gMonIcon_Pochet,
    [SPECIES_POCHETLIN]   = gMonIcon_Pochetlin,
    [SPECIES_POJEKT]   = gMonIcon_Pojekt,
    [SPECIES_SERENITE]   = gMonIcon_Serenite,
    [SPECIES_SERINAX]   = gMonIcon_Serinax,
    [SPECIES_LUMINE]   = gMonIcon_Lumine,
    [SPECIES_LUMINON]   = gMonIcon_Luminon,
    [SPECIES_CELESTIS]   = gMonIcon_Celestis,
    [SPECIES_CELESTUS]   = gMonIcon_Celestus,
    [SPECIES_STELARUS]   = gMonIcon_Stelarus,
    [SPECIES_CROQUON]   = gMonIcon_Croquon,
    [SPECIES_FANGOR]   = gMonIcon_Fangor,
    [SPECIES_VERDURA]   = gMonIcon_Verdura,
    [SPECIES_VERDUUS]   = gMonIcon_Verduus,
    [SPECIES_ASTARVE]   = gMonIcon_Astarve,
    [SPECIES_TUNDRAX]   = gMonIcon_Tundrax,
    [SPECIES_TARNEX]   = gMonIcon_Tarnex,
    [SPECIES_SCROLIA]   = gMonIcon_Scrolia,
    [SPECIES_SCROLLUX]   = gMonIcon_Scrollux,
    [SPECIES_AERHONE]   = gMonIcon_Aerhone,
    [SPECIES_AEROLUT]   = gMonIcon_Aerolut,
    [SPECIES_AERODIX]   = gMonIcon_Aerodix,
    [SPECIES_AERTHYS]   = gMonIcon_Aerthys,
    [SPECIES_ARTHYS]   = gMonIcon_Arthys,
    [SPECIES_CALLISTA]   = gMonIcon_Callista,
    [SPECIES_LURAS]   = gMonIcon_Luras,
    [SPECIES_LURIOS]   = gMonIcon_Lurios,
    [SPECIES_LURION]   = gMonIcon_Lurion,
    [SPECIES_IGNITOR]   = gMonIcon_Ignitor,
    [SPECIES_AQUAVOLE]   = gMonIcon_Aquavole,
    [SPECIES_AKVORA]   = gMonIcon_Akvora,
    [SPECIES_RHINOKS]   = gMonIcon_Rhinoks,
    [SPECIES_ROKITU]   = gMonIcon_Rokitu,
    [SPECIES_SORILI]   = gMonIcon_Sorili,
    [SPECIES_SERILI]   = gMonIcon_Serili,
    [SPECIES_FUMIGA]   = gMonIcon_Fumiga,
    [SPECIES_FUMINIA]   = gMonIcon_Fuminia,
    [SPECIES_FUMINDO]   = gMonIcon_Fumindo,
    [SPECIES_TERRAKO]   = gMonIcon_Terrako,
    [SPECIES_TERROBE]   = gMonIcon_Terrobe,
    [SPECIES_TERRIGON]   = gMonIcon_Terrigon,
    [SPECIES_AEROPE]   = gMonIcon_Aerope,
    [SPECIES_AEROPEX]   = gMonIcon_Aeropex,
    [SPECIES_VESPAS]   = gMonIcon_Vespas,
    [SPECIES_VESPERA]   = gMonIcon_Vespera,
    [SPECIES_GRAPHSIM]   = gMonIcon_Graphsim,
    [SPECIES_EMBRIS]   = gMonIcon_Embris,
    [SPECIES_EMBERG]   = gMonIcon_Emberg,
    [SPECIES_EMBLAZE]   = gMonIcon_Emblaze,
    [SPECIES_LEVORA]   = gMonIcon_Levora,
    [SPECIES_LEVAXON]   = gMonIcon_Levaxon,
    [SPECIES_LEVIORA]   = gMonIcon_Leviora,
    [SPECIES_ROKUIL]   = gMonIcon_Rokuil,
    [SPECIES_CRYSTALUX]   = gMonIcon_Crystalux,
    [SPECIES_CRYSTAZE]   = gMonIcon_Crystaze,
    [SPECIES_TINSTRY]   = gMonIcon_Tinstry,
    [SPECIES_LIGNANT]   = gMonIcon_Lignant,
    [SPECIES_LUMINANT]   = gMonIcon_Luminant,
    [SPECIES_LUMINUXE]   = gMonIcon_Luminuxe,
    [SPECIES_GLIMMOR]   = gMonIcon_Glimmor,
    [SPECIES_CALCIMONK]   = gMonIcon_Calcimonk,
    [SPECIES_CALCLION]   = gMonIcon_Calclion,
    [SPECIES_RUSTHOR]   = gMonIcon_Rusthor,
    [SPECIES_ALKON]   = gMonIcon_Alkon,
    [SPECIES_TINTINN]   = gMonIcon_Tintinn,
    [SPECIES_TINNION]   = gMonIcon_Tinnion,
    [SPECIES_TINNEK]   = gMonIcon_Tinnek,
    [SPECIES_LUMIN]   = gMonIcon_Lumin,
    [SPECIES_LUMINOR]   = gMonIcon_Luminor,
    [SPECIES_PRANJORA]   = gMonIcon_Pranjora,
    [SPECIES_CHRONIS]   = gMonIcon_Chronis,
    [SPECIES_IGNIFERT]   = gMonIcon_Ignifert,
    [SPECIES_IGNINTO]   = gMonIcon_Igninto,
    [SPECIES_TERRO]   = gMonIcon_Terro,
    [SPECIES_ROCKPIN]   = gMonIcon_Rockpin,
    [SPECIES_QILINI]   = gMonIcon_Qilini,
    [SPECIES_GELRATH]   = gMonIcon_Gelrath,
    [SPECIES_GELRAID]   = gMonIcon_Gelraid,
    [SPECIES_GLIMPIN]   = gMonIcon_Glimpin,
    [SPECIES_GLIMVIR]   = gMonIcon_Glimvir,
    [SPECIES_GLIMION]   = gMonIcon_Glimion,
    [SPECIES_AURSURF]   = gMonIcon_Aursurf,
    [SPECIES_AURIVORE]   = gMonIcon_Aurivore,
    [SPECIES_ONYRIX]   = gMonIcon_Onyrix,
    [SPECIES_ONYXYS]   = gMonIcon_Onyxys,
    [SPECIES_KAELOS]   = gMonIcon_Kaelos,
    [SPECIES_CUIMOS]   = gMonIcon_Cuimos,
    [SPECIES_KOROBI]   = gMonIcon_Korobi,
    [SPECIES_CULMOTH]   = gMonIcon_Culmoth,
    [SPECIES_BOUNDI]   = gMonIcon_Boundi,
    [SPECIES_BOUNDIERE]   = gMonIcon_Boundiere,
    [SPECIES_GRUMM]   = gMonIcon_Grumm,
    [SPECIES_GLITAS]   = gMonIcon_Glitas,
    [SPECIES_GLITRON]   = gMonIcon_Glitron,
    [SPECIES_MISTILE]   = gMonIcon_Mistile,
    [SPECIES_YUREKI]   = gMonIcon_Yureki,
    [SPECIES_YUKIMI]   = gMonIcon_Yukimi,
    [SPECIES_YUMIRA]   = gMonIcon_Yumira,
    [SPECIES_TURBIN]   = gMonIcon_Turbin,
    [SPECIES_TURMADE]   = gMonIcon_Turmade,
    [SPECIES_TURMAG]   = gMonIcon_Turmag,
    [SPECIES_ELECTORO]   = gMonIcon_Electoro,
    [SPECIES_ELECTRON]   = gMonIcon_Electron,
    [SPECIES_EXCAVA]   = gMonIcon_Excava,
    [SPECIES_EXCELSIA]   = gMonIcon_Excelsia,
    [SPECIES_DUSTOS]   = gMonIcon_Dustos,
    [SPECIES_DUSTOR]   = gMonIcon_Dustor,
    [SPECIES_AERFER]   = gMonIcon_Aerfer,
    [SPECIES_AERAXIS]   = gMonIcon_Aeraxis,

    [SPECIES_EGG]         = gMonIcon_Egg
};

const u8 gMonIconPaletteIndices[] = {
    [SPECIES_NONE]        = 0,
    [SPECIES_PETALIX]        = 0,
    [SPECIES_PETALUX]        = 0,
    [SPECIES_PETALIA]        = 0,
    [SPECIES_FLARION]        = 0,
    [SPECIES_FLARIX]        = 0,
    [SPECIES_VICTIRAH]        = 0,
    [SPECIES_VITARI]        = 0,
    [SPECIES_VITALUXE]        = 0,
    [SPECIES_AETHERON]        = 0,
    [SPECIES_AETHRI]        = 0,
    [SPECIES_VERDIGO]        = 0,
    [SPECIES_VERALIS]        = 0,
    [SPECIES_VERMEA]        = 0,
    [SPECIES_TORVIA]        = 0,
    [SPECIES_CELIGRA]        = 0,
    [SPECIES_CELUMI]        = 0,
    [SPECIES_FLENURA]        = 0,
    [SPECIES_FLENIXA]        = 0,
    [SPECIES_FLORENA]        = 0,
    [SPECIES_PULSX]        = 0,
    [SPECIES_PULSAR]        = 0,
    [SPECIES_PULSITE]        = 0,
    [SPECIES_TENEBRA]        = 0,
    [SPECIES_CRAGS]        = 0,
    [SPECIES_CRAGNOS]        = 0,
    [SPECIES_MIRAK]        = 0,
    [SPECIES_MIXER]        = 0,
    [SPECIES_KRYPTA]        = 0,
    [SPECIES_CRYPTIN]        = 0,
    [SPECIES_CRYPTOR]        = 0,
    [SPECIES_KHILRIN]        = 0,
    [SPECIES_ASTEROS]        = 0,
    [SPECIES_GYROP]        = 0,
    [SPECIES_CALLIGO]        = 0,
    [SPECIES_ASTRUX]        = 0,
    [SPECIES_VIRIDIA]        = 0,
    [SPECIES_VIRELIA]        = 0,
    [SPECIES_VEIRAN]        = 0,
    [SPECIES_FURIX]        = 0,
    [SPECIES_STELLAL]        = 0,
    [SPECIES_URAGI]        = 0,
    [SPECIES_URAGON]        = 0,
    [SPECIES_UROBOR]        = 0,
    [SPECIES_TERRAGUL]        = 0,
    [SPECIES_TERRACAEL]        = 0,
    [SPECIES_SPIRA]        = 0,
    [SPECIES_FUMIX]        = 0,
    [SPECIES_FUMARA]        = 0,
    [SPECIES_FUMARIN]        = 0,
    [SPECIES_TENEBROUS]        = 0,
    [SPECIES_TENEKROF]        = 0,
    [SPECIES_LEMTUR]        = 0,
    [SPECIES_VINEIA]        = 0,
    [SPECIES_VINEKOR]        = 0,
    [SPECIES_VINTRUB]        = 0,
    [SPECIES_MOMOZA]        = 0,
    [SPECIES_MOMOZOA]        = 0,
    [SPECIES_MOMORAI]        = 0,
    [SPECIES_NURVIO]        = 0,
    [SPECIES_NURVIS]        = 0,
    [SPECIES_NURIMAR]        = 0,
    [SPECIES_KLOUDA]        = 0,
    [SPECIES_KLODION]        = 0,
    [SPECIES_TERRAZO]        = 0,
    [SPECIES_TERRIGRON]        = 0,
    [SPECIES_TERRAGO]        = 0,
    [SPECIES_DOXON]        = 0,
    [SPECIES_DOXYON]        = 0,
    [SPECIES_AURARA]        = 0,
    [SPECIES_AURORA]        = 0,
    [SPECIES_SORVUS]        = 0,
    [SPECIES_SORVOL]        = 0,
    [SPECIES_TECHI]        = 0,
    [SPECIES_TECHSOL]        = 0,
    [SPECIES_TECHURA]        = 0,
    [SPECIES_BRONZIX]        = 0,
    [SPECIES_DUNRAH]        = 0,
    [SPECIES_DUNARE]        = 0,
    [SPECIES_CRYSTA]        = 0,
    [SPECIES_KORVISA]        = 0,
    [SPECIES_KORVIX]        = 0,
    [SPECIES_KORVAX]        = 0,
    [SPECIES_SEALORA]        = 0,
    [SPECIES_SEALEIRA]        = 0,
    [SPECIES_KAIDIKO]        = 0,
    [SPECIES_PUPATOR]        = 0,
    [SPECIES_AKMIDA]        = 0,
    [SPECIES_RIVAGER]        = 0,
    [SPECIES_RIVILE]        = 0,
    [SPECIES_KARASHY]        = 0,
    [SPECIES_AGATORA]        = 0,
    [SPECIES_AGARIKS]        = 0,
    [SPECIES_AGRAKA]        = 0,
    [SPECIES_POCHET]        = 0,
    [SPECIES_POCHETLIN]        = 0,
    [SPECIES_POJEKT]        = 0,
    [SPECIES_SERENITE]        = 0,
    [SPECIES_SERINAX]        = 0,
    [SPECIES_LUMINE]        = 0,
    [SPECIES_LUMINON]        = 0,
    [SPECIES_CELESTIS]        = 0,
    [SPECIES_CELESTUS]        = 0,
    [SPECIES_STELARUS]        = 0,
    [SPECIES_CROQUON]        = 0,
    [SPECIES_FANGOR]        = 0,
    [SPECIES_VERDURA]        = 0,
    [SPECIES_VERDUUS]        = 0,
    [SPECIES_ASTARVE]        = 0,
    [SPECIES_TUNDRAX]        = 0,
    [SPECIES_TARNEX]        = 0,
    [SPECIES_SCROLIA]        = 0,
    [SPECIES_SCROLLUX]        = 0,
    [SPECIES_AERHONE]        = 0,
    [SPECIES_AEROLUT]        = 0,
    [SPECIES_AERODIX]        = 0,
    [SPECIES_AERTHYS]        = 0,
    [SPECIES_ARTHYS]        = 0,
    [SPECIES_CALLISTA]        = 0,
    [SPECIES_LURAS]        = 0,
    [SPECIES_LURIOS]        = 0,
    [SPECIES_LURION]        = 0,
    [SPECIES_IGNITOR]        = 0,
    [SPECIES_AQUAVOLE]        = 0,
    [SPECIES_AKVORA]        = 0,
    [SPECIES_RHINOKS]        = 0,
    [SPECIES_ROKITU]        = 0,
    [SPECIES_SORILI]        = 0,
    [SPECIES_SERILI]        = 0,
    [SPECIES_FUMIGA]        = 0,
    [SPECIES_FUMINIA]        = 0,
    [SPECIES_FUMINDO]        = 0,
    [SPECIES_TERRAKO]        = 0,
    [SPECIES_TERROBE]        = 0,
    [SPECIES_TERRIGON]        = 0,
    [SPECIES_AEROPE]        = 0,
    [SPECIES_AEROPEX]        = 0,
    [SPECIES_VESPAS]        = 0,
    [SPECIES_VESPERA]        = 0,
    [SPECIES_GRAPHSIM]        = 0,
    [SPECIES_EMBRIS]        = 0,
    [SPECIES_EMBERG]        = 0,
    [SPECIES_EMBLAZE]        = 0,
    [SPECIES_LEVORA]        = 0,
    [SPECIES_LEVAXON]        = 0,
    [SPECIES_LEVIORA]        = 0,
    [SPECIES_ROKUIL]        = 0,
    [SPECIES_CRYSTALUX]        = 0,
    [SPECIES_CRYSTAZE]        = 0,
    [SPECIES_TINSTRY]        = 0,
    [SPECIES_LIGNANT]        = 0,
    [SPECIES_LUMINANT]        = 0,
    [SPECIES_LUMINUXE]        = 0,
    [SPECIES_GLIMMOR]        = 0,
    [SPECIES_CALCIMONK]        = 0,
    [SPECIES_CALCLION]        = 0,
    [SPECIES_RUSTHOR]        = 0,
    [SPECIES_ALKON]        = 0,
    [SPECIES_TINTINN]        = 0,
    [SPECIES_TINNION]        = 0,
    [SPECIES_TINNEK]        = 0,
    [SPECIES_LUMIN]        = 0,
    [SPECIES_LUMINOR]        = 0,
    [SPECIES_PRANJORA]        = 0,
    [SPECIES_CHRONIS]        = 0,
    [SPECIES_IGNIFERT]        = 0,
    [SPECIES_IGNINTO]        = 0,
    [SPECIES_TERRO]        = 0,
    [SPECIES_ROCKPIN]        = 0,
    [SPECIES_QILINI]        = 0,
    [SPECIES_GELRATH]        = 0,
    [SPECIES_GELRAID]        = 0,
    [SPECIES_GLIMPIN]        = 0,
    [SPECIES_GLIMVIR]        = 0,
    [SPECIES_GLIMION]        = 0,
    [SPECIES_AURSURF]        = 0,
    [SPECIES_AURIVORE]        = 0,
    [SPECIES_ONYRIX]        = 0,
    [SPECIES_ONYXYS]        = 0,
    [SPECIES_KAELOS]        = 0,
    [SPECIES_CUIMOS]        = 0,
    [SPECIES_KOROBI]        = 0,
    [SPECIES_CULMOTH]        = 0,
    [SPECIES_BOUNDI]        = 0,
    [SPECIES_BOUNDIERE]        = 0,
    [SPECIES_GRUMM]        = 0,
    [SPECIES_GLITAS]        = 0,
    [SPECIES_GLITRON]        = 0,
    [SPECIES_MISTILE]        = 0,
    [SPECIES_YUREKI]        = 0,
    [SPECIES_YUKIMI]        = 0,
    [SPECIES_YUMIRA]        = 0,
    [SPECIES_TURBIN]        = 0,
    [SPECIES_TURMADE]        = 0,
    [SPECIES_TURMAG]        = 0,
    [SPECIES_ELECTORO]        = 0,
    [SPECIES_ELECTRON]        = 0,
    [SPECIES_EXCAVA]        = 0,
    [SPECIES_EXCELSIA]        = 0,
    [SPECIES_DUSTOS]        = 0,
    [SPECIES_DUSTOR]        = 0,
    [SPECIES_AERFER]        = 0,
    [SPECIES_AERAXIS]        = 0,

    [SPECIES_EGG]         = 1
};

const struct SpritePalette gMonIconPaletteTable[] = {
    { gMonIconPalettes[0], POKE_ICON_BASE_PAL_TAG + 0 },
    { gMonIconPalettes[1], POKE_ICON_BASE_PAL_TAG + 1 },
    { gMonIconPalettes[2], POKE_ICON_BASE_PAL_TAG + 2 },
    // The following three point outside the gMonIconPalettes array
    // and are therefore invalid. Fortunately, they are never used.
    { gMonIconPalettes[3], POKE_ICON_BASE_PAL_TAG + 3 },
    { gMonIconPalettes[4], POKE_ICON_BASE_PAL_TAG + 4 },
    { gMonIconPalettes[5], POKE_ICON_BASE_PAL_TAG + 5 }
};

static const struct OamData sMonIconOamData = {
    .affineMode = ST_OAM_AFFINE_OFF,
    .objMode = ST_OAM_OBJ_NORMAL,
    .mosaic = FALSE,
    .bpp = ST_OAM_4BPP,
    .shape = SPRITE_SHAPE(32x32),
    .matrixNum = 0,
    .size = SPRITE_SIZE(32x32),
    .tileNum = 0x000,
    .priority = 1,
    .paletteNum = 0
};

static const union AnimCmd sMonIconAnim_Fast[] = {
    ANIMCMD_FRAME(0,  6),
    ANIMCMD_FRAME(1,  6),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sMonIconAnim_MediumFast[] = {
    ANIMCMD_FRAME(0,  8),
    ANIMCMD_FRAME(1,  8),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sMonIconAnim_MediumSlow[] = {
    ANIMCMD_FRAME(0, 14),
    ANIMCMD_FRAME(1, 14),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sMonIconAnim_Slow[] = {
    ANIMCMD_FRAME(0, 22),
    ANIMCMD_FRAME(1, 22),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd sMonIconAnim_Still[] = {
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_FRAME(0, 29),
    ANIMCMD_JUMP(0)
};

static const union AnimCmd *const sMonIconAnims[] = {
    sMonIconAnim_Fast,
    sMonIconAnim_MediumFast,
    sMonIconAnim_MediumSlow,
    sMonIconAnim_Slow,
    sMonIconAnim_Still
};

static const union AffineAnimCmd sMonIconAffineAnim_0[] = {
    AFFINEANIMCMD_FRAME(0, 0, 0, 10),
    AFFINEANIMCMD_END
};

static const union AffineAnimCmd sMonIconAffineAnim_1[] = {
    AFFINEANIMCMD_FRAME(-2, -2, 0, 122),
    AFFINEANIMCMD_END
};

static const union AffineAnimCmd *const sMonIconAffineAnims[] = {
    sMonIconAffineAnim_0,
    sMonIconAffineAnim_1
};

static const u16 sSpriteImageSizes[][4] = {
    [ST_OAM_SQUARE] = {
        [ST_OAM_SIZE_0] = 0x020,
        [ST_OAM_SIZE_1] = 0x080,
        [ST_OAM_SIZE_2] = 0x200,
        [ST_OAM_SIZE_3] = 0x800,
    },
    [ST_OAM_H_RECTANGLE] = {
        [ST_OAM_SIZE_0] = 0x040,
        [ST_OAM_SIZE_1] = 0x080,
        [ST_OAM_SIZE_2] = 0x100,
        [ST_OAM_SIZE_3] = 0x400,
    },
    [ST_OAM_V_RECTANGLE] = {
        [ST_OAM_SIZE_0] = 0x040,
        [ST_OAM_SIZE_1] = 0x080,
        [ST_OAM_SIZE_2] = 0x100,
        [ST_OAM_SIZE_3] = 0x400,
    },
};

u8 CreateMonIcon(u16 species, SpriteCallback callback, s16 x, s16 y, u8 subpriority, u32 personality, bool32 extra)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
        {
            .oam = &sMonIconOamData,
            .image = GetMonIconPtr(species, personality, extra),
            .anims = sMonIconAnims,
            .affineAnims = sMonIconAffineAnims,
            .callback = callback,
            .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
        };

    if (species > NUM_SPECIES)
        iconTemplate.paletteTag = POKE_ICON_BASE_PAL_TAG;

    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u8 CreateMonIcon_HandleDeoxys(u16 species, SpriteCallback callback, s16 x, s16 y, u8 subpriority, bool32 extra)
{
    u8 spriteId;
    struct MonIconSpriteTemplate iconTemplate =
        {
            .oam = &sMonIconOamData,
            .image = NULL,
            .anims = sMonIconAnims,
            .affineAnims = sMonIconAffineAnims,
            .callback = callback,
            .paletteTag = POKE_ICON_BASE_PAL_TAG + gMonIconPaletteIndices[species],
        };

    iconTemplate.image = GetMonIconTiles(species, extra);
    spriteId = CreateMonIconSprite(&iconTemplate, x, y, subpriority);

    UpdateMonIconFrame(&gSprites[spriteId]);

    return spriteId;
}

u16 GetIconSpecies(u16 species, u32 personality)
{
    u16 result;
    if (species > NUM_SPECIES)
        result = SPECIES_NONE;
    else
        result = species;

    return result;
}

u16 GetUnownLetterByPersonality(u32 personality)
{
    if (!personality)
        return 0;
    else
        return (((personality & 0x3000000) >> 18) | ((personality & 0x30000) >> 12) | ((personality & 0x300) >> 6) | (personality & 0x3)) % 0x1C;
}

u16 MailSpeciesToIconSpecies(u16 species)
{
    u16 value;
    return GetIconSpecies(species, 0);
}

const u8 *GetMonIconTiles(u16 species, bool32 extra)
{
    const u8 *iconSprite = gMonIconTable[species];
    return iconSprite;
}

const u8 *GetMonIconPtr(u16 species, u32 personality, bool32 extra)
{
    return GetMonIconTiles(GetIconSpecies(species, personality), extra);
}

void DestroyMonIcon(struct Sprite *sprite)
{
    DestroyMonIconInternal(sprite);
}

void LoadMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        LoadSpritePalette(&gMonIconPaletteTable[i]);
}

void SafeLoadMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void LoadMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    if (IndexOfSpritePaletteTag(gMonIconPaletteTable[palIndex].tag) == 0xFF)
        LoadSpritePalette(&gMonIconPaletteTable[palIndex]);
}

void FreeMonIconPalettes(void)
{
    u8 i;
    for (i = 0; i < ARRAY_COUNT(gMonIconPaletteTable); i++)
        FreeSpritePaletteByTag(gMonIconPaletteTable[i].tag);
}

void SafeFreeMonIconPalette(u16 species)
{
    u8 palIndex;
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void FreeMonIconPalette(u16 species)
{
    u8 palIndex;
    palIndex = gMonIconPaletteIndices[species];
    FreeSpritePaletteByTag(gMonIconPaletteTable[palIndex].tag);
}

void SpriteCB_MonIcon(struct Sprite *sprite)
{
    UpdateMonIconFrame(sprite);
}

void LoadMonIconPalettesAt(u16 offset)
{
    int i;
    if (offset <= BG_PLTT_ID(16 - ARRAY_COUNT(gMonIconPaletteTable)))
    {
        for (i = 0; i < (int)ARRAY_COUNT(gMonIconPaletteTable); i++)
        {
            LoadPalette(gMonIconPaletteTable[i].data, offset, PLTT_SIZE_4BPP);
            offset += 16;
        }
    }
}

const u16 *GetValidMonIconPalettePtr(u16 species)
{
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    return gMonIconPaletteTable[gMonIconPaletteIndices[species]].data;
}

u8 GetValidMonIconPalIndex(u16 species)
{
    if (species > NUM_SPECIES)
        species = SPECIES_NONE;
    return gMonIconPaletteIndices[species];
}

u8 GetMonIconPaletteIndexFromSpecies(u16 species)
{
    return gMonIconPaletteIndices[species];
}

u8 UpdateMonIconFrame(struct Sprite *sprite)
{
    u8 result = 0;

    if (sprite->animDelayCounter == 0)
    {
        s16 frame = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.imageValue;

        switch (frame)
        {
        case -1:
            break;
        case -2:
            sprite->animCmdIndex = 0;
            break;
        default:
            RequestSpriteCopy(
                // pointer arithmetic is needed to get the correct pointer to perform the sprite copy on.
                // because sprite->images is a struct def, it has to be casted to (u8 *) before any
                // arithmetic can be performed.
                (u8 *)sprite->images + (sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] * frame),
                (u8 *)(OBJ_VRAM0 + sprite->oam.tileNum * TILE_SIZE_4BPP),
                sSpriteImageSizes[sprite->oam.shape][sprite->oam.size]);
            sprite->animDelayCounter = sprite->anims[sprite->animNum][sprite->animCmdIndex].frame.duration & 0xFF;
            sprite->animCmdIndex++;
            result = sprite->animCmdIndex;
            break;
        }
    }
    else
    {
        sprite->animDelayCounter--;
    }
    return result;
}

static u8 CreateMonIconSprite(const struct MonIconSpriteTemplate * iconTemplate, s16 x, s16 y, u8 subpriority)
{
    u8 spriteId;

    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[iconTemplate->oam->shape][iconTemplate->oam->size] };

    struct SpriteTemplate spriteTemplate =
    {
        .tileTag = TAG_NONE,
        .paletteTag = iconTemplate->paletteTag,
        .oam = iconTemplate->oam,
        .anims = iconTemplate->anims,
        .images = &image,
        .affineAnims = iconTemplate->affineAnims,
        .callback = iconTemplate->callback,
    };

    spriteId = CreateSprite(&spriteTemplate, x, y, subpriority);
    gSprites[spriteId].animPaused = TRUE;
    gSprites[spriteId].animBeginning = FALSE;
    gSprites[spriteId].images = (const struct SpriteFrameImage *)iconTemplate->image;
    return spriteId;
}

static void DestroyMonIconInternal(struct Sprite *sprite)
{
    struct SpriteFrameImage image = { NULL, sSpriteImageSizes[sprite->oam.shape][sprite->oam.size] };
    sprite->images = &image;
    DestroySprite(sprite);
}

void SetPartyHPBarSprite(struct Sprite *sprite, u8 animNum)
{
    sprite->animNum = animNum;
    sprite->animDelayCounter = 0;
    sprite->animCmdIndex = 0;
}
