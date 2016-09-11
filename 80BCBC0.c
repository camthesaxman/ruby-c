int __fastcall sub_80BCBC0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  sub_80BC7D8(v1);
  dword_3004B20[10 * v1] = (int)sub_80BC824;
  return v3;
}
