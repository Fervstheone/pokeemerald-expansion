const struct ObjectEventGraphicsInfo gPokemonObjectGraphics[] = {
#if P_FAMILY_BULBASAUR
    [SPECIES_BULBASAUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bulbasaur, gDummySpriteAffineAnimTable},
    [SPECIES_IVYSAUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ivysaur, gDummySpriteAffineAnimTable},
    [SPECIES_VENUSAUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Venusaur, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BULBASAUR
#if P_FAMILY_CHARMANDER
    [SPECIES_CHARMANDER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Charmander, gDummySpriteAffineAnimTable},
    [SPECIES_CHARMELEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Charmeleon, gDummySpriteAffineAnimTable},
    [SPECIES_CHARIZARD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Charizard, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHARMANDER
#if P_FAMILY_SQUIRTLE
    [SPECIES_SQUIRTLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Squirtle, gDummySpriteAffineAnimTable},
    [SPECIES_WARTORTLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wartortle, gDummySpriteAffineAnimTable},
    [SPECIES_BLASTOISE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Blastoise, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SQUIRTLE
#if P_FAMILY_CATERPIE
    [SPECIES_CATERPIE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Caterpie, gDummySpriteAffineAnimTable},
    [SPECIES_METAPOD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Metapod, gDummySpriteAffineAnimTable},
    [SPECIES_BUTTERFREE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Butterfree, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CATERPIE
#if P_FAMILY_WEEDLE
    [SPECIES_WEEDLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Weedle, gDummySpriteAffineAnimTable},
    [SPECIES_KAKUNA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kakuna, gDummySpriteAffineAnimTable},
    [SPECIES_BEEDRILL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Beedrill, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WEEDLE
#if P_FAMILY_PIDGEY
    [SPECIES_PIDGEY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pidgey, gDummySpriteAffineAnimTable},
    [SPECIES_PIDGEOTTO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pidgeotto, gDummySpriteAffineAnimTable},
    [SPECIES_PIDGEOT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pidgeot, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PIDGEY
#if P_FAMILY_RATTATA
    [SPECIES_RATTATA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rattata, gDummySpriteAffineAnimTable},
    [SPECIES_RATICATE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Raticate, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_RATTATA
#if P_FAMILY_SPEAROW
    [SPECIES_SPEAROW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spearow, gDummySpriteAffineAnimTable},
    [SPECIES_FEAROW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Fearow, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SPEAROW
#if P_FAMILY_EKANS
    [SPECIES_EKANS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ekans, gDummySpriteAffineAnimTable},
    [SPECIES_ARBOK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Arbok, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_EKANS
#if P_FAMILY_PIKACHU
#if P_GEN_2_CROSS_EVOS
    [SPECIES_PICHU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pichu, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
    [SPECIES_PIKACHU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pikachu, gDummySpriteAffineAnimTable},
    [SPECIES_RAICHU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Raichu, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PIKACHU
#if P_FAMILY_SANDSHREW
    [SPECIES_SANDSHREW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sandshrew, gDummySpriteAffineAnimTable},
    [SPECIES_SANDSLASH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sandslash, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SANDSHREW
#if P_FAMILY_NIDORAN
    [SPECIES_NIDORAN_F]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nidoran_f, gDummySpriteAffineAnimTable},
    [SPECIES_NIDORINA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nidorina, gDummySpriteAffineAnimTable},
    [SPECIES_NIDOQUEEN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nidoqueen, gDummySpriteAffineAnimTable},
    [SPECIES_NIDORAN_M]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nidoran_m, gDummySpriteAffineAnimTable},
    [SPECIES_NIDORINO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nidorino, gDummySpriteAffineAnimTable},
    [SPECIES_NIDOKING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nidoking, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_NIDORAN
#if P_FAMILY_CLEFAIRY
#if P_GEN_2_CROSS_EVOS
    [SPECIES_CLEFFA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cleffa, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
    [SPECIES_CLEFAIRY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Clefairy, gDummySpriteAffineAnimTable},
    [SPECIES_CLEFABLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Clefable, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CLEFAIRY
#if P_FAMILY_VULPIX
    [SPECIES_VULPIX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vulpix, gDummySpriteAffineAnimTable},
    [SPECIES_NINETALES]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ninetales, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VULPIX
#if P_FAMILY_JIGGLYPUFF
#if P_GEN_2_CROSS_EVOS
    [SPECIES_IGGLYBUFF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Igglybuff, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
    [SPECIES_JIGGLYPUFF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Jigglypuff, gDummySpriteAffineAnimTable},
    [SPECIES_WIGGLYTUFF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wigglytuff, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_JIGGLYPUFF
#if P_FAMILY_ZUBAT
    [SPECIES_ZUBAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zubat, gDummySpriteAffineAnimTable},
    [SPECIES_GOLBAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Golbat, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_CROBAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Crobat, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ZUBAT
#if P_FAMILY_ODDISH
    [SPECIES_ODDISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Oddish, gDummySpriteAffineAnimTable},
    [SPECIES_GLOOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gloom, gDummySpriteAffineAnimTable},
    [SPECIES_VILEPLUME]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vileplume, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_BELLOSSOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bellossom, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ODDISH
#if P_FAMILY_PARAS
    [SPECIES_PARAS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Paras, gDummySpriteAffineAnimTable},
    [SPECIES_PARASECT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Parasect, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PARAS
#if P_FAMILY_VENONAT
    [SPECIES_VENONAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Venonat, gDummySpriteAffineAnimTable},
    [SPECIES_VENOMOTH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Venomoth, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VENONAT
#if P_FAMILY_DIGLETT
    [SPECIES_DIGLETT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Diglett, gDummySpriteAffineAnimTable},
    [SPECIES_DUGTRIO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dugtrio, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DIGLETT
#if P_FAMILY_MEOWTH
    [SPECIES_MEOWTH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Meowth, gDummySpriteAffineAnimTable},
    [SPECIES_PERSIAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Persian, gDummySpriteAffineAnimTable},
#if P_GALARIAN_FORMS
    [SPECIES_PERRSERKER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Perrserker, gDummySpriteAffineAnimTable},
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MEOWTH
#if P_FAMILY_PSYDUCK
    [SPECIES_PSYDUCK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Psyduck, gDummySpriteAffineAnimTable},
    [SPECIES_GOLDUCK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Golduck, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PSYDUCK
#if P_FAMILY_MANKEY
    [SPECIES_MANKEY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mankey, gDummySpriteAffineAnimTable},
    [SPECIES_PRIMEAPE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Primeape, gDummySpriteAffineAnimTable},
#if P_GEN_9_CROSS_EVOS
    [SPECIES_ANNIHILAPE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Annihilape, gDummySpriteAffineAnimTable},
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_MANKEY
#if P_FAMILY_GROWLITHE
    [SPECIES_GROWLITHE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Growlithe, gDummySpriteAffineAnimTable},
    [SPECIES_ARCANINE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Arcanine, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GROWLITHE
#if P_FAMILY_POLIWAG
    [SPECIES_POLIWAG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Poliwag, gDummySpriteAffineAnimTable},
    [SPECIES_POLIWHIRL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Poliwhirl, gDummySpriteAffineAnimTable},
    [SPECIES_POLIWRATH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Poliwrath, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_POLITOED]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Politoed, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_POLIWAG
#if P_FAMILY_ABRA
    [SPECIES_ABRA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Abra, gDummySpriteAffineAnimTable},
    [SPECIES_KADABRA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kadabra, gDummySpriteAffineAnimTable},
    [SPECIES_ALAKAZAM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Alakazam, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ABRA
#if P_FAMILY_MACHOP
    [SPECIES_MACHOP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Machop, gDummySpriteAffineAnimTable},
    [SPECIES_MACHOKE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Machoke, gDummySpriteAffineAnimTable},
    [SPECIES_MACHAMP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Machamp, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MACHOP
#if P_FAMILY_BELLSPROUT
    [SPECIES_BELLSPROUT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bellsprout, gDummySpriteAffineAnimTable},
    [SPECIES_WEEPINBELL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Weepinbell, gDummySpriteAffineAnimTable},
    [SPECIES_VICTREEBEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Victreebel, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BELLSPROUT
#if P_FAMILY_TENTACOOL
    [SPECIES_TENTACOOL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tentacool, gDummySpriteAffineAnimTable},
    [SPECIES_TENTACRUEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tentacruel, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TENTACOOL
#if P_FAMILY_GEODUDE
    [SPECIES_GEODUDE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Geodude, gDummySpriteAffineAnimTable},
    [SPECIES_GRAVELER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Graveler, gDummySpriteAffineAnimTable},
    [SPECIES_GOLEM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Golem, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GEODUDE
#if P_FAMILY_PONYTA
    [SPECIES_PONYTA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ponyta, gDummySpriteAffineAnimTable},
    [SPECIES_RAPIDASH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rapidash, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PONYTA
#if P_FAMILY_SLOWPOKE
    [SPECIES_SLOWPOKE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Slowpoke, gDummySpriteAffineAnimTable},
    [SPECIES_SLOWBRO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Slowbro, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SLOWKING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Slowking, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS

#if P_GALARIAN_FORMS
    [SPECIES_SLOWPOKE_GALARIAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Slowpoke_galarian, gDummySpriteAffineAnimTable},
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_SLOWPOKE
#if P_FAMILY_MAGNEMITE
    [SPECIES_MAGNEMITE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magnemite, gDummySpriteAffineAnimTable},
    [SPECIES_MAGNETON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magneton, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGNEZONE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magnezone, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGNEMITE
#if P_FAMILY_FARFETCHD
    [SPECIES_FARFETCHD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Farfetchd, gDummySpriteAffineAnimTable},
#if P_GALARIAN_FORMS
    [SPECIES_SIRFETCHD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sirfetchd, gDummySpriteAffineAnimTable},
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_FARFETCHD
#if P_FAMILY_DODUO
    [SPECIES_DODUO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Doduo, gDummySpriteAffineAnimTable},
    [SPECIES_DODRIO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dodrio, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DODUO
#if P_FAMILY_SEEL
    [SPECIES_SEEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Seel, gDummySpriteAffineAnimTable},
    [SPECIES_DEWGONG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dewgong, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SEEL
#if P_FAMILY_GRIMER
    [SPECIES_GRIMER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Grimer, gDummySpriteAffineAnimTable},
    [SPECIES_MUK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Muk, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GRIMER
#if P_FAMILY_SHELLDER
    [SPECIES_SHELLDER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shellder, gDummySpriteAffineAnimTable},
    [SPECIES_CLOYSTER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cloyster, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHELLDER
#if P_FAMILY_GASTLY
    [SPECIES_GASTLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gastly, gDummySpriteAffineAnimTable},
    [SPECIES_HAUNTER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Haunter, gDummySpriteAffineAnimTable},
    [SPECIES_GENGAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gengar, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GASTLY
#if P_FAMILY_ONIX
    [SPECIES_ONIX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Onix, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_STEELIX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Steelix, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_ONIX
#if P_FAMILY_DROWZEE
    [SPECIES_DROWZEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drowzee, gDummySpriteAffineAnimTable},
    [SPECIES_HYPNO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hypno, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DROWZEE
#if P_FAMILY_KRABBY
    [SPECIES_KRABBY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Krabby, gDummySpriteAffineAnimTable},
    [SPECIES_KINGLER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kingler, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KRABBY
#if P_FAMILY_VOLTORB
    [SPECIES_VOLTORB]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Voltorb, gDummySpriteAffineAnimTable},
    [SPECIES_ELECTRODE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Electrode, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VOLTORB
#if P_FAMILY_EXEGGCUTE
    [SPECIES_EXEGGCUTE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Exeggcute, gDummySpriteAffineAnimTable},
    [SPECIES_EXEGGUTOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Exeggutor, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_EXEGGCUTE
#if P_FAMILY_CUBONE
    [SPECIES_CUBONE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cubone, gDummySpriteAffineAnimTable},
    [SPECIES_MAROWAK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Marowak, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CUBONE
#if P_FAMILY_HITMONS
#if P_GEN_2_CROSS_EVOS
    [SPECIES_TYROGUE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tyrogue, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
    [SPECIES_HITMONLEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hitmonlee, gDummySpriteAffineAnimTable},
    [SPECIES_HITMONCHAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hitmonchan, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_HITMONTOP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hitmontop, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HITMONS
#if P_FAMILY_LICKITUNG
    [SPECIES_LICKITUNG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lickitung, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_LICKILICKY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lickilicky, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_LICKITUNG
#if P_FAMILY_KOFFING
    [SPECIES_KOFFING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Koffing, gDummySpriteAffineAnimTable},
    [SPECIES_WEEZING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Weezing, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KOFFING
#if P_FAMILY_RHYHORN
    [SPECIES_RHYHORN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rhyhorn, gDummySpriteAffineAnimTable},
    [SPECIES_RHYDON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rhydon, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_RHYPERIOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rhyperior, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RHYHORN
#if P_FAMILY_CHANSEY
#if P_GEN_4_CROSS_EVOS
    [SPECIES_HAPPINY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Happiny, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
    [SPECIES_CHANSEY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chansey, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_BLISSEY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Blissey, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_CHANSEY
#if P_FAMILY_TANGELA
    [SPECIES_TANGELA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tangela, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_TANGROWTH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tangrowth, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TANGELA
#if P_FAMILY_KANGASKHAN
    [SPECIES_KANGASKHAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kangaskhan, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KANGASKHAN
#if P_FAMILY_HORSEA
    [SPECIES_HORSEA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Horsea, gDummySpriteAffineAnimTable},
    [SPECIES_SEADRA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Seadra, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_KINGDRA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kingdra, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_HORSEA
#if P_FAMILY_GOLDEEN
    [SPECIES_GOLDEEN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Goldeen, gDummySpriteAffineAnimTable},
    [SPECIES_SEAKING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Seaking, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GOLDEEN
#if P_FAMILY_STARYU
    [SPECIES_STARYU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Staryu, gDummySpriteAffineAnimTable},
    [SPECIES_STARMIE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Starmie, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_STARYU
#if P_FAMILY_MR_MIME
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MIME_JR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mime_jr, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
    [SPECIES_MR_MIME]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mr_mime, gDummySpriteAffineAnimTable},
#if P_GALARIAN_FORMS
    [SPECIES_MR_RIME]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mr_rime, gDummySpriteAffineAnimTable},
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_MR_MIME
#if P_FAMILY_SCYTHER
    [SPECIES_SCYTHER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Scyther, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SCIZOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Scizor, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#if P_GEN_8_CROSS_EVOS
    [SPECIES_KLEAVOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kleavor, gDummySpriteAffineAnimTable},
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_SCYTHER
#if P_FAMILY_JYNX
#if P_GEN_2_CROSS_EVOS
    [SPECIES_SMOOCHUM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Smoochum, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
    [SPECIES_JYNX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Jynx, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_JYNX
#if P_FAMILY_ELECTABUZZ
#if P_GEN_2_CROSS_EVOS
    [SPECIES_ELEKID]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Elekid, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
    [SPECIES_ELECTABUZZ]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Electabuzz, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_ELECTIVIRE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Electivire, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ELECTABUZZ
#if P_FAMILY_MAGMAR
#if P_GEN_2_CROSS_EVOS
    [SPECIES_MAGBY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magby, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
    [SPECIES_MAGMAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magmar, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAGMORTAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magmortar, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_MAGMAR
#if P_FAMILY_PINSIR
    [SPECIES_PINSIR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pinsir, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PINSIR
#if P_FAMILY_TAUROS
    [SPECIES_TAUROS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tauros, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TAUROS
#if P_FAMILY_MAGIKARP
    [SPECIES_MAGIKARP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magikarp, gDummySpriteAffineAnimTable},
    [SPECIES_GYARADOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gyarados, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MAGIKARP
#if P_FAMILY_LAPRAS
    [SPECIES_LAPRAS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lapras, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LAPRAS
#if P_FAMILY_DITTO
    [SPECIES_DITTO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ditto, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DITTO
#if P_FAMILY_EEVEE
    [SPECIES_EEVEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Eevee, gDummySpriteAffineAnimTable},
    [SPECIES_VAPOREON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vaporeon, gDummySpriteAffineAnimTable},
    [SPECIES_JOLTEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Jolteon, gDummySpriteAffineAnimTable},
    [SPECIES_FLAREON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Flareon, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_ESPEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Espeon, gDummySpriteAffineAnimTable},
    [SPECIES_UMBREON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Umbreon, gDummySpriteAffineAnimTable},
#endif //P_GEN_2_CROSS_EVOS
#if P_GEN_4_CROSS_EVOS
    [SPECIES_LEAFEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Leafeon, gDummySpriteAffineAnimTable},
    [SPECIES_GLACEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Glaceon, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#if P_GEN_6_CROSS_EVOS
    [SPECIES_SYLVEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sylveon, gDummySpriteAffineAnimTable},
#endif //P_GEN_6_CROSS_EVOS
#endif //P_FAMILY_EEVEE
#if P_FAMILY_PORYGON
    [SPECIES_PORYGON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Porygon, gDummySpriteAffineAnimTable},
#if P_GEN_2_CROSS_EVOS
    [SPECIES_PORYGON2]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Porygon2, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_PORYGON_Z]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Porygon_z, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_GEN_2_CROSS_EVOS
#endif //P_FAMILY_PORYGON
#if P_FAMILY_OMANYTE
    [SPECIES_OMANYTE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Omanyte, gDummySpriteAffineAnimTable},
    [SPECIES_OMASTAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Omastar, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_OMANYTE
#if P_FAMILY_KABUTO
    [SPECIES_KABUTO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kabuto, gDummySpriteAffineAnimTable},
    [SPECIES_KABUTOPS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kabutops, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KABUTO
#if P_FAMILY_AERODACTYL
    [SPECIES_AERODACTYL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Aerodactyl, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_AERODACTYL
#if P_FAMILY_SNORLAX
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MUNCHLAX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Munchlax, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
    [SPECIES_SNORLAX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Snorlax, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SNORLAX
#if P_FAMILY_ARTICUNO
    [SPECIES_ARTICUNO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Articuno, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ARTICUNO
#if P_FAMILY_ZAPDOS
    [SPECIES_ZAPDOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zapdos, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZAPDOS
#if P_FAMILY_MOLTRES
    [SPECIES_MOLTRES]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Moltres, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MOLTRES
#if P_FAMILY_DRATINI
    [SPECIES_DRATINI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dratini, gDummySpriteAffineAnimTable},
    [SPECIES_DRAGONAIR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dragonair, gDummySpriteAffineAnimTable},
    [SPECIES_DRAGONITE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dragonite, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DRATINI
#if P_FAMILY_MEWTWO
    [SPECIES_MEWTWO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mewtwo, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MEWTWO
#if P_FAMILY_MEW
    [SPECIES_MEW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mew, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MEW
#if P_FAMILY_CHIKORITA
    [SPECIES_CHIKORITA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chikorita, gDummySpriteAffineAnimTable},
    [SPECIES_BAYLEEF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bayleef, gDummySpriteAffineAnimTable},
    [SPECIES_MEGANIUM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Meganium, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHIKORITA
#if P_FAMILY_CYNDAQUIL
    [SPECIES_CYNDAQUIL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cyndaquil, gDummySpriteAffineAnimTable},
    [SPECIES_QUILAVA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Quilava, gDummySpriteAffineAnimTable},
    [SPECIES_TYPHLOSION]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Typhlosion, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CYNDAQUIL
#if P_FAMILY_TOTODILE
    [SPECIES_TOTODILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Totodile, gDummySpriteAffineAnimTable},
    [SPECIES_CROCONAW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Croconaw, gDummySpriteAffineAnimTable},
    [SPECIES_FERALIGATR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Feraligatr, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TOTODILE
#if P_FAMILY_SENTRET
    [SPECIES_SENTRET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sentret, gDummySpriteAffineAnimTable},
    [SPECIES_FURRET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Furret, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SENTRET
#if P_FAMILY_HOOTHOOT
    [SPECIES_HOOTHOOT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hoothoot, gDummySpriteAffineAnimTable},
    [SPECIES_NOCTOWL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Noctowl, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HOOTHOOT
#if P_FAMILY_LEDYBA
    [SPECIES_LEDYBA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ledyba, gDummySpriteAffineAnimTable},
    [SPECIES_LEDIAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ledian, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LEDYBA
#if P_FAMILY_SPINARAK
    [SPECIES_SPINARAK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spinarak, gDummySpriteAffineAnimTable},
    [SPECIES_ARIADOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ariados, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SPINARAK
#if P_FAMILY_CHINCHOU
    [SPECIES_CHINCHOU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chinchou, gDummySpriteAffineAnimTable},
    [SPECIES_LANTURN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lanturn, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHINCHOU
#if P_FAMILY_TOGEPI
    [SPECIES_TOGEPI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Togepi, gDummySpriteAffineAnimTable},
    [SPECIES_TOGETIC]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Togetic, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_TOGEKISS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Togekiss, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_TOGEPI
#if P_FAMILY_NATU
    [SPECIES_NATU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Natu, gDummySpriteAffineAnimTable},
    [SPECIES_XATU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Xatu, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_NATU
#if P_FAMILY_MAREEP
    [SPECIES_MAREEP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mareep, gDummySpriteAffineAnimTable},
    [SPECIES_FLAAFFY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Flaaffy, gDummySpriteAffineAnimTable},
    [SPECIES_AMPHAROS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ampharos, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MAREEP
#if P_FAMILY_MARILL
#if P_GEN_3_CROSS_EVOS
    [SPECIES_AZURILL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Azurill, gDummySpriteAffineAnimTable},
#endif //P_GEN_3_CROSS_EVOS
    [SPECIES_MARILL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Marill, gDummySpriteAffineAnimTable},
    [SPECIES_AZUMARILL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Azumarill, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MARILL
#if P_FAMILY_SUDOWOODO
    [SPECIES_BONSLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bonsly, gDummySpriteAffineAnimTable},
    [SPECIES_SUDOWOODO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sudowoodo, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SUDOWOODO
#if P_FAMILY_HOPPIP
    [SPECIES_HOPPIP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hoppip, gDummySpriteAffineAnimTable},
    [SPECIES_SKIPLOOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Skiploom, gDummySpriteAffineAnimTable},
    [SPECIES_JUMPLUFF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Jumpluff, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HOPPIP
#if P_FAMILY_AIPOM
    [SPECIES_AIPOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Aipom, gDummySpriteAffineAnimTable},
    [SPECIES_AMBIPOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ambipom, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_AIPOM
#if P_FAMILY_SUNKERN
    [SPECIES_SUNKERN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sunkern, gDummySpriteAffineAnimTable},
    [SPECIES_SUNFLORA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sunflora, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SUNKERN
#if P_FAMILY_YANMA
    [SPECIES_YANMA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Yanma, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_YANMEGA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Yanmega, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_YANMA
#if P_FAMILY_WOOPER
    [SPECIES_WOOPER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wooper, gDummySpriteAffineAnimTable},
    [SPECIES_QUAGSIRE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Quagsire, gDummySpriteAffineAnimTable},
#if P_PALDEAN_FORMS
    [SPECIES_CLODSIRE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Clodsire, gDummySpriteAffineAnimTable},
#endif //P_PALDEAN_FORMS
#endif //P_FAMILY_WOOPER
#if P_FAMILY_MURKROW
    [SPECIES_MURKROW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Murkrow, gDummySpriteAffineAnimTable},
    [SPECIES_HONCHKROW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Honchkrow, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MURKROW
#if P_FAMILY_MISDREAVUS
    [SPECIES_MISDREAVUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Misdreavus, gDummySpriteAffineAnimTable},
    [SPECIES_MISMAGIUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mismagius, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MISDREAVUS
#if P_FAMILY_UNOWN
    [SPECIES_UNOWN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Unown, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_UNOWN
#if P_FAMILY_WOBBUFFET
#if P_GEN_3_CROSS_EVOS
    [SPECIES_WYNAUT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wynaut, gDummySpriteAffineAnimTable},
#endif //P_GEN_3_CROSS_EVOS
    [SPECIES_WOBBUFFET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wobbuffet, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WOBBUFFET
#if P_FAMILY_GIRAFARIG
    [SPECIES_GIRAFARIG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Girafarig, gDummySpriteAffineAnimTable},
#if P_GEN_9_CROSS_EVOS
    [SPECIES_FARIGIRAF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Farigiraf, gDummySpriteAffineAnimTable},
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_GIRAFARIG
#if P_FAMILY_PINECO
    [SPECIES_PINECO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pineco, gDummySpriteAffineAnimTable},
    [SPECIES_FORRETRESS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Forretress, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PINECO
#if P_FAMILY_DUNSPARCE
    [SPECIES_DUNSPARCE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dunsparce, gDummySpriteAffineAnimTable},
#if P_GEN_9_CROSS_EVOS
    [SPECIES_DUDUNSPARCE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dudunsparce, gDummySpriteAffineAnimTable},
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_DUNSPARCE
#if P_FAMILY_GLIGAR
    [SPECIES_GLIGAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gligar, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_GLISCOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gliscor, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_GLIGAR
#if P_FAMILY_SNUBBULL
    [SPECIES_SNUBBULL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Snubbull, gDummySpriteAffineAnimTable},
    [SPECIES_GRANBULL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Granbull, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SNUBBULL
#if P_FAMILY_QWILFISH
    [SPECIES_QWILFISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Qwilfish, gDummySpriteAffineAnimTable},
#if P_HISUIAN_FORMS
    [SPECIES_OVERQWIL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Overqwil, gDummySpriteAffineAnimTable},
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_QWILFISH
#if P_FAMILY_SHUCKLE
    [SPECIES_SHUCKLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shuckle, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHUCKLE
#if P_FAMILY_HERACROSS
    [SPECIES_HERACROSS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Heracross, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HERACROSS
#if P_FAMILY_SNEASEL
    [SPECIES_SNEASEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sneasel, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_WEAVILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Weavile, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#if P_HISUIAN_FORMS
    [SPECIES_SNEASLER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sneasler, gDummySpriteAffineAnimTable},
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_SNEASEL
#if P_FAMILY_TEDDIURSA
    [SPECIES_TEDDIURSA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Teddiursa, gDummySpriteAffineAnimTable},
    [SPECIES_URSARING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ursaring, gDummySpriteAffineAnimTable},
#if P_GEN_9_CROSS_EVOS
    [SPECIES_URSALUNA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ursaluna, gDummySpriteAffineAnimTable},
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_TEDDIURSA
#if P_FAMILY_SLUGMA
    [SPECIES_SLUGMA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Slugma, gDummySpriteAffineAnimTable},
    [SPECIES_MAGCARGO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magcargo, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SLUGMA
#if P_FAMILY_SWINUB
    [SPECIES_SWINUB]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swinub, gDummySpriteAffineAnimTable},
    [SPECIES_PILOSWINE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Piloswine, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MAMOSWINE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mamoswine, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SWINUB
#if P_FAMILY_CORSOLA
    [SPECIES_CORSOLA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Corsola, gDummySpriteAffineAnimTable},
#if P_GALARIAN_FORMS
    [SPECIES_CURSOLA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cursola, gDummySpriteAffineAnimTable},
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_CORSOLA
#if P_FAMILY_REMORAID
    [SPECIES_REMORAID]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Remoraid, gDummySpriteAffineAnimTable},
    [SPECIES_OCTILLERY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Octillery, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_REMORAID
#if P_FAMILY_DELIBIRD
    [SPECIES_DELIBIRD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Delibird, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DELIBIRD
#if P_FAMILY_MANTINE
#if P_GEN_4_CROSS_EVOS
    [SPECIES_MANTYKE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mantyke, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
    [SPECIES_MANTINE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mantine, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MANTINE
#if P_FAMILY_SKARMORY
    [SPECIES_SKARMORY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Skarmory, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SKARMORY
#if P_FAMILY_HOUNDOUR
    [SPECIES_HOUNDOUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Houndour, gDummySpriteAffineAnimTable},
    [SPECIES_HOUNDOOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Houndoom, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HOUNDOUR
#if P_FAMILY_PHANPY
    [SPECIES_PHANPY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Phanpy, gDummySpriteAffineAnimTable},
    [SPECIES_DONPHAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Donphan, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PHANPY
#if P_FAMILY_STANTLER
    [SPECIES_STANTLER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Stantler, gDummySpriteAffineAnimTable},
#if P_GEN_8_CROSS_EVOS
    [SPECIES_WYRDEER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wyrdeer, gDummySpriteAffineAnimTable},
#endif //P_GEN_8_CROSS_EVOS
#endif //P_FAMILY_STANTLER
#if P_FAMILY_SMEARGLE
    [SPECIES_SMEARGLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Smeargle, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SMEARGLE
#if P_FAMILY_MILTANK
    [SPECIES_MILTANK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Miltank, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MILTANK
#if P_FAMILY_RAIKOU
    [SPECIES_RAIKOU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Raikou, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_RAIKOU
#if P_FAMILY_ENTEI
    [SPECIES_ENTEI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Entei, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ENTEI
#if P_FAMILY_SUICUNE
    [SPECIES_SUICUNE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Suicune, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SUICUNE
#if P_FAMILY_LARVITAR
    [SPECIES_LARVITAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Larvitar, gDummySpriteAffineAnimTable},
    [SPECIES_PUPITAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pupitar, gDummySpriteAffineAnimTable},
    [SPECIES_TYRANITAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tyranitar, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LARVITAR
#if P_FAMILY_LUGIA
    [SPECIES_LUGIA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lugia, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LUGIA
#if P_FAMILY_HO_OH
    [SPECIES_HO_OH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ho_oh, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HO_OH
#if P_FAMILY_CELEBI
    [SPECIES_CELEBI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Celebi, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CELEBI
#if P_FAMILY_TREECKO
    [SPECIES_TREECKO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Treecko, gDummySpriteAffineAnimTable},
    [SPECIES_GROVYLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Grovyle, gDummySpriteAffineAnimTable},
    [SPECIES_SCEPTILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sceptile, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TREECKO
#if P_FAMILY_TORCHIC
    [SPECIES_TORCHIC]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Torchic, gDummySpriteAffineAnimTable},
    [SPECIES_COMBUSKEN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Combusken, gDummySpriteAffineAnimTable},
    [SPECIES_BLAZIKEN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Blaziken, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TORCHIC
#if P_FAMILY_MUDKIP
    [SPECIES_MUDKIP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mudkip, gDummySpriteAffineAnimTable},
    [SPECIES_MARSHTOMP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Marshtomp, gDummySpriteAffineAnimTable},
    [SPECIES_SWAMPERT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swampert, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MUDKIP
#if P_FAMILY_POOCHYENA
    [SPECIES_POOCHYENA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Poochyena, gDummySpriteAffineAnimTable},
    [SPECIES_MIGHTYENA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mightyena, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_POOCHYENA
#if P_FAMILY_ZIGZAGOON
    [SPECIES_ZIGZAGOON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zigzagoon, gDummySpriteAffineAnimTable},
    [SPECIES_LINOONE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Linoone, gDummySpriteAffineAnimTable},
#if P_GALARIAN_FORMS
    [SPECIES_OBSTAGOON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Obstagoon, gDummySpriteAffineAnimTable},
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_ZIGZAGOON
#if P_FAMILY_WURMPLE
    [SPECIES_WURMPLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wurmple, gDummySpriteAffineAnimTable},
    [SPECIES_SILCOON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Silcoon, gDummySpriteAffineAnimTable},
    [SPECIES_BEAUTIFLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Beautifly, gDummySpriteAffineAnimTable},
    [SPECIES_CASCOON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cascoon, gDummySpriteAffineAnimTable},
    [SPECIES_DUSTOX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dustox, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WURMPLE
#if P_FAMILY_LOTAD
    [SPECIES_LOTAD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lotad, gDummySpriteAffineAnimTable},
    [SPECIES_LOMBRE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lombre, gDummySpriteAffineAnimTable},
    [SPECIES_LUDICOLO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ludicolo, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LOTAD
#if P_FAMILY_SEEDOT
    [SPECIES_SEEDOT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Seedot, gDummySpriteAffineAnimTable},
    [SPECIES_NUZLEAF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nuzleaf, gDummySpriteAffineAnimTable},
    [SPECIES_SHIFTRY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shiftry, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SEEDOT
#if P_FAMILY_TAILLOW
    [SPECIES_TAILLOW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Taillow, gDummySpriteAffineAnimTable},
    [SPECIES_SWELLOW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swellow, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TAILLOW
#if P_FAMILY_WINGULL
    [SPECIES_WINGULL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wingull, gDummySpriteAffineAnimTable},
    [SPECIES_PELIPPER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pelipper, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WINGULL
#if P_FAMILY_RALTS
    [SPECIES_RALTS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ralts, gDummySpriteAffineAnimTable},
    [SPECIES_KIRLIA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kirlia, gDummySpriteAffineAnimTable},
    [SPECIES_GARDEVOIR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gardevoir, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_GALLADE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gallade, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_RALTS
#if P_FAMILY_SURSKIT
    [SPECIES_SURSKIT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Surskit, gDummySpriteAffineAnimTable},
    [SPECIES_MASQUERAIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Masquerain, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SURSKIT
#if P_FAMILY_SHROOMISH
    [SPECIES_SHROOMISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shroomish, gDummySpriteAffineAnimTable},
    [SPECIES_BRELOOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Breloom, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHROOMISH
#if P_FAMILY_SLAKOTH
    [SPECIES_SLAKOTH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Slakoth, gDummySpriteAffineAnimTable},
    [SPECIES_VIGOROTH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vigoroth, gDummySpriteAffineAnimTable},
    [SPECIES_SLAKING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Slaking, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SLAKOTH
#if P_FAMILY_NINCADA
    [SPECIES_NINCADA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nincada, gDummySpriteAffineAnimTable},
    [SPECIES_NINJASK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ninjask, gDummySpriteAffineAnimTable},
    [SPECIES_SHEDINJA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shedinja, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_NINCADA
#if P_FAMILY_WHISMUR
    [SPECIES_WHISMUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Whismur, gDummySpriteAffineAnimTable},
    [SPECIES_LOUDRED]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Loudred, gDummySpriteAffineAnimTable},
    [SPECIES_EXPLOUD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Exploud, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WHISMUR
#if P_FAMILY_MAKUHITA
    [SPECIES_MAKUHITA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Makuhita, gDummySpriteAffineAnimTable},
    [SPECIES_HARIYAMA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hariyama, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MAKUHITA
#if P_FAMILY_NOSEPASS
    [SPECIES_NOSEPASS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nosepass, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_PROBOPASS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Probopass, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_NOSEPASS
#if P_FAMILY_SKITTY
    [SPECIES_SKITTY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Skitty, gDummySpriteAffineAnimTable},
    [SPECIES_DELCATTY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Delcatty, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SKITTY
#if P_FAMILY_SABLEYE
    [SPECIES_SABLEYE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sableye, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SABLEYE
#if P_FAMILY_MAWILE
    [SPECIES_MAWILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mawile, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MAWILE
#if P_FAMILY_ARON
    [SPECIES_ARON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Aron, gDummySpriteAffineAnimTable},
    [SPECIES_LAIRON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lairon, gDummySpriteAffineAnimTable},
    [SPECIES_AGGRON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Aggron, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ARON
#if P_FAMILY_MEDITITE
    [SPECIES_MEDITITE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Meditite, gDummySpriteAffineAnimTable},
    [SPECIES_MEDICHAM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Medicham, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MEDITITE
#if P_FAMILY_ELECTRIKE
    [SPECIES_ELECTRIKE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Electrike, gDummySpriteAffineAnimTable},
    [SPECIES_MANECTRIC]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Manectric, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ELECTRIKE
#if P_FAMILY_PLUSLE
    [SPECIES_PLUSLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Plusle, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PLUSLE
#if P_FAMILY_MINUN
    [SPECIES_MINUN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Minun, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MINUN
#if P_FAMILY_VOLBEAT_ILLUMISE
    [SPECIES_VOLBEAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Volbeat, gDummySpriteAffineAnimTable},
    [SPECIES_ILLUMISE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Illumise, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VOLBEAT_ILLUMISE
#if P_FAMILY_ROSELIA
#if P_GEN_4_CROSS_EVOS
    [SPECIES_BUDEW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Budew, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
    [SPECIES_ROSELIA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Roselia, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_ROSERADE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Roserade, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_ROSELIA
#if P_FAMILY_GULPIN
    [SPECIES_GULPIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gulpin, gDummySpriteAffineAnimTable},
    [SPECIES_SWALOT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swalot, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GULPIN
#if P_FAMILY_CARVANHA
    [SPECIES_CARVANHA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Carvanha, gDummySpriteAffineAnimTable},
    [SPECIES_SHARPEDO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sharpedo, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CARVANHA
#if P_FAMILY_WAILMER
    [SPECIES_WAILMER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wailmer, gDummySpriteAffineAnimTable},
    [SPECIES_WAILORD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wailord, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WAILMER
#if P_FAMILY_NUMEL
    [SPECIES_NUMEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Numel, gDummySpriteAffineAnimTable},
    [SPECIES_CAMERUPT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Camerupt, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_NUMEL
#if P_FAMILY_TORKOAL
    [SPECIES_TORKOAL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Torkoal, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TORKOAL
#if P_FAMILY_SPOINK
    [SPECIES_SPOINK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spoink, gDummySpriteAffineAnimTable},
    [SPECIES_GRUMPIG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Grumpig, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SPOINK
#if P_FAMILY_SPINDA
    [SPECIES_SPINDA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spinda, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SPINDA
#if P_FAMILY_TRAPINCH
    [SPECIES_TRAPINCH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Trapinch, gDummySpriteAffineAnimTable},
    [SPECIES_VIBRAVA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vibrava, gDummySpriteAffineAnimTable},
    [SPECIES_FLYGON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Flygon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TRAPINCH
#if P_FAMILY_CACNEA
    [SPECIES_CACNEA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cacnea, gDummySpriteAffineAnimTable},
    [SPECIES_CACTURNE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cacturne, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CACNEA
#if P_FAMILY_SWABLU
    [SPECIES_SWABLU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swablu, gDummySpriteAffineAnimTable},
    [SPECIES_ALTARIA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Altaria, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SWABLU
#if P_FAMILY_ZANGOOSE
    [SPECIES_ZANGOOSE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zangoose, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZANGOOSE
#if P_FAMILY_SEVIPER
    [SPECIES_SEVIPER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Seviper, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SEVIPER
#if P_FAMILY_LUNATONE
    [SPECIES_LUNATONE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lunatone, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LUNATONE
#if P_FAMILY_SOLROCK
    [SPECIES_SOLROCK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Solrock, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SOLROCK
#if P_FAMILY_BARBOACH
    [SPECIES_BARBOACH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Barboach, gDummySpriteAffineAnimTable},
    [SPECIES_WHISCASH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Whiscash, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BARBOACH
#if P_FAMILY_CORPHISH
    [SPECIES_CORPHISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Corphish, gDummySpriteAffineAnimTable},
    [SPECIES_CRAWDAUNT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Crawdaunt, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CORPHISH
#if P_FAMILY_BALTOY
    [SPECIES_BALTOY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Baltoy, gDummySpriteAffineAnimTable},
    [SPECIES_CLAYDOL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Claydol, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BALTOY
#if P_FAMILY_LILEEP
    [SPECIES_LILEEP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lileep, gDummySpriteAffineAnimTable},
    [SPECIES_CRADILY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cradily, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LILEEP
#if P_FAMILY_ANORITH
    [SPECIES_ANORITH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Anorith, gDummySpriteAffineAnimTable},
    [SPECIES_ARMALDO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Armaldo, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ANORITH
#if P_FAMILY_FEEBAS
    [SPECIES_FEEBAS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Feebas, gDummySpriteAffineAnimTable},
    [SPECIES_MILOTIC]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Milotic, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FEEBAS
#if P_FAMILY_CASTFORM
    [SPECIES_CASTFORM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Castform, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CASTFORM
#if P_FAMILY_KECLEON
    [SPECIES_KECLEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kecleon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KECLEON
#if P_FAMILY_SHUPPET
    [SPECIES_SHUPPET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shuppet, gDummySpriteAffineAnimTable},
    [SPECIES_BANETTE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Banette, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHUPPET
#if P_FAMILY_DUSKULL
    [SPECIES_DUSKULL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Duskull, gDummySpriteAffineAnimTable},
    [SPECIES_DUSCLOPS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dusclops, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_DUSKNOIR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dusknoir, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_DUSKULL
#if P_FAMILY_TROPIUS
    [SPECIES_TROPIUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tropius, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TROPIUS
#if P_FAMILY_CHIMECHO
#if P_GEN_4_CROSS_EVOS
    [SPECIES_CHINGLING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chingling, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
    [SPECIES_CHIMECHO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chimecho, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHIMECHO
#if P_FAMILY_ABSOL
    [SPECIES_ABSOL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Absol, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ABSOL
#if P_FAMILY_SNORUNT
    [SPECIES_SNORUNT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Snorunt, gDummySpriteAffineAnimTable},
    [SPECIES_GLALIE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Glalie, gDummySpriteAffineAnimTable},
#if P_GEN_4_CROSS_EVOS
    [SPECIES_FROSLASS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Froslass, gDummySpriteAffineAnimTable},
#endif //P_GEN_4_CROSS_EVOS
#endif //P_FAMILY_SNORUNT
#if P_FAMILY_SPHEAL
    [SPECIES_SPHEAL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spheal, gDummySpriteAffineAnimTable},
    [SPECIES_SEALEO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sealeo, gDummySpriteAffineAnimTable},
    [SPECIES_WALREIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Walrein, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SPHEAL
#if P_FAMILY_CLAMPERL
    [SPECIES_CLAMPERL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Clamperl, gDummySpriteAffineAnimTable},
    [SPECIES_HUNTAIL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Huntail, gDummySpriteAffineAnimTable},
    [SPECIES_GOREBYSS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gorebyss, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CLAMPERL
#if P_FAMILY_RELICANTH
    [SPECIES_RELICANTH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Relicanth, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_RELICANTH
#if P_FAMILY_LUVDISC
    [SPECIES_LUVDISC]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Luvdisc, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LUVDISC
#if P_FAMILY_BAGON
    [SPECIES_BAGON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bagon, gDummySpriteAffineAnimTable},
    [SPECIES_SHELGON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shelgon, gDummySpriteAffineAnimTable},
    [SPECIES_SALAMENCE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Salamence, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BAGON
#if P_FAMILY_BELDUM
    [SPECIES_BELDUM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Beldum, gDummySpriteAffineAnimTable},
    [SPECIES_METANG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Metang, gDummySpriteAffineAnimTable},
    [SPECIES_METAGROSS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Metagross, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BELDUM
#if P_FAMILY_REGIROCK
    [SPECIES_REGIROCK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Regirock, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_REGIROCK
#if P_FAMILY_REGICE
    [SPECIES_REGICE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Regice, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_REGICE
#if P_FAMILY_REGISTEEL
    [SPECIES_REGISTEEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Registeel, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_REGISTEEL
#if P_FAMILY_LATIAS
    [SPECIES_LATIAS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Latias, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LATIAS
#if P_FAMILY_LATIOS
    [SPECIES_LATIOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Latios, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LATIOS
#if P_FAMILY_KYOGRE
    [SPECIES_KYOGRE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kyogre, gDummySpriteAffineAnimTable},
#if P_PRIMAL_REVERSIONS
    [SPECIES_KYOGRE_PRIMAL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kyogre_primal, gDummySpriteAffineAnimTable},
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_KYOGRE
#if P_FAMILY_GROUDON
    [SPECIES_GROUDON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Groudon, gDummySpriteAffineAnimTable},
#if P_PRIMAL_REVERSIONS
    [SPECIES_GROUDON_PRIMAL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Groudon_primal, gDummySpriteAffineAnimTable},
#endif //P_PRIMAL_REVERSIONS
#endif //P_FAMILY_GROUDON
#if P_FAMILY_RAYQUAZA
    [SPECIES_RAYQUAZA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rayquaza, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_RAYQUAZA
#if P_FAMILY_JIRACHI
    [SPECIES_JIRACHI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Jirachi, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_JIRACHI
#if P_FAMILY_DEOXYS
    [SPECIES_DEOXYS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Deoxys, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DEOXYS
#if P_FAMILY_TURTWIG
    [SPECIES_TURTWIG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Turtwig, gDummySpriteAffineAnimTable},
    [SPECIES_GROTLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Grotle, gDummySpriteAffineAnimTable},
    [SPECIES_TORTERRA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Torterra, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TURTWIG
#if P_FAMILY_CHIMCHAR
    [SPECIES_CHIMCHAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chimchar, gDummySpriteAffineAnimTable},
    [SPECIES_MONFERNO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Monferno, gDummySpriteAffineAnimTable},
    [SPECIES_INFERNAPE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Infernape, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHIMCHAR
#if P_FAMILY_PIPLUP
    [SPECIES_PIPLUP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Piplup, gDummySpriteAffineAnimTable},
    [SPECIES_PRINPLUP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Prinplup, gDummySpriteAffineAnimTable},
    [SPECIES_EMPOLEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Empoleon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PIPLUP
#if P_FAMILY_STARLY
    [SPECIES_STARLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Starly, gDummySpriteAffineAnimTable},
    [SPECIES_STARAVIA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Staravia, gDummySpriteAffineAnimTable},
    [SPECIES_STARAPTOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Staraptor, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_STARLY
#if P_FAMILY_BIDOOF
    [SPECIES_BIDOOF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bidoof, gDummySpriteAffineAnimTable},
    [SPECIES_BIBAREL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bibarel, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BIDOOF
#if P_FAMILY_KRICKETOT
    [SPECIES_KRICKETOT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kricketot, gDummySpriteAffineAnimTable},
    [SPECIES_KRICKETUNE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kricketune, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KRICKETOT
#if P_FAMILY_SHINX
    [SPECIES_SHINX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shinx, gDummySpriteAffineAnimTable},
    [SPECIES_LUXIO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Luxio, gDummySpriteAffineAnimTable},
    [SPECIES_LUXRAY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Luxray, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHINX
#if P_FAMILY_CRANIDOS
    [SPECIES_CRANIDOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cranidos, gDummySpriteAffineAnimTable},
    [SPECIES_RAMPARDOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rampardos, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CRANIDOS
#if P_FAMILY_SHIELDON
    [SPECIES_SHIELDON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shieldon, gDummySpriteAffineAnimTable},
    [SPECIES_BASTIODON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bastiodon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHIELDON
#if P_FAMILY_BURMY
    [SPECIES_BURMY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Burmy, gDummySpriteAffineAnimTable},
    [SPECIES_WORMADAM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wormadam, gDummySpriteAffineAnimTable},
    [SPECIES_MOTHIM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mothim, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BURMY
#if P_FAMILY_COMBEE
    [SPECIES_COMBEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Combee, gDummySpriteAffineAnimTable},
    [SPECIES_VESPIQUEN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vespiquen, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_COMBEE
#if P_FAMILY_PACHIRISU
    [SPECIES_PACHIRISU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pachirisu, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PACHIRISU
#if P_FAMILY_BUIZEL
    [SPECIES_BUIZEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Buizel, gDummySpriteAffineAnimTable},
    [SPECIES_FLOATZEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Floatzel, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BUIZEL
#if P_FAMILY_CHERUBI
    [SPECIES_CHERUBI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cherubi, gDummySpriteAffineAnimTable},
    [SPECIES_CHERRIM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cherrim, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHERUBI
#if P_FAMILY_SHELLOS
    [SPECIES_SHELLOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shellos, gDummySpriteAffineAnimTable},
    [SPECIES_GASTRODON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gastrodon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHELLOS
#if P_FAMILY_DRIFLOON
    [SPECIES_DRIFLOON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drifloon, gDummySpriteAffineAnimTable},
    [SPECIES_DRIFBLIM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drifblim, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DRIFLOON
#if P_FAMILY_BUNEARY
    [SPECIES_BUNEARY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Buneary, gDummySpriteAffineAnimTable},
    [SPECIES_LOPUNNY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lopunny, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BUNEARY
#if P_FAMILY_GLAMEOW
    [SPECIES_GLAMEOW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Glameow, gDummySpriteAffineAnimTable},
    [SPECIES_PURUGLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Purugly, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GLAMEOW
#if P_FAMILY_STUNKY
    [SPECIES_STUNKY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Stunky, gDummySpriteAffineAnimTable},
    [SPECIES_SKUNTANK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Skuntank, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_STUNKY
#if P_FAMILY_BRONZOR
    [SPECIES_BRONZOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bronzor, gDummySpriteAffineAnimTable},
    [SPECIES_BRONZONG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bronzong, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BRONZOR
#if P_FAMILY_CHATOT
    [SPECIES_CHATOT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chatot, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHATOT
#if P_FAMILY_SPIRITOMB
    [SPECIES_SPIRITOMB]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spiritomb, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SPIRITOMB
#if P_FAMILY_GIBLE
    [SPECIES_GIBLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gible, gDummySpriteAffineAnimTable},
    [SPECIES_GABITE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gabite, gDummySpriteAffineAnimTable},
    [SPECIES_GARCHOMP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Garchomp, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GIBLE
#if P_FAMILY_RIOLU
    [SPECIES_RIOLU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Riolu, gDummySpriteAffineAnimTable},
    [SPECIES_LUCARIO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lucario, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_RIOLU
#if P_FAMILY_HIPPOPOTAS
    [SPECIES_HIPPOPOTAS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hippopotas, gDummySpriteAffineAnimTable},
    [SPECIES_HIPPOWDON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hippowdon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HIPPOPOTAS
#if P_FAMILY_SKORUPI
    [SPECIES_SKORUPI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Skorupi, gDummySpriteAffineAnimTable},
    [SPECIES_DRAPION]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drapion, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SKORUPI
#if P_FAMILY_CROAGUNK
    [SPECIES_CROAGUNK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Croagunk, gDummySpriteAffineAnimTable},
    [SPECIES_TOXICROAK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Toxicroak, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CROAGUNK
#if P_FAMILY_CARNIVINE
    [SPECIES_CARNIVINE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Carnivine, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CARNIVINE
#if P_FAMILY_FINNEON
    [SPECIES_FINNEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Finneon, gDummySpriteAffineAnimTable},
    [SPECIES_LUMINEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lumineon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FINNEON
#if P_FAMILY_SNOVER
    [SPECIES_SNOVER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Snover, gDummySpriteAffineAnimTable},
    [SPECIES_ABOMASNOW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Abomasnow, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SNOVER
#if P_FAMILY_ROTOM
    [SPECIES_ROTOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rotom, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ROTOM
#if P_FAMILY_UXIE
    [SPECIES_UXIE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Uxie, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_UXIE
#if P_FAMILY_MESPRIT
    [SPECIES_MESPRIT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mesprit, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MESPRIT
#if P_FAMILY_AZELF
    [SPECIES_AZELF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Azelf, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_AZELF
#if P_FAMILY_DIALGA
    [SPECIES_DIALGA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dialga, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DIALGA
#if P_FAMILY_PALKIA
    [SPECIES_PALKIA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Palkia, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PALKIA
#if P_FAMILY_HEATRAN
    [SPECIES_HEATRAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Heatran, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HEATRAN
#if P_FAMILY_REGIGIGAS
    [SPECIES_REGIGIGAS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Regigigas, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_REGIGIGAS
#if P_FAMILY_GIRATINA
    [SPECIES_GIRATINA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Giratina, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GIRATINA
#if P_FAMILY_CRESSELIA
    [SPECIES_CRESSELIA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cresselia, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CRESSELIA
#if P_FAMILY_MANAPHY
    [SPECIES_PHIONE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Phione, gDummySpriteAffineAnimTable},
    [SPECIES_MANAPHY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Manaphy, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MANAPHY
#if P_FAMILY_DARKRAI
    [SPECIES_DARKRAI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Darkrai, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DARKRAI
#if P_FAMILY_SHAYMIN
    [SPECIES_SHAYMIN_LAND]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shaymin_land, gDummySpriteAffineAnimTable},
    [SPECIES_SHAYMIN_SKY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shaymin_sky, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHAYMIN
#if P_FAMILY_ARCEUS
    [SPECIES_ARCEUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Arceus, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ARCEUS
#if P_FAMILY_VICTINI
    [SPECIES_VICTINI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Victini, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VICTINI
#if P_FAMILY_SNIVY
    [SPECIES_SNIVY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Snivy, gDummySpriteAffineAnimTable},
    [SPECIES_SERVINE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Servine, gDummySpriteAffineAnimTable},
    [SPECIES_SERPERIOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Serperior, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SNIVY
#if P_FAMILY_TEPIG
    [SPECIES_TEPIG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tepig, gDummySpriteAffineAnimTable},
    [SPECIES_PIGNITE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pignite, gDummySpriteAffineAnimTable},
    [SPECIES_EMBOAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Emboar, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TEPIG
#if P_FAMILY_OSHAWOTT
    [SPECIES_OSHAWOTT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Oshawott, gDummySpriteAffineAnimTable},
    [SPECIES_DEWOTT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dewott, gDummySpriteAffineAnimTable},
    [SPECIES_SAMUROTT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Samurott, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_OSHAWOTT
#if P_FAMILY_PATRAT
    [SPECIES_PATRAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Patrat, gDummySpriteAffineAnimTable},
    [SPECIES_WATCHOG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Watchog, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PATRAT
#if P_FAMILY_LILLIPUP
    [SPECIES_LILLIPUP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lillipup, gDummySpriteAffineAnimTable},
    [SPECIES_HERDIER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Herdier, gDummySpriteAffineAnimTable},
    [SPECIES_STOUTLAND]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Stoutland, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LILLIPUP
#if P_FAMILY_PURRLOIN
    [SPECIES_PURRLOIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Purrloin, gDummySpriteAffineAnimTable},
    [SPECIES_LIEPARD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Liepard, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PURRLOIN
#if P_FAMILY_PANSAGE
    [SPECIES_PANSAGE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pansage, gDummySpriteAffineAnimTable},
    [SPECIES_SIMISAGE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Simisage, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PANSAGE
#if P_FAMILY_PANSEAR
    [SPECIES_PANSEAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pansear, gDummySpriteAffineAnimTable},
    [SPECIES_SIMISEAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Simisear, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PANSEAR
#if P_FAMILY_PANPOUR
    [SPECIES_PANPOUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Panpour, gDummySpriteAffineAnimTable},
    [SPECIES_SIMIPOUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Simipour, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PANPOUR
#if P_FAMILY_MUNNA
    [SPECIES_MUNNA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Munna, gDummySpriteAffineAnimTable},
    [SPECIES_MUSHARNA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Musharna, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MUNNA
#if P_FAMILY_PIDOVE
    [SPECIES_PIDOVE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pidove, gDummySpriteAffineAnimTable},
    [SPECIES_TRANQUILL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tranquill, gDummySpriteAffineAnimTable},
    [SPECIES_UNFEZANT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Unfezant, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PIDOVE
#if P_FAMILY_BLITZLE
    [SPECIES_BLITZLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Blitzle, gDummySpriteAffineAnimTable},
    [SPECIES_ZEBSTRIKA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zebstrika, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BLITZLE
#if P_FAMILY_ROGGENROLA
    [SPECIES_ROGGENROLA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Roggenrola, gDummySpriteAffineAnimTable},
    [SPECIES_BOLDORE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Boldore, gDummySpriteAffineAnimTable},
    [SPECIES_GIGALITH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gigalith, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ROGGENROLA
#if P_FAMILY_WOOBAT
    [SPECIES_WOOBAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Woobat, gDummySpriteAffineAnimTable},
    [SPECIES_SWOOBAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swoobat, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WOOBAT
#if P_FAMILY_DRILBUR
    [SPECIES_DRILBUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drilbur, gDummySpriteAffineAnimTable},
    [SPECIES_EXCADRILL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Excadrill, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DRILBUR
#if P_FAMILY_AUDINO
    [SPECIES_AUDINO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Audino, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_AUDINO
#if P_FAMILY_TIMBURR
    [SPECIES_TIMBURR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Timburr, gDummySpriteAffineAnimTable},
    [SPECIES_GURDURR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gurdurr, gDummySpriteAffineAnimTable},
    [SPECIES_CONKELDURR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Conkeldurr, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TIMBURR
#if P_FAMILY_TYMPOLE
    [SPECIES_TYMPOLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tympole, gDummySpriteAffineAnimTable},
    [SPECIES_PALPITOAD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Palpitoad, gDummySpriteAffineAnimTable},
    [SPECIES_SEISMITOAD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Seismitoad, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TYMPOLE
#if P_FAMILY_THROH
    [SPECIES_THROH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Throh, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_THROH
#if P_FAMILY_SAWK
    [SPECIES_SAWK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sawk, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SAWK
#if P_FAMILY_SEWADDLE
    [SPECIES_SEWADDLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sewaddle, gDummySpriteAffineAnimTable},
    [SPECIES_SWADLOON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swadloon, gDummySpriteAffineAnimTable},
    [SPECIES_LEAVANNY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Leavanny, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SEWADDLE
#if P_FAMILY_VENIPEDE
    [SPECIES_VENIPEDE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Venipede, gDummySpriteAffineAnimTable},
    [SPECIES_WHIRLIPEDE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Whirlipede, gDummySpriteAffineAnimTable},
    [SPECIES_SCOLIPEDE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Scolipede, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VENIPEDE
#if P_FAMILY_COTTONEE
    [SPECIES_COTTONEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cottonee, gDummySpriteAffineAnimTable},
    [SPECIES_WHIMSICOTT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Whimsicott, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_COTTONEE
#if P_FAMILY_PETILIL
    [SPECIES_PETILIL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Petilil, gDummySpriteAffineAnimTable},
    [SPECIES_LILLIGANT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lilligant, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PETILIL
#if P_FAMILY_BASCULIN
    [SPECIES_BASCULIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Basculin, gDummySpriteAffineAnimTable},
#if P_HISUIAN_FORMS
    [SPECIES_BASCULEGION]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Basculegion, gDummySpriteAffineAnimTable},
#endif //P_HISUIAN_FORMS
#endif //P_FAMILY_BASCULIN
#if P_FAMILY_SANDILE
    [SPECIES_SANDILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sandile, gDummySpriteAffineAnimTable},
    [SPECIES_KROKOROK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Krokorok, gDummySpriteAffineAnimTable},
    [SPECIES_KROOKODILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Krookodile, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SANDILE
#if P_FAMILY_DARUMAKA
    [SPECIES_DARUMAKA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Darumaka, gDummySpriteAffineAnimTable},
    [SPECIES_DARMANITAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Darmanitan, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DARUMAKA
#if P_FAMILY_MARACTUS
    [SPECIES_MARACTUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Maractus, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MARACTUS
#if P_FAMILY_DWEBBLE
    [SPECIES_DWEBBLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dwebble, gDummySpriteAffineAnimTable},
    [SPECIES_CRUSTLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Crustle, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DWEBBLE
#if P_FAMILY_SCRAGGY
    [SPECIES_SCRAGGY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Scraggy, gDummySpriteAffineAnimTable},
    [SPECIES_SCRAFTY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Scrafty, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SCRAGGY
#if P_FAMILY_SIGILYPH
    [SPECIES_SIGILYPH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sigilyph, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SIGILYPH
#if P_FAMILY_YAMASK
    [SPECIES_YAMASK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Yamask, gDummySpriteAffineAnimTable},
    [SPECIES_COFAGRIGUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cofagrigus, gDummySpriteAffineAnimTable},
#if P_GALARIAN_FORMS
    [SPECIES_RUNERIGUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Runerigus, gDummySpriteAffineAnimTable},
#endif //P_GALARIAN_FORMS
#endif //P_FAMILY_YAMASK
#if P_FAMILY_TIRTOUGA
    [SPECIES_TIRTOUGA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tirtouga, gDummySpriteAffineAnimTable},
    [SPECIES_CARRACOSTA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Carracosta, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TIRTOUGA
#if P_FAMILY_ARCHEN
    [SPECIES_ARCHEN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Archen, gDummySpriteAffineAnimTable},
    [SPECIES_ARCHEOPS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Archeops, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ARCHEN
#if P_FAMILY_TRUBBISH
    [SPECIES_TRUBBISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Trubbish, gDummySpriteAffineAnimTable},
    [SPECIES_GARBODOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Garbodor, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TRUBBISH
#if P_FAMILY_ZORUA
    [SPECIES_ZORUA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zorua, gDummySpriteAffineAnimTable},
    [SPECIES_ZOROARK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zoroark, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZORUA
#if P_FAMILY_MINCCINO
    [SPECIES_MINCCINO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Minccino, gDummySpriteAffineAnimTable},
    [SPECIES_CINCCINO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cinccino, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MINCCINO
#if P_FAMILY_GOTHITA
    [SPECIES_GOTHITA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gothita, gDummySpriteAffineAnimTable},
    [SPECIES_GOTHORITA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gothorita, gDummySpriteAffineAnimTable},
    [SPECIES_GOTHITELLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gothitelle, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GOTHITA
#if P_FAMILY_SOLOSIS
    [SPECIES_SOLOSIS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Solosis, gDummySpriteAffineAnimTable},
    [SPECIES_DUOSION]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Duosion, gDummySpriteAffineAnimTable},
    [SPECIES_REUNICLUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Reuniclus, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SOLOSIS
#if P_FAMILY_DUCKLETT
    [SPECIES_DUCKLETT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ducklett, gDummySpriteAffineAnimTable},
    [SPECIES_SWANNA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swanna, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DUCKLETT
#if P_FAMILY_VANILLITE
    [SPECIES_VANILLITE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vanillite, gDummySpriteAffineAnimTable},
    [SPECIES_VANILLISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vanillish, gDummySpriteAffineAnimTable},
    [SPECIES_VANILLUXE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vanilluxe, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VANILLITE
#if P_FAMILY_DEERLING
    [SPECIES_DEERLING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Deerling, gDummySpriteAffineAnimTable},
    [SPECIES_SAWSBUCK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sawsbuck, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DEERLING
#if P_FAMILY_EMOLGA
    [SPECIES_EMOLGA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Emolga, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_EMOLGA
#if P_FAMILY_KARRABLAST
    [SPECIES_KARRABLAST]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Karrablast, gDummySpriteAffineAnimTable},
    [SPECIES_ESCAVALIER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Escavalier, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KARRABLAST
#if P_FAMILY_FOONGUS
    [SPECIES_FOONGUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Foongus, gDummySpriteAffineAnimTable},
    [SPECIES_AMOONGUSS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Amoonguss, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FOONGUS
#if P_FAMILY_FRILLISH
    [SPECIES_FRILLISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Frillish, gDummySpriteAffineAnimTable},
    [SPECIES_JELLICENT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Jellicent, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FRILLISH
#if P_FAMILY_ALOMOMOLA
    [SPECIES_ALOMOMOLA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Alomomola, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ALOMOMOLA
#if P_FAMILY_JOLTIK
    [SPECIES_JOLTIK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Joltik, gDummySpriteAffineAnimTable},
    [SPECIES_GALVANTULA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Galvantula, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_JOLTIK
#if P_FAMILY_FERROSEED
    [SPECIES_FERROSEED]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ferroseed, gDummySpriteAffineAnimTable},
    [SPECIES_FERROTHORN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ferrothorn, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FERROSEED
#if P_FAMILY_KLINK
    [SPECIES_KLINK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Klink, gDummySpriteAffineAnimTable},
    [SPECIES_KLANG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Klang, gDummySpriteAffineAnimTable},
    [SPECIES_KLINKLANG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Klinklang, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KLINK
#if P_FAMILY_TYNAMO
    [SPECIES_TYNAMO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tynamo, gDummySpriteAffineAnimTable},
    [SPECIES_EELEKTRIK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Eelektrik, gDummySpriteAffineAnimTable},
    [SPECIES_EELEKTROSS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Eelektross, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TYNAMO
#if P_FAMILY_ELGYEM
    [SPECIES_ELGYEM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Elgyem, gDummySpriteAffineAnimTable},
    [SPECIES_BEHEEYEM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Beheeyem, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ELGYEM
#if P_FAMILY_LITWICK
    [SPECIES_LITWICK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Litwick, gDummySpriteAffineAnimTable},
    [SPECIES_LAMPENT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lampent, gDummySpriteAffineAnimTable},
    [SPECIES_CHANDELURE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chandelure, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LITWICK
#if P_FAMILY_AXEW
    [SPECIES_AXEW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Axew, gDummySpriteAffineAnimTable},
    [SPECIES_FRAXURE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Fraxure, gDummySpriteAffineAnimTable},
    [SPECIES_HAXORUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Haxorus, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_AXEW
#if P_FAMILY_CUBCHOO
    [SPECIES_CUBCHOO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cubchoo, gDummySpriteAffineAnimTable},
    [SPECIES_BEARTIC]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Beartic, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CUBCHOO
#if P_FAMILY_CRYOGONAL
    [SPECIES_CRYOGONAL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cryogonal, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CRYOGONAL
#if P_FAMILY_SHELMET
    [SPECIES_SHELMET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shelmet, gDummySpriteAffineAnimTable},
    [SPECIES_ACCELGOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Accelgor, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SHELMET
#if P_FAMILY_STUNFISK
    [SPECIES_STUNFISK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Stunfisk, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_STUNFISK
#if P_FAMILY_MIENFOO
    [SPECIES_MIENFOO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mienfoo, gDummySpriteAffineAnimTable},
    [SPECIES_MIENSHAO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mienshao, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MIENFOO
#if P_FAMILY_DRUDDIGON
    [SPECIES_DRUDDIGON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Druddigon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DRUDDIGON
#if P_FAMILY_GOLETT
    [SPECIES_GOLETT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Golett, gDummySpriteAffineAnimTable},
    [SPECIES_GOLURK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Golurk, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GOLETT
#if P_FAMILY_PAWNIARD
    [SPECIES_PAWNIARD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pawniard, gDummySpriteAffineAnimTable},
    [SPECIES_BISHARP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bisharp, gDummySpriteAffineAnimTable},
#if P_GEN_9_CROSS_EVOS
    [SPECIES_KINGAMBIT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kingambit, gDummySpriteAffineAnimTable},
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_PAWNIARD
#if P_FAMILY_BOUFFALANT
    [SPECIES_BOUFFALANT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bouffalant, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BOUFFALANT
#if P_FAMILY_RUFFLET
    [SPECIES_RUFFLET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rufflet, gDummySpriteAffineAnimTable},
    [SPECIES_BRAVIARY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Braviary, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_RUFFLET
#if P_FAMILY_VULLABY
    [SPECIES_VULLABY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vullaby, gDummySpriteAffineAnimTable},
    [SPECIES_MANDIBUZZ]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mandibuzz, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VULLABY
#if P_FAMILY_HEATMOR
    [SPECIES_HEATMOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Heatmor, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HEATMOR
#if P_FAMILY_DURANT
    [SPECIES_DURANT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Durant, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DURANT
#if P_FAMILY_DEINO
    [SPECIES_DEINO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Deino, gDummySpriteAffineAnimTable},
    [SPECIES_ZWEILOUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zweilous, gDummySpriteAffineAnimTable},
    [SPECIES_HYDREIGON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hydreigon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DEINO
#if P_FAMILY_LARVESTA
    [SPECIES_LARVESTA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Larvesta, gDummySpriteAffineAnimTable},
    [SPECIES_VOLCARONA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Volcarona, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LARVESTA
#if P_FAMILY_COBALION
    [SPECIES_COBALION]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cobalion, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_COBALION
#if P_FAMILY_TERRAKION
    [SPECIES_TERRAKION]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Terrakion, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TERRAKION
#if P_FAMILY_VIRIZION
    [SPECIES_VIRIZION]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Virizion, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VIRIZION
#if P_FAMILY_TORNADUS
    [SPECIES_TORNADUS_INCARNATE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tornadus_incarnate, gDummySpriteAffineAnimTable},
    [SPECIES_TORNADUS_THERIAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tornadus_therian, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TORNADUS
#if P_FAMILY_THUNDURUS
    [SPECIES_THUNDURUS_INCARNATE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Thundurus_incarnate, gDummySpriteAffineAnimTable},
    [SPECIES_THUNDURUS_THERIAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Thundurus_therian, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_THUNDURUS
#if P_FAMILY_RESHIRAM
    [SPECIES_RESHIRAM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Reshiram, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_RESHIRAM
#if P_FAMILY_ZEKROM
    [SPECIES_ZEKROM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zekrom, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZEKROM
#if P_FAMILY_LANDORUS
    [SPECIES_LANDORUS_INCARNATE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Landorus_incarnate, gDummySpriteAffineAnimTable},
    [SPECIES_LANDORUS_THERIAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Landorus_therian, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LANDORUS
#if P_FAMILY_KYUREM
    [SPECIES_KYUREM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kyurem, gDummySpriteAffineAnimTable},
#if P_FUSION_FORMS
    [SPECIES_KYUREM_WHITE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kyurem_white, gDummySpriteAffineAnimTable},
    [SPECIES_KYUREM_BLACK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kyurem_black, gDummySpriteAffineAnimTable},
#endif //P_FUSION_FORMS
#endif //P_FAMILY_KYUREM
#if P_FAMILY_KELDEO
    [SPECIES_KELDEO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Keldeo, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KELDEO
#if P_FAMILY_MELOETTA
    [SPECIES_MELOETTA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Meloetta, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MELOETTA
#if P_FAMILY_GENESECT
    [SPECIES_GENESECT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Genesect, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GENESECT
#if P_FAMILY_CHESPIN
    [SPECIES_CHESPIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chespin, gDummySpriteAffineAnimTable},
    [SPECIES_QUILLADIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Quilladin, gDummySpriteAffineAnimTable},
    [SPECIES_CHESNAUGHT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chesnaught, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHESPIN
#if P_FAMILY_FENNEKIN
    [SPECIES_FENNEKIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Fennekin, gDummySpriteAffineAnimTable},
    [SPECIES_BRAIXEN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Braixen, gDummySpriteAffineAnimTable},
    [SPECIES_DELPHOX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Delphox, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FENNEKIN
#if P_FAMILY_FROAKIE
    [SPECIES_FROAKIE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Froakie, gDummySpriteAffineAnimTable},
    [SPECIES_FROGADIER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Frogadier, gDummySpriteAffineAnimTable},
    [SPECIES_GRENINJA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Greninja, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FROAKIE
#if P_FAMILY_BUNNELBY
    [SPECIES_BUNNELBY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bunnelby, gDummySpriteAffineAnimTable},
    [SPECIES_DIGGERSBY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Diggersby, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BUNNELBY
#if P_FAMILY_FLETCHLING
    [SPECIES_FLETCHLING]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Fletchling, gDummySpriteAffineAnimTable},
    [SPECIES_FLETCHINDER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Fletchinder, gDummySpriteAffineAnimTable},
    [SPECIES_TALONFLAME]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Talonflame, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FLETCHLING
#if P_FAMILY_SCATTERBUG
    [SPECIES_SCATTERBUG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Scatterbug, gDummySpriteAffineAnimTable},
    [SPECIES_SPEWPA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spewpa, gDummySpriteAffineAnimTable},
    [SPECIES_VIVILLON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vivillon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SCATTERBUG
#if P_FAMILY_LITLEO
    [SPECIES_LITLEO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Litleo, gDummySpriteAffineAnimTable},
    [SPECIES_PYROAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pyroar, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LITLEO
#if P_FAMILY_FLABEBE
    [SPECIES_FLABEBE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Flabebe, gDummySpriteAffineAnimTable},
    [SPECIES_FLOETTE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Floette, gDummySpriteAffineAnimTable},
    [SPECIES_FLOETTE_ETERNAL_FLOWER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Floette_eternal_flower, gDummySpriteAffineAnimTable},
    [SPECIES_FLORGES]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Florges, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FLABEBE
#if P_FAMILY_SKIDDO
    [SPECIES_SKIDDO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Skiddo, gDummySpriteAffineAnimTable},
    [SPECIES_GOGOAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gogoat, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SKIDDO
#if P_FAMILY_PANCHAM
    [SPECIES_PANCHAM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pancham, gDummySpriteAffineAnimTable},
    [SPECIES_PANGORO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pangoro, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PANCHAM
#if P_FAMILY_FURFROU
    [SPECIES_FURFROU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Furfrou, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FURFROU
#if P_FAMILY_ESPURR
    [SPECIES_ESPURR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Espurr, gDummySpriteAffineAnimTable},
    [SPECIES_MEOWSTIC]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Meowstic, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ESPURR
#if P_FAMILY_HONEDGE
    [SPECIES_HONEDGE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Honedge, gDummySpriteAffineAnimTable},
    [SPECIES_DOUBLADE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Doublade, gDummySpriteAffineAnimTable},
    [SPECIES_AEGISLASH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Aegislash, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HONEDGE
#if P_FAMILY_SPRITZEE
    [SPECIES_SPRITZEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spritzee, gDummySpriteAffineAnimTable},
    [SPECIES_AROMATISSE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Aromatisse, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SPRITZEE
#if P_FAMILY_SWIRLIX
    [SPECIES_SWIRLIX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Swirlix, gDummySpriteAffineAnimTable},
    [SPECIES_SLURPUFF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Slurpuff, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SWIRLIX
#if P_FAMILY_INKAY
    [SPECIES_INKAY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Inkay, gDummySpriteAffineAnimTable},
    [SPECIES_MALAMAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Malamar, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_INKAY
#if P_FAMILY_BINACLE
    [SPECIES_BINACLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Binacle, gDummySpriteAffineAnimTable},
    [SPECIES_BARBARACLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Barbaracle, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BINACLE
#if P_FAMILY_SKRELP
    [SPECIES_SKRELP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Skrelp, gDummySpriteAffineAnimTable},
    [SPECIES_DRAGALGE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dragalge, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SKRELP
#if P_FAMILY_CLAUNCHER
    [SPECIES_CLAUNCHER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Clauncher, gDummySpriteAffineAnimTable},
    [SPECIES_CLAWITZER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Clawitzer, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CLAUNCHER
#if P_FAMILY_HELIOPTILE
    [SPECIES_HELIOPTILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Helioptile, gDummySpriteAffineAnimTable},
    [SPECIES_HELIOLISK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Heliolisk, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HELIOPTILE
#if P_FAMILY_TYRUNT
    [SPECIES_TYRUNT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tyrunt, gDummySpriteAffineAnimTable},
    [SPECIES_TYRANTRUM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tyrantrum, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TYRUNT
#if P_FAMILY_AMAURA
    [SPECIES_AMAURA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Amaura, gDummySpriteAffineAnimTable},
    [SPECIES_AURORUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Aurorus, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_AMAURA
#if P_FAMILY_HAWLUCHA
    [SPECIES_HAWLUCHA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hawlucha, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HAWLUCHA
#if P_FAMILY_DEDENNE
    [SPECIES_DEDENNE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dedenne, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DEDENNE
#if P_FAMILY_CARBINK
    [SPECIES_CARBINK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Carbink, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CARBINK
#if P_FAMILY_GOOMY
    [SPECIES_GOOMY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Goomy, gDummySpriteAffineAnimTable},
    [SPECIES_SLIGGOO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sliggoo, gDummySpriteAffineAnimTable},
    [SPECIES_GOODRA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Goodra, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GOOMY
#if P_FAMILY_KLEFKI
    [SPECIES_KLEFKI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Klefki, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KLEFKI
#if P_FAMILY_PHANTUMP
    [SPECIES_PHANTUMP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Phantump, gDummySpriteAffineAnimTable},
    [SPECIES_TREVENANT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Trevenant, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PHANTUMP
#if P_FAMILY_PUMPKABOO
    [SPECIES_PUMPKABOO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pumpkaboo, gDummySpriteAffineAnimTable},
    [SPECIES_PUMPKABOO_SUPER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pumpkaboo_super, gDummySpriteAffineAnimTable},
    [SPECIES_GOURGEIST]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gourgeist, gDummySpriteAffineAnimTable},
    [SPECIES_GOURGEIST_SUPER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gourgeist_super, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PUMPKABOO
#if P_FAMILY_BERGMITE
    [SPECIES_BERGMITE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bergmite, gDummySpriteAffineAnimTable},
    [SPECIES_AVALUGG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Avalugg, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BERGMITE
#if P_FAMILY_NOIBAT
    [SPECIES_NOIBAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Noibat, gDummySpriteAffineAnimTable},
    [SPECIES_NOIVERN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Noivern, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_NOIBAT
#if P_FAMILY_XERNEAS
    [SPECIES_XERNEAS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Xerneas, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_XERNEAS
#if P_FAMILY_YVELTAL
    [SPECIES_YVELTAL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Yveltal, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_YVELTAL
#if P_FAMILY_ZYGARDE
    [SPECIES_ZYGARDE_50]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zygarde_50, gDummySpriteAffineAnimTable},
    [SPECIES_ZYGARDE_10]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zygarde_10, gDummySpriteAffineAnimTable},
    [SPECIES_ZYGARDE_COMPLETE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zygarde_complete, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZYGARDE
#if P_FAMILY_DIANCIE
    [SPECIES_DIANCIE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Diancie, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DIANCIE
#if P_FAMILY_HOOPA
    [SPECIES_HOOPA_CONFINED]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hoopa_confined, gDummySpriteAffineAnimTable},
    [SPECIES_HOOPA_UNBOUND]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hoopa_unbound, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HOOPA
#if P_FAMILY_VOLCANION
    [SPECIES_VOLCANION]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Volcanion, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_VOLCANION
#if P_FAMILY_ROWLET
    [SPECIES_ROWLET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rowlet, gDummySpriteAffineAnimTable},
    [SPECIES_DARTRIX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dartrix, gDummySpriteAffineAnimTable},
    [SPECIES_DECIDUEYE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Decidueye, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ROWLET
#if P_FAMILY_LITTEN
    [SPECIES_LITTEN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Litten, gDummySpriteAffineAnimTable},
    [SPECIES_TORRACAT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Torracat, gDummySpriteAffineAnimTable},
    [SPECIES_INCINEROAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Incineroar, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_LITTEN
#if P_FAMILY_POPPLIO
    [SPECIES_POPPLIO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Popplio, gDummySpriteAffineAnimTable},
    [SPECIES_BRIONNE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Brionne, gDummySpriteAffineAnimTable},
    [SPECIES_PRIMARINA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Primarina, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_POPPLIO
#if P_FAMILY_PIKIPEK
    [SPECIES_PIKIPEK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pikipek, gDummySpriteAffineAnimTable},
    [SPECIES_TRUMBEAK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Trumbeak, gDummySpriteAffineAnimTable},
    [SPECIES_TOUCANNON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Toucannon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PIKIPEK
#if P_FAMILY_YUNGOOS
    [SPECIES_YUNGOOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Yungoos, gDummySpriteAffineAnimTable},
    [SPECIES_GUMSHOOS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gumshoos, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_YUNGOOS
#if P_FAMILY_GRUBBIN
    [SPECIES_GRUBBIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Grubbin, gDummySpriteAffineAnimTable},
    [SPECIES_CHARJABUG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Charjabug, gDummySpriteAffineAnimTable},
    [SPECIES_VIKAVOLT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Vikavolt, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GRUBBIN
#if P_FAMILY_CRABRAWLER
    [SPECIES_CRABRAWLER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Crabrawler, gDummySpriteAffineAnimTable},
    [SPECIES_CRABOMINABLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Crabominable, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CRABRAWLER
#if P_FAMILY_ORICORIO
    [SPECIES_ORICORIO_BAILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Oricorio_baile, gDummySpriteAffineAnimTable},
    [SPECIES_ORICORIO_POM_POM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Oricorio_pom_pom, gDummySpriteAffineAnimTable},
    [SPECIES_ORICORIO_PAU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Oricorio_pau, gDummySpriteAffineAnimTable},
    [SPECIES_ORICORIO_SENSU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Oricorio_sensu, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ORICORIO
#if P_FAMILY_CUTIEFLY
    [SPECIES_CUTIEFLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cutiefly, gDummySpriteAffineAnimTable},
    [SPECIES_RIBOMBEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Ribombee, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CUTIEFLY
#if P_FAMILY_ROCKRUFF
    [SPECIES_ROCKRUFF]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rockruff, gDummySpriteAffineAnimTable},
    [SPECIES_LYCANROC_MIDDAY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lycanroc_midday, gDummySpriteAffineAnimTable},
    [SPECIES_LYCANROC_MIDNIGHT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lycanroc_midnight, gDummySpriteAffineAnimTable},
    [SPECIES_LYCANROC_DUSK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lycanroc_dusk, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ROCKRUFF
#if P_FAMILY_WISHIWASHI
    [SPECIES_WISHIWASHI_SOLO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wishiwashi_solo, gDummySpriteAffineAnimTable},
    [SPECIES_WISHIWASHI_SCHOOL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wishiwashi_school, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WISHIWASHI
#if P_FAMILY_MAREANIE
    [SPECIES_MAREANIE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mareanie, gDummySpriteAffineAnimTable},
    [SPECIES_TOXAPEX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Toxapex, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MAREANIE
#if P_FAMILY_MUDBRAY
    [SPECIES_MUDBRAY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mudbray, gDummySpriteAffineAnimTable},
    [SPECIES_MUDSDALE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mudsdale, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MUDBRAY
#if P_FAMILY_DEWPIDER
    [SPECIES_DEWPIDER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dewpider, gDummySpriteAffineAnimTable},
    [SPECIES_ARAQUANID]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Araquanid, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DEWPIDER
#if P_FAMILY_FOMANTIS
    [SPECIES_FOMANTIS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Fomantis, gDummySpriteAffineAnimTable},
    [SPECIES_LURANTIS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lurantis, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FOMANTIS
#if P_FAMILY_MORELULL
    [SPECIES_MORELULL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Morelull, gDummySpriteAffineAnimTable},
    [SPECIES_SHIINOTIC]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Shiinotic, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MORELULL
#if P_FAMILY_SALANDIT
    [SPECIES_SALANDIT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Salandit, gDummySpriteAffineAnimTable},
    [SPECIES_SALAZZLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Salazzle, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SALANDIT
#if P_FAMILY_STUFFUL
    [SPECIES_STUFFUL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Stufful, gDummySpriteAffineAnimTable},
    [SPECIES_BEWEAR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bewear, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_STUFFUL
#if P_FAMILY_BOUNSWEET
    [SPECIES_BOUNSWEET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bounsweet, gDummySpriteAffineAnimTable},
    [SPECIES_STEENEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Steenee, gDummySpriteAffineAnimTable},
    [SPECIES_TSAREENA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tsareena, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BOUNSWEET
#if P_FAMILY_COMFEY
    [SPECIES_COMFEY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Comfey, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_COMFEY
#if P_FAMILY_ORANGURU
    [SPECIES_ORANGURU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Oranguru, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ORANGURU
#if P_FAMILY_PASSIMIAN
    [SPECIES_PASSIMIAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Passimian, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PASSIMIAN
#if P_FAMILY_WIMPOD
    [SPECIES_WIMPOD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wimpod, gDummySpriteAffineAnimTable},
    [SPECIES_GOLISOPOD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Golisopod, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WIMPOD
#if P_FAMILY_SANDYGAST
    [SPECIES_SANDYGAST]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sandygast, gDummySpriteAffineAnimTable},
    [SPECIES_PALOSSAND]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Palossand, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SANDYGAST
#if P_FAMILY_PYUKUMUKU
    [SPECIES_PYUKUMUKU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pyukumuku, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PYUKUMUKU
#if P_FAMILY_TYPE_NULL
    [SPECIES_TYPE_NULL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Type_null, gDummySpriteAffineAnimTable},
    [SPECIES_SILVALLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Silvally, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TYPE_NULL
#if P_FAMILY_MINIOR
    [SPECIES_MINIOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Minior, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MINIOR
#if P_FAMILY_KOMALA
    [SPECIES_KOMALA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Komala, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KOMALA
#if P_FAMILY_TURTONATOR
    [SPECIES_TURTONATOR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Turtonator, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TURTONATOR
#if P_FAMILY_TOGEDEMARU
    [SPECIES_TOGEDEMARU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Togedemaru, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TOGEDEMARU
#if P_FAMILY_MIMIKYU
    [SPECIES_MIMIKYU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Mimikyu, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MIMIKYU
#if P_FAMILY_BRUXISH
    [SPECIES_BRUXISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Bruxish, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BRUXISH
#if P_FAMILY_DRAMPA
    [SPECIES_DRAMPA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drampa, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DRAMPA
#if P_FAMILY_DHELMISE
    [SPECIES_DHELMISE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dhelmise, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DHELMISE
#if P_FAMILY_JANGMO_O
    [SPECIES_JANGMO_O]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Jangmo_o, gDummySpriteAffineAnimTable},
    [SPECIES_HAKAMO_O]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hakamo_o, gDummySpriteAffineAnimTable},
    [SPECIES_KOMMO_O]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kommo_o, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_JANGMO_O
#if P_FAMILY_TAPU_KOKO
    [SPECIES_TAPU_KOKO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tapu_koko, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TAPU_KOKO
#if P_FAMILY_TAPU_LELE
    [SPECIES_TAPU_LELE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tapu_lele, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TAPU_LELE
#if P_FAMILY_TAPU_BULU
    [SPECIES_TAPU_BULU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tapu_bulu, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TAPU_BULU
#if P_FAMILY_TAPU_FINI
    [SPECIES_TAPU_FINI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Tapu_fini, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TAPU_FINI
#if P_FAMILY_COSMOG
    [SPECIES_COSMOG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cosmog, gDummySpriteAffineAnimTable},
    [SPECIES_COSMOEM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cosmoem, gDummySpriteAffineAnimTable},
    [SPECIES_SOLGALEO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Solgaleo, gDummySpriteAffineAnimTable},
    [SPECIES_LUNALA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Lunala, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_COSMOG
#if P_FAMILY_NIHILEGO
    [SPECIES_NIHILEGO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nihilego, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_NIHILEGO
#if P_FAMILY_BUZZWOLE
    [SPECIES_BUZZWOLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Buzzwole, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BUZZWOLE
#if P_FAMILY_PHEROMOSA
    [SPECIES_PHEROMOSA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pheromosa, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PHEROMOSA
#if P_FAMILY_XURKITREE
    [SPECIES_XURKITREE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Xurkitree, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_XURKITREE
#if P_FAMILY_CELESTEELA
    [SPECIES_CELESTEELA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Celesteela, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CELESTEELA
#if P_FAMILY_KARTANA
    [SPECIES_KARTANA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kartana, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KARTANA
#if P_FAMILY_GUZZLORD
    [SPECIES_GUZZLORD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Guzzlord, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GUZZLORD
#if P_FAMILY_NECROZMA
    [SPECIES_NECROZMA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Necrozma, gDummySpriteAffineAnimTable},
#if P_FUSION_FORMS
    [SPECIES_NECROZMA_DUSK_MANE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Necrozma_dusk_mane, gDummySpriteAffineAnimTable},
    [SPECIES_NECROZMA_DAWN_WINGS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Necrozma_dawn_wings, gDummySpriteAffineAnimTable},
#if P_ULTRA_BURST_FORMS
    [SPECIES_NECROZMA_ULTRA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Necrozma_ultra, gDummySpriteAffineAnimTable},
#endif //P_ULTRA_BURST_FORMS
#endif //P_FUSION_FORMS
#endif //P_FAMILY_NECROZMA
#if P_FAMILY_MAGEARNA
    [SPECIES_MAGEARNA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Magearna, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MAGEARNA
#if P_FAMILY_MARSHADOW
    [SPECIES_MARSHADOW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Marshadow, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MARSHADOW
#if P_FAMILY_POIPOLE
    [SPECIES_POIPOLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Poipole, gDummySpriteAffineAnimTable},
    [SPECIES_NAGANADEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Naganadel, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_POIPOLE
#if P_FAMILY_STAKATAKA
    [SPECIES_STAKATAKA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Stakataka, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_STAKATAKA
#if P_FAMILY_BLACEPHALON
    [SPECIES_BLACEPHALON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Blacephalon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BLACEPHALON
#if P_FAMILY_ZERAORA
    [SPECIES_ZERAORA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zeraora, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZERAORA
#if P_FAMILY_MELTAN
    [SPECIES_MELTAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Meltan, gDummySpriteAffineAnimTable},
    [SPECIES_MELMETAL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Melmetal, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MELTAN
#if P_FAMILY_GROOKEY
    [SPECIES_GROOKEY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Grookey, gDummySpriteAffineAnimTable},
    [SPECIES_THWACKEY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Thwackey, gDummySpriteAffineAnimTable},
    [SPECIES_RILLABOOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rillaboom, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GROOKEY
#if P_FAMILY_SCORBUNNY
    [SPECIES_SCORBUNNY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Scorbunny, gDummySpriteAffineAnimTable},
    [SPECIES_RABOOT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Raboot, gDummySpriteAffineAnimTable},
    [SPECIES_CINDERACE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cinderace, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SCORBUNNY
#if P_FAMILY_SOBBLE
    [SPECIES_SOBBLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sobble, gDummySpriteAffineAnimTable},
    [SPECIES_DRIZZILE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drizzile, gDummySpriteAffineAnimTable},
    [SPECIES_INTELEON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Inteleon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SOBBLE
#if P_FAMILY_SKWOVET
    [SPECIES_SKWOVET]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Skwovet, gDummySpriteAffineAnimTable},
    [SPECIES_GREEDENT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Greedent, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SKWOVET
#if P_FAMILY_ROOKIDEE
    [SPECIES_ROOKIDEE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rookidee, gDummySpriteAffineAnimTable},
    [SPECIES_CORVISQUIRE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Corvisquire, gDummySpriteAffineAnimTable},
    [SPECIES_CORVIKNIGHT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Corviknight, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ROOKIDEE
#if P_FAMILY_BLIPBUG
    [SPECIES_BLIPBUG]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Blipbug, gDummySpriteAffineAnimTable},
    [SPECIES_DOTTLER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dottler, gDummySpriteAffineAnimTable},
    [SPECIES_ORBEETLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Orbeetle, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_BLIPBUG
#if P_FAMILY_NICKIT
    [SPECIES_NICKIT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Nickit, gDummySpriteAffineAnimTable},
    [SPECIES_THIEVUL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Thievul, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_NICKIT
#if P_FAMILY_GOSSIFLEUR
    [SPECIES_GOSSIFLEUR]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Gossifleur, gDummySpriteAffineAnimTable},
    [SPECIES_ELDEGOSS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Eldegoss, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GOSSIFLEUR
#if P_FAMILY_WOOLOO
    [SPECIES_WOOLOO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Wooloo, gDummySpriteAffineAnimTable},
    [SPECIES_DUBWOOL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dubwool, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_WOOLOO
#if P_FAMILY_CHEWTLE
    [SPECIES_CHEWTLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Chewtle, gDummySpriteAffineAnimTable},
    [SPECIES_DREDNAW]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drednaw, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CHEWTLE
#if P_FAMILY_YAMPER
    [SPECIES_YAMPER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Yamper, gDummySpriteAffineAnimTable},
    [SPECIES_BOLTUND]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Boltund, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_YAMPER
#if P_FAMILY_ROLYCOLY
    [SPECIES_ROLYCOLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Rolycoly, gDummySpriteAffineAnimTable},
    [SPECIES_CARKOL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Carkol, gDummySpriteAffineAnimTable},
    [SPECIES_COALOSSAL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Coalossal, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ROLYCOLY
#if P_FAMILY_APPLIN
    [SPECIES_APPLIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Applin, gDummySpriteAffineAnimTable},
    [SPECIES_FLAPPLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Flapple, gDummySpriteAffineAnimTable},
    [SPECIES_APPLETUN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Appletun, gDummySpriteAffineAnimTable},
#if P_GEN_9_CROSS_EVOS
    [SPECIES_DIPPLIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dipplin, gDummySpriteAffineAnimTable},
#endif //P_GEN_9_CROSS_EVOS
#endif //P_FAMILY_APPLIN
#if P_FAMILY_SILICOBRA
    [SPECIES_SILICOBRA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Silicobra, gDummySpriteAffineAnimTable},
    [SPECIES_SANDACONDA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sandaconda, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SILICOBRA
#if P_FAMILY_CRAMORANT
    [SPECIES_CRAMORANT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cramorant, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CRAMORANT
#if P_FAMILY_ARROKUDA
    [SPECIES_ARROKUDA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Arrokuda, gDummySpriteAffineAnimTable},
    [SPECIES_BARRASKEWDA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Barraskewda, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ARROKUDA
#if P_FAMILY_TOXEL
    [SPECIES_TOXEL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Toxel, gDummySpriteAffineAnimTable},
    [SPECIES_TOXTRICITY_AMPED]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Toxtricity_amped, gDummySpriteAffineAnimTable},
    [SPECIES_TOXTRICITY_LOW_KEY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Toxtricity_low_key, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_TOXEL
#if P_FAMILY_SIZZLIPEDE
    [SPECIES_SIZZLIPEDE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sizzlipede, gDummySpriteAffineAnimTable},
    [SPECIES_CENTISKORCH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Centiskorch, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SIZZLIPEDE
#if P_FAMILY_CLOBBOPUS
    [SPECIES_CLOBBOPUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Clobbopus, gDummySpriteAffineAnimTable},
    [SPECIES_GRAPPLOCT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Grapploct, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CLOBBOPUS
#if P_FAMILY_SINISTEA
    [SPECIES_SINISTEA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Sinistea, gDummySpriteAffineAnimTable},
    [SPECIES_POLTEAGEIST]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Polteageist, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SINISTEA
#if P_FAMILY_HATENNA
    [SPECIES_HATENNA]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hatenna, gDummySpriteAffineAnimTable},
    [SPECIES_HATTREM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hattrem, gDummySpriteAffineAnimTable},
    [SPECIES_HATTERENE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Hatterene, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_HATENNA
#if P_FAMILY_IMPIDIMP
    [SPECIES_IMPIDIMP]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Impidimp, gDummySpriteAffineAnimTable},
    [SPECIES_MORGREM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Morgrem, gDummySpriteAffineAnimTable},
    [SPECIES_GRIMMSNARL]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Grimmsnarl, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_IMPIDIMP
#if P_FAMILY_MILCERY
    [SPECIES_MILCERY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Milcery, gDummySpriteAffineAnimTable},
    [SPECIES_ALCREMIE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Alcremie, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MILCERY
#if P_FAMILY_FALINKS
    [SPECIES_FALINKS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Falinks, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_FALINKS
#if P_FAMILY_PINCURCHIN
    [SPECIES_PINCURCHIN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Pincurchin, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_PINCURCHIN
#if P_FAMILY_SNOM
    [SPECIES_SNOM]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Snom, gDummySpriteAffineAnimTable},
    [SPECIES_FROSMOTH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Frosmoth, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SNOM
#if P_FAMILY_STONJOURNER
    [SPECIES_STONJOURNER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Stonjourner, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_STONJOURNER
#if P_FAMILY_EISCUE
    [SPECIES_EISCUE_ICE_FACE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Eiscue_ice_face, gDummySpriteAffineAnimTable},
    [SPECIES_EISCUE_NOICE_FACE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Eiscue_noice_face, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_EISCUE
#if P_FAMILY_INDEEDEE
    [SPECIES_INDEEDEE_MALE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Indeedee_male, gDummySpriteAffineAnimTable},
    [SPECIES_INDEEDEE_FEMALE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Indeedee_female, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_INDEEDEE
#if P_FAMILY_MORPEKO
    [SPECIES_MORPEKO_FULL_BELLY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Morpeko_full_belly, gDummySpriteAffineAnimTable},
    [SPECIES_MORPEKO_HANGRY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Morpeko_hangry, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_MORPEKO
#if P_FAMILY_CUFANT
    [SPECIES_CUFANT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Cufant, gDummySpriteAffineAnimTable},
    [SPECIES_COPPERAJAH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Copperajah, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_CUFANT
#if P_FAMILY_DRACOZOLT
    [SPECIES_DRACOZOLT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dracozolt, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DRACOZOLT
#if P_FAMILY_ARCTOZOLT
    [SPECIES_ARCTOZOLT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Arctozolt, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ARCTOZOLT
#if P_FAMILY_DRACOVISH
    [SPECIES_DRACOVISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dracovish, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DRACOVISH
#if P_FAMILY_ARCTOVISH
    [SPECIES_ARCTOVISH]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Arctovish, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ARCTOVISH
#if P_FAMILY_DURALUDON
    [SPECIES_DURALUDON]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Duraludon, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DURALUDON
#if P_FAMILY_DREEPY
    [SPECIES_DREEPY]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dreepy, gDummySpriteAffineAnimTable},
    [SPECIES_DRAKLOAK]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Drakloak, gDummySpriteAffineAnimTable},
    [SPECIES_DRAGAPULT]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Dragapult, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_DREEPY
#if P_FAMILY_ZACIAN
    [SPECIES_ZACIAN_HERO_OF_MANY_BATTLES]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zacian_hero_of_many_battles, gDummySpriteAffineAnimTable},
    [SPECIES_ZACIAN_CROWNED_SWORD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zacian_crowned_sword, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZACIAN
#if P_FAMILY_ZAMAZENTA
    [SPECIES_ZAMAZENTA_HERO_OF_MANY_BATTLES]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zamazenta_hero_of_many_battles, gDummySpriteAffineAnimTable},
    [SPECIES_ZAMAZENTA_CROWNED_SHIELD]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zamazenta_crowned_shield, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZAMAZENTA
#if P_FAMILY_ETERNATUS
    [SPECIES_ETERNATUS]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Eternatus, gDummySpriteAffineAnimTable},
    [SPECIES_ETERNATUS_ETERNAMAX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Eternatus_eternamax, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ETERNATUS
#if P_FAMILY_KUBFU
    [SPECIES_KUBFU]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Kubfu, gDummySpriteAffineAnimTable},
    [SPECIES_URSHIFU_SINGLE_STRIKE_STYLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Urshifu_single_strike_style, gDummySpriteAffineAnimTable},
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Urshifu_rapid_strike_style, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_KUBFU
#if P_FAMILY_ZARUDE
    [SPECIES_ZARUDE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Zarude, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ZARUDE
#if P_FAMILY_REGIELEKI
    [SPECIES_REGIELEKI]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Regieleki, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_REGIELEKI
#if P_FAMILY_REGIDRAGO
    [SPECIES_REGIDRAGO]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Regidrago, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_REGIDRAGO
#if P_FAMILY_GLASTRIER
    [SPECIES_GLASTRIER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Glastrier, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_GLASTRIER
#if P_FAMILY_SPECTRIER
    [SPECIES_SPECTRIER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Spectrier, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_SPECTRIER
#if P_FAMILY_CALYREX
    [SPECIES_CALYREX]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Calyrex, gDummySpriteAffineAnimTable},
#if P_FUSION_FORMS
    [SPECIES_CALYREX_ICE_RIDER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Calyrex_ice_rider, gDummySpriteAffineAnimTable},
    [SPECIES_CALYREX_SHADOW_RIDER]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Calyrex_shadow_rider, gDummySpriteAffineAnimTable},
#endif //P_FUSION_FORMS
#endif //P_FAMILY_CALYREX
#if P_FAMILY_ENAMORUS
    [SPECIES_ENAMORUS_INCARNATE]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Enamorus_incarnate, gDummySpriteAffineAnimTable},
    [SPECIES_ENAMORUS_THERIAN]  = {0xFFFF, OBJ_EVENT_PAL_TAG_DYNAMIC, OBJ_EVENT_PAL_TAG_NONE, 512, 32, 32, 2, SHADOW_SIZE_M, FALSE, FALSE, TRACKS_FOOT, &gObjectEventBaseOam_32x32, sOamTables_32x32, sAnimTable_Following, sPicTable_Enamorus_therian, gDummySpriteAffineAnimTable},
#endif //P_FAMILY_ENAMORUS


  };