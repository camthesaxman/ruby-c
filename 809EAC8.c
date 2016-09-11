int __fastcall sub_809EAC8(unsigned __int8 a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( v2018079 != 4 )
  {
    sub_80A1488(-2, 0);
    sub_80A1654(-2, 0);
  }
  sub_80A1B1C(9);
  sub_80A16CC(1);
  MenuZeroFillWindowRect(0xFu, 0xCu, 0x1Cu, 0xDu);
  MenuZeroFillWindowRect(0xBu, 0xFu, 0x1Cu, 0x12u);
  v201807F = 6;
  sub_80A0DD0(6);
  dword_3004B20[10 * v1] = (int)sub_809E19C;
  return v3;
}
