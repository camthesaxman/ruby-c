int __fastcall LoadFontDefaultPalette(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  LoadPalette(&gFontDefaultPalette, 16 * *(_BYTE *)(a1 + 4), 32);
  return v2;
}
