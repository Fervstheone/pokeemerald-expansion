#include "global.h"
#include "decompress.h"
#include "menu.h"
#include "overworld.h"
#include "palette.h"
#include "event_object_movement.h"
#include "field_effect.h"
#include "field_effect_helpers.h"
#include "field_player_avatar.h"
#include "field_weather.h"
#include "main.h"
#include "party_menu.h"
#include "pokemon.h"
#include "sprite.h"
#include "surfable.h"
#include "constants/event_object_movement.h"
#include "constants/field_effects.h"
#include "constants/moves.h"
#include "constants/species.h"

extern const struct OamData gObjectEventBaseOam_32x32;
extern const struct OamData gObjectEventBaseOam_64x64;
extern const struct SpriteTemplate *const gFieldEffectObjectTemplatePointers[];

extern void SynchroniseSurfAnim(struct ObjectEvent *playerObj, struct Sprite *sprite);
extern void SynchroniseSurfPosition(struct ObjectEvent *playerObj, struct Sprite *sprite);

static void CreateOverlaySprite(void);
static void UpdateSurfMonOverlay(struct Sprite *sprite);

struct RideablePokemon
{
    u16 species;
    u8 trainerPose;
};

#include "data/object_events/surfable/surfable_pokemon.h"
#include "data/object_events/surfable/surfable_pokemon_graphics.h"
#include "data/object_events/surfable/surfable_pokemon_pic_tables.h"
#include "data/object_events/surfable/surfable_pokemon_templates.h"

static EWRAM_DATA u16 sCurrentSurfMon = {0};

static u16 GetSurfMonSpecies(u8 slot)
{
    if (gSaveBlock1Ptr->surfmonSpecies == SPECIES_NONE)
    {
        if (MonKnowsMove(&gPlayerParty[slot], MOVE_SURF))
        {
            gSaveBlock1Ptr->surfmonSpecies = GetMonData(&gPlayerParty[slot], MON_DATA_SPECIES);
            return gSaveBlock1Ptr->surfmonSpecies;
        }
        else
            return 0xFFFF;
    }
    else
    {
        return gSaveBlock1Ptr->surfmonSpecies;
    }
}

static u16 GetSurfablePokemonSpriteBySpecies(u8 slot)
{
    u8 i;
    u16 species = GetSurfMonSpecies(slot);

    for (i = 0; i < ARRAY_COUNT(gSurfablePokemon); i++)
    {
        if (species == gSurfablePokemon[i].species)
            return i;
    }
    return 0xFFFF;
}

static void LoadSurfOverworldPalette(u32 personality, u8 slot)
{
    bool8 isShiny;
    isShiny = IsMonShiny(&gPlayerParty[slot]);

    if (isShiny){
        LoadCompressedSpritePalette(&sSurfablePokemonShinyPalettes[sCurrentSurfMon]);
        UpdateSpritePaletteWithWeather(IndexOfSpritePaletteTag(sSurfablePokemonShinyPalettes[sCurrentSurfMon].tag), FALSE);
    }
    else{
        LoadCompressedSpritePalette(&sSurfablePokemonPalettes[sCurrentSurfMon]);
        UpdateSpritePaletteWithWeather(IndexOfSpritePaletteTag(sSurfablePokemonPalettes[sCurrentSurfMon].tag), FALSE);
    }
}

u32 CreateSurfablePokemonSprite(void)
{
    u8 spriteId;
    struct Sprite *sprite;
    u8 slot = gFieldEffectArguments[3];
    u32 personality = GetMonData(gPlayerParty, MON_DATA_PERSONALITY);

    SetSpritePosToOffsetMapCoords((s16 *)&gFieldEffectArguments[0], (s16 *)&gFieldEffectArguments[1], 8, 8);

    sCurrentSurfMon = GetSurfablePokemonSpriteBySpecies(slot);
    if (sCurrentSurfMon != 0xFFFF)
    {
        LoadSurfOverworldPalette(personality, slot);
        spriteId = CreateSpriteAtEnd(&gSurfablePokemonOverworldSprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], 0x96);
        if (gSurfablePokemonOverlaySprites[sCurrentSurfMon].tileTag == 0xFFFF)
        {
            CreateOverlaySprite();
        }
    }
    else
    { // Create surf blob
    //LoadFieldEffectPalette(SurfBlob)
        spriteId = CreateSpriteAtEnd(gFieldEffectObjectTemplatePointers[FLDEFFOBJ_SURF_BLOB], gFieldEffectArguments[0], gFieldEffectArguments[1], 0x96);
    }

    if (spriteId != MAX_SPRITES)
    {
        sprite = &gSprites[spriteId];
        sprite->coordOffsetEnabled = TRUE;
        sprite->data[2] = gFieldEffectArguments[2];
        sprite->data[3] = -1;
        sprite->data[6] = -1;
        sprite->data[7] = -1;
    }
    FieldEffectActiveListRemove(FLDEFF_SURF_BLOB);
    return spriteId;
}

static void CreateOverlaySprite(void)
{
    u8 overlaySprite;
    u8 subpriority;
    struct Sprite *sprite;

    subpriority = gSprites[gPlayerAvatar.spriteId].subpriority - 1;
    overlaySprite = CreateSpriteAtEnd(&gSurfablePokemonOverlaySprites[sCurrentSurfMon], gFieldEffectArguments[0], gFieldEffectArguments[1], subpriority);

    if (overlaySprite != MAX_SPRITES)
    {
        sprite = &gSprites[overlaySprite];
        sprite->coordOffsetEnabled = TRUE;
        sprite->data[2] = gFieldEffectArguments[2];
        sprite->data[3] = -1;
        sprite->data[6] = -1;
        sprite->data[7] = -1;
        sprite->oam.priority = 2;
    }
    SetSurfBlob_BobState(overlaySprite, BOB_PLAYER_AND_MON);
}

static void UpdateSurfMonOverlay(struct Sprite *sprite)
{
    struct ObjectEvent *playerObj;
    struct Sprite *linkedSprite;
    u8 subpriority;

    playerObj = &gObjectEvents[gPlayerAvatar.objectEventId];
    linkedSprite = &gSprites[playerObj->spriteId];

    SynchroniseSurfAnim(playerObj, sprite);
    SynchroniseSurfPosition(playerObj, sprite);

    // Reset the subpriority for the overlay sprite so it shows on top of the player
    // We need this here so the subprio is correct after a screen transition (e.g. after exiting a battle)
    subpriority = gSprites[gPlayerAvatar.spriteId].subpriority - 1;
    sprite->subpriority = subpriority;

    if (linkedSprite->animNum < MOVEMENT_ACTION_DELAY_16)
    {
        sprite->x = linkedSprite->x;
        sprite->y = linkedSprite->y + 8;
        sprite->y2 = linkedSprite->y2;
    }
    if (!(gPlayerAvatar.flags & PLAYER_AVATAR_FLAG_SURFING))
        DestroySprite(sprite);
}

