int __fastcall sub_809F9D0(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  _BYTE *v3; // r2@1
  int v5; // [sp+Ch] [bp-4h]@0

  v2 = 10 * a1;
  v3 = &byte_3004B28[v2 * 4];
  *((_WORD *)v3 + 14) = 0;
  *((_WORD *)v3 + 15) = a2;
  sub_80A1488(-2, 4);
  sub_80A1654(-2, 4);
  MenuZeroFillWindowRect(0xBu, 0xFu, 0x1Cu, 0x12u);
  MenuPrint((int)&gUnknown_0840F944, 11, 0xFu);
  dword_3004B20[v2] = (int)sub_809F814;
  return v5;
}
