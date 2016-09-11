int __fastcall sub_8143F3C(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r0@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8144130();
  ResetPaletteFade();
  sub_8145128(0, 14336, 0);
  ResetSpriteData();
  FreeAllSpritePalettes();
  BeginNormalPaletteFade(-1, 8, 0x10u, 0, 0);
  v4000008 = 1792;
  v4000200 |= 1u;
  v4000004 |= 8u;
  v4000000 = 320;
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 4) = 256;
  *v2 = (int)sub_8143FDC;
  return v4;
}
