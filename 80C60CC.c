int __fastcall sub_80C60CC(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  unsigned __int16 *v3; // r1@2
  __int16 v4; // r0@2
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) + *(_WORD *)(a1 + 32);
  *(_WORD *)(v1 + 32) = v2;
  if ( (unsigned int)((v2 + 8) << 16) > 0x1000000 )
  {
    DestroySprite(v1);
    v3 = (unsigned __int16 *)v20387EC;
    v4 = *(_WORD *)(v20387EC + 10) + 1;
    *(_WORD *)(v20387EC + 10) = v4;
    if ( v4 == 8 )
    {
      FreeSpriteTilesByTag(*v3);
      FreeSpritePaletteByTag(*(_WORD *)(v20387EC + 2));
      BlendPalettes(*(_DWORD *)(v20387EC + 16), 0, -1);
      SetHBlankCallback((int)sub_80C6078);
    }
  }
  return v6;
}
