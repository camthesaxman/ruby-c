int __fastcall sub_80952E4(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( v202E8F4 )
  {
    sub_809527C(a1);
  }
  else
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v202E8F4);
    dword_3004B20[10 * v1] = (int)sub_8095330;
  }
  return v3;
}
