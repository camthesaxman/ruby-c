int DoTVShowPokemonTodaySuccessfulCapture()
{
  int v0; // r5@1
  int v1; // r6@1
  char *v2; // r0@7
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 <= 0xBu )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6E));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 16)]);
        sub_80C08FC(&gStringVar3, (_BYTE *)(v0 + 4), *(_BYTE *)(v0 + 3));
        if ( *(_BYTE *)(v0 + 15) == 1 )
          v20387E8 = 5;
        else
          v20387E8 = 1;
        break;
      case 1u:
        v20387E8 = 2;
        break;
      case 2u:
        v2 = itemid_get_item(*(_BYTE *)(36 * v202E8CC + 0x2027E7B));
        StringCopy(&gStringVar2, v2);
        sub_80BF088(2u, *(_BYTE *)(v0 + 18));
        if ( (unsigned int)*(_BYTE *)(v0 + 18) > 3 )
          v20387E8 = 4;
        else
          v20387E8 = 3;
        break;
      case 3u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6E));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 16)]);
        sub_80C08FC(&gStringVar3, (_BYTE *)(v0 + 4), *(_BYTE *)(v0 + 3));
        goto _080C150A;
      case 4u:
        v20387E8 = 6;
        break;
      case 5u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6E));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 16)]);
_080C150A:
        v20387E8 = 6;
        break;
      case 6u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6E));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 16)]);
        sub_80C08FC(&gStringVar3, (_BYTE *)(v0 + 4), *(_BYTE *)(v0 + 3));
        v20387E8 += (Random() & 3) + 1;
        break;
      case 7u:
      case 8u:
        StringCopy(&gStringVar1, &gSpeciesNames[11 * *(_WORD *)(36 * v202E8CC + 0x2027E7C)]);
        sub_80C08FC(&gStringVar2, (_BYTE *)(v0 + 4), *(_BYTE *)(v0 + 3));
        sub_80BF638(2u, *(_WORD *)(v0 + 16));
        goto _080C15C2;
      case 9u:
      case 0xAu:
        StringCopy(&gStringVar1, &gSpeciesNames[11 * *(_WORD *)(36 * v202E8CC + 0x2027E7C)]);
        sub_80C08FC(&gStringVar2, (_BYTE *)(v0 + 4), *(_BYTE *)(v0 + 3));
_080C15C2:
        v20387E8 = 11;
        break;
      case 0xBu:
        TVShowDone(33785832);
        break;
      default:
        break;
    }
  }
  box_related_two__2((int)*(&gUnknown_083D14C0 + v1));
  return v4;
}
