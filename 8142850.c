int __fastcall sub_8142850(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  CpuSet(33746632, 33745608, 512);
  BeginNormalPaletteFade(-1, 8, 0, 0x10u, 0);
  dword_3004B20[10 * v1] = (int)sub_81428A0;
  return v3;
}
