int DoTVShowBravoTrainerPokemonProfile()
{
  int v0; // r4@1
  int v1; // r5@1
  char v2; // r0@4
  _BYTE *v3; // r0@16
  int v5; // [sp+8h] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 <= 8u )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717890), *(_BYTE *)(36 * v202E8CC + 0x2027E8A));
        CopyContestCategoryToStringVar(1u, *(_BYTE *)(v0 + 19) & 7);
        sub_80BEF10(2, (unsigned int)*(_BYTE *)(v0 + 19) << 27 >> 30);
        if ( StringCompareWithoutExtCtrlCodes((int)&gSpeciesNames[11 * *(_WORD *)(v0 + 2)], v0 + 8) )
          v2 = 1;
        else
          v2 = 8;
        goto _080C0B78;
      case 1u:
        StringCopy(&gStringVar1, &gSpeciesNames[11 * *(_WORD *)(36 * v202E8CC + 0x2027E6E)]);
        sub_80C08FC(&gStringVar2, (_BYTE *)(v0 + 8), *(_BYTE *)(v0 + 31));
        CopyContestCategoryToStringVar(2u, *(_BYTE *)(v0 + 19) & 7);
        goto _080C0B74;
      case 2u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717890), *(_BYTE *)(36 * v202E8CC + 0x2027E8A));
        if ( *(_BYTE *)(v0 + 19) & 0x60 )
          v2 = 4;
        else
          v2 = 3;
        goto _080C0B78;
      case 3u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717890), *(_BYTE *)(36 * v202E8CC + 0x2027E8A));
        sub_80EB3FC(&gStringVar2, *(_WORD *)(v0 + 4));
        sub_80BF088(2u, ((unsigned int)*(_BYTE *)(v0 + 19) << 25 >> 30) + 1);
        v2 = 5;
        goto _080C0B78;
      case 4u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717890), *(_BYTE *)(36 * v202E8CC + 0x2027E8A));
        sub_80EB3FC(&gStringVar2, *(_WORD *)(v0 + 4));
        sub_80BF088(2u, ((unsigned int)*(_BYTE *)(v0 + 19) << 25 >> 30) + 1);
        v2 = 5;
        goto _080C0B78;
      case 5u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717890), *(_BYTE *)(36 * v202E8CC + 0x2027E8A));
        CopyContestCategoryToStringVar(1u, *(_BYTE *)(v0 + 19) & 7);
        sub_80EB3FC(&gStringVar3, *(_WORD *)(v0 + 6));
        if ( *(_WORD *)(v0 + 20) )
          v2 = 6;
        else
          v2 = 7;
        goto _080C0B78;
      case 6u:
        StringCopy(&gStringVar1, &gSpeciesNames[11 * *(_WORD *)(36 * v202E8CC + 0x2027E6E)]);
        StringCopy(&gStringVar2, &gMoveNames[13 * *(_WORD *)(v0 + 20)]);
        sub_80EB3FC(&gStringVar3, *(_WORD *)(v0 + 6));
        v2 = 7;
        goto _080C0B78;
      case 7u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717890), *(_BYTE *)(36 * v202E8CC + 0x2027E8A));
        v3 = StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 2)]);
        TVShowDone(v3);
        break;
      case 8u:
        StringCopy(&gStringVar1, &gSpeciesNames[11 * *(_WORD *)(36 * v202E8CC + 0x2027E6E)]);
_080C0B74:
        v2 = 2;
_080C0B78:
        v20387E8 = v2;
        break;
      default:
        break;
    }
  }
  box_related_two__2((int)*(&gUnknown_083D1524 + v1));
  return v5;
}
