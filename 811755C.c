int __fastcall sub_811755C(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0x14u, 8u, 0x1Au, 0xDu);
  MenuZeroFillScreen();
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  v202F38C = v202F38C & 0xC0 | v202F390 & 0x3F;
  UpdatePaletteFade();
  dword_3004B20[10 * v1] = (int)sub_8117528;
  return v3;
}
