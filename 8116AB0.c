int __fastcall sub_8116AB0(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8124D3C(33657016, 0xFFFF);
  sub_8124918(33657016);
  v2025BC8 = HIWORD(dword_3004B20[10 * v1 + 8]);
  v202E8CC = v2025BC8 < (unsigned int)v2019019;
  BeginHardwarePaletteFade(0xFFu, 0, 0, 0x10u, 0);
  dword_3004B20[10 * v1] = (int)sub_8116B40;
  return v3;
}
