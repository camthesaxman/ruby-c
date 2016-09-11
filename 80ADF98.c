int __fastcall sub_80ADF98(unsigned __int8 a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  DestroyTask(a1);
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  dword_3004B20[10 * v201920C] = (int)sub_80ADFD8;
  return v2;
}
