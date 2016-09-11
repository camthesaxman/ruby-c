int __fastcall sub_80B43F0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  dword_300485C = (int)sub_80B3050;
  BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
  dword_3004B20[10 * v1] = (int)Task_ExitBuyMenu;
  return v3;
}
