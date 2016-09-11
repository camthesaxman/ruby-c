int DoTVShowPokemonTodayFailedCapture()
{
  int v0; // r4@1
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = 36 * v202E8CC + 33717868;
  v202E8DC = 0;
  v1 = v20387E8;
  if ( v20387E8 <= 6u )
  {
    switch ( v20387E8 )
    {
      case 0u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6E));
        StringCopy(&gStringVar2, &gSpeciesNames[11 * *(_WORD *)(v0 + 12)]);
        v20387E8 = 1;
        break;
      case 1u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6E));
        sub_80FBFB4(&gStringVar2, *(_BYTE *)(v0 + 18), 0);
        StringCopy(&gStringVar3, &gSpeciesNames[11 * *(_WORD *)(v0 + 14)]);
        if ( *(_BYTE *)(v0 + 17) == 1 )
          v20387E8 = 3;
        else
          v20387E8 = 2;
        break;
      case 2u:
      case 3u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6E));
        sub_80BF088(1u, *(_BYTE *)(v0 + 16));
        if ( (unsigned __int16)Random() % 3u << 16 )
          v20387E8 = 4;
        else
          v20387E8 = 5;
        break;
      case 4u:
      case 5u:
        sub_80C08FC(&gStringVar1, (_BYTE *)(36 * v202E8CC + 33717887), *(_BYTE *)(36 * v202E8CC + 0x2027E6E));
        v20387E8 = 6;
        break;
      case 6u:
        TVShowDone(33785832);
        break;
      default:
        break;
    }
  }
  box_related_two__2((int)*(&gUnknown_083D15D0 + v1));
  return v3;
}
