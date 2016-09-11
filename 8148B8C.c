int __fastcall load_intro_part2_graphics(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@3
  int v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  LZ77UnCompVram(&gUnknown_0841225C, 100679680);
  LZ77UnCompVram(&gUnknown_084126DC, 100694016);
  LoadPalette((int)&gUnknown_084121FC, 240, 32);
  if ( v1 && v1 == 1 )
  {
    LZ77UnCompVram(&gUnknown_08413340, 100663296);
    LZ77UnCompVram(&gUnknown_084139C8, 100675584);
    LoadPalette((int)&gUnknown_08413300, 0, 32);
    LoadCompressedObjectPic((_DWORD *)"ì<A\b");
    v3 = LoadPalette((int)&gUnknown_08413CCC, 256, 32);
    sub_8149264(v3);
  }
  else
  {
    LZ77UnCompVram(&gUnknown_084128D8, 100663296);
    LZ77UnCompVram(&gUnknown_08412EB4, 100675584);
    LoadPalette((int)&gUnknown_08412818, 0, 96);
    LoadCompressedObjectPic((_DWORD *)"Ä1A\b");
    v2 = LoadPalette((int)&gUnknown_08413184, 256, 32);
    sub_8149248(v2);
  }
  v203935C = 0;
  gReservedSpritePaletteCount = 8;
  return v5;
}
