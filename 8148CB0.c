int __fastcall sub_8148CB0(unsigned __int8 a1)
{
  unsigned int v1; // r4@1
  void *v2; // r0@3
  int v3; // r0@5
  int v4; // r0@6
  int v5; // r0@7
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  LZ77UnCompVram(&gUnknown_0841225C, 100679680);
  LZ77UnCompVram(&gUnknown_084126DC, 100694016);
  if ( v1 > 4 )
  {
def_8148CD2:
    LoadPalette((int)&gUnknown_084121FC, 240, 32);
    LZ77UnCompVram(&gUnknown_084128D8, 100663296);
    LZ77UnCompVram(&gUnknown_08412EB4, 100675584);
    LoadPalette((int)&gUnknown_08412818, 0, 96);
    LoadCompressedObjectPic((_DWORD *)"Ä1A\b");
    LZ77UnCompVram(&gUnknown_084131C4, 100728832);
    v2 = &gUnknown_08413184;
_08148D8E:
    v3 = LoadPalette((int)v2, 256, 32);
    sub_8149248(v3);
  }
  else
  {
    switch ( v1 )
    {
      default:
        goto def_8148CD2;
      case 1u:
        LoadPalette((int)&gUnknown_0841221C, 240, 32);
        LZ77UnCompVram(&gUnknown_084128D8, 100663296);
        LZ77UnCompVram(&gUnknown_08412EB4, 100675584);
        LoadPalette((int)&gUnknown_08412878, 0, 96);
        LoadCompressedObjectPic((_DWORD *)"Ä1A\b");
        LZ77UnCompVram(&gUnknown_084131C4, 100728832);
        v2 = &gUnknown_084131A4;
        goto _08148D8E;
      case 2u:
      case 3u:
        LoadPalette((int)&gUnknown_0841221C, 240, 32);
        LZ77UnCompVram(&gUnknown_08413340, 100663296);
        LZ77UnCompVram(&gUnknown_084139C8, 100675584);
        LoadPalette((int)&gUnknown_08413320, 0, 32);
        LoadCompressedObjectPic((_DWORD *)"ì<A\b");
        v4 = LoadPalette((int)&gUnknown_08413320, 256, 32);
        sub_8149264(v4);
        break;
      case 4u:
        LoadPalette((int)&gUnknown_0841223C, 240, 32);
        LZ77UnCompVram(&gUnknown_08413E78, 100663296);
        LZ77UnCompVram(&gUnknown_08414084, 100675584);
        LoadPalette((int)&gUnknown_08413E38, 0, 64);
        LoadCompressedObjectPic((_DWORD *)"0CA\b");
        v5 = LoadPalette((int)&gUnknown_08414064, 256, 32);
        sub_8149280(v5);
        break;
    }
  }
  gReservedSpritePaletteCount = 8;
  v203935C = 0;
  return v7;
}
