int sub_80BC474()
{
  int v0; // r4@1
  unsigned int v1; // r6@1
  int v2; // r2@2
  __int16 v3; // r0@4
  unsigned int v4; // r1@4
  __int16 *v5; // r3@5
  int v7; // [sp+10h] [bp-4h]@0

  v0 = v202E82C;
  v1 = 0;
  if ( (unsigned int)*(_BYTE *)(v202E82C + 3) > 0 )
  {
    while ( 1 )
    {
      v2 = 12 * v1 + *(_DWORD *)(v202E82C + 16);
      if ( *(_BYTE *)(v2 + 5) == 8 && v202713C == *(_DWORD *)(v2 + 8) )
        break;
      v1 = (v1 + 1) & 0xFFFF;
      if ( v1 >= *(_BYTE *)(v202E82C + 3) )
        return v7;
    }
    v3 = MapGridGetMetatileIdAt(*(_WORD *)v2 + 7, *(_WORD *)(v2 + 2) + 7);
    v4 = 0;
    while ( 1 )
    {
      v5 = &gUnknown_083D1358[2 * v4];
      if ( (unsigned __int16)v5[1] == v3 )
        break;
      v4 = (v4 + 1) & 0xFFFF;
      if ( v4 > 6 )
        goto _080BC4C6;
    }
    MapGridSetMetatileIdAt(
      *(_WORD *)(12 * v1 + *(_DWORD *)(v0 + 16)) + 7,
      *(_WORD *)(12 * v1 + *(_DWORD *)(v0 + 16) + 2) + 7,
      *v5 | 0xC00);
_080BC4C6:
    DrawWholeMapView();
  }
  return v7;
}
