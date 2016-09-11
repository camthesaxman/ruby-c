signed int sub_80C5F98()
{
  int v0; // r2@1
  signed int v1; // r0@1
  __int16 v2; // r0@7
  int v3; // r1@8
  int v4; // r0@12

  v0 = v20387EC;
  v1 = *(_WORD *)(v20387EC + 8);
  if ( v1 == 1 )
  {
    if ( *(_WORD *)(v20387EC + 10) == 8 )
    {
      BlendPalettes(0xFFFFFFFF, 0x10u, 0);
      v3 = v20387EC;
      goto _080C6000;
    }
  }
  else
  {
    if ( v1 > 1 )
    {
      if ( v1 == 2 )
      {
        v4000050 = 0;
        v4000054 = 0;
        FreeSpriteTilesByTag(*v20387EC);
        v4 = FreeSpritePaletteByTag(*(_WORD *)(v20387EC + 2));
        ClearGpuRegBits(v4);
        ++*(_WORD *)(v20387EC + 8);
      }
      return 1;
    }
    if ( *(_WORD *)(v20387EC + 8) )
      return 1;
    v2 = *(_WORD *)(v20387EC + 12) - *(_WORD *)(v20387EC + 6);
    *(_WORD *)(v20387EC + 12) = v2;
    if ( v2 <= 1 )
    {
      BlendPalettes(*(_DWORD *)(v0 + 16), 0x10u, -1);
      SetHBlankCallback((int)sub_80C603C);
      v3 = v20387EC;
      *(_WORD *)(v20387EC + 12) = 1;
_080C6000:
      ++*(_WORD *)(v3 + 8);
      return 0;
    }
  }
  return 0;
}
