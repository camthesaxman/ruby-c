char *__fastcall sub_8068500(int a1, unsigned __int8 a2, char a3)
{
  int v3; // r6@1
  unsigned __int8 v4; // r5@1
  char *result; // r0@2
  int v6; // r4@31

  v3 = a1;
  v4 = a2;
  if ( (unsigned __int8)MetatileBehavior_IsPlayerFacingTVScreen(a2, a3) == 1 )
    return Event_TV;
  if ( (unsigned __int8)MetatileBehavior_IsPC(v4) == 1 )
    return (char *)&gUnknown_081A0009;
  if ( (unsigned __int8)is_tile_x8B(v4) == 1 )
    return (char *)&ClosedSootopolisGymDoorScript;
  if ( (unsigned __int8)is_tile_x84(v4) == 1 )
    return (char *)&gUnknown_081A4363;
  if ( (unsigned __int8)is_tile_x87(v4) == 1 )
    return (char *)&gUnknown_081C346A;
  if ( (unsigned __int8)is_tile_x8C(v4) == 1 )
    return (char *)&gUnknown_081616E1;
  if ( (unsigned __int8)is_tile_x85(v4) == 1 )
    return (char *)&Event_WorldMap;
  if ( (unsigned __int8)sub_805791C(v4) == 1 )
    return (char *)&Event_RunningShoesManual;
  if ( (unsigned __int8)sub_8057930(v4) == 1 )
    return (char *)&PictureBookShelfScript;
  if ( (unsigned __int8)sub_8057944(v4) == 1 )
    return (char *)&BookshelfScript;
  if ( (unsigned __int8)sub_8057958(v4) == 1 )
    return (char *)&PokemonCenterBookshelfScript;
  if ( (unsigned __int8)sub_805796C(v4) == 1 )
    return (char *)&VaseScript;
  if ( (unsigned __int8)sub_8057980(v4) == 1 )
    return (char *)&TrashCanScript;
  if ( (unsigned __int8)sub_8057994(v4) == 1 )
    return (char *)&ShopShelfScript;
  if ( (unsigned __int8)sub_80579A8(v4) == 1 )
    return (char *)&BlueprintScript;
  v6 = *(_BYTE *)(v3 + 4);
  if ( v6 != (unsigned __int8)MapGridGetZCoordAt(*(_WORD *)v3, *(_WORD *)(v3 + 2)) )
    goto LABEL_43;
  if ( (unsigned __int8)sub_8057238(v4) == 1 )
    return (char *)&gUnknown_0815F36C;
  if ( (unsigned __int8)sub_805724C(v4) == 1 )
    return (char *)&gUnknown_0815F43A;
  if ( (unsigned __int8)sub_8057364(v4) == 1 )
    return (char *)&gUnknown_0815F523;
  if ( (unsigned __int8)sub_8057378(v4) != 1 )
LABEL_43:
    result = 0;
  else
    result = (char *)&gUnknown_0815F528;
  return result;
}
