int __fastcall sub_80A0958(int a1, int a2, int a3)
{
  int v3; // r8@1
  int v4; // r4@1
  int v5; // r0@1
  _BYTE *v6; // r0@1
  int v7; // r2@1
  signed int v8; // r4@1
  int v9; // r0@1
  _BYTE *v10; // r0@1
  int v12; // [sp+18h] [bp-4h]@0

  v3 = a1;
  v4 = (unsigned __int16)GetMonData(a1, 11, a3);
  v5 = sub_80A1E58(&gStringVar1, 13);
  *(_BYTE *)v5 = -4;
  *(_BYTE *)(v5 + 1) = 17;
  *(_BYTE *)(v5 + 2) = 7;
  *(_BYTE *)(v5 + 3) = -70;
  v6 = StringCopy((_BYTE *)(v5 + 4), &gSpeciesNames[11 * v4]);
  *v6 = -4;
  v6[1] = 19;
  v6[2] = 80;
  v6[3] = -1;
  MenuPrint((int)&gStringVar1, 0, 0xEu);
  MenuZeroFillWindowRect(3u, 0x10u, 9u, 0x11u);
  v8 = (unsigned __int8)GetMonData(v3, 56, v7);
  v9 = sub_80A1E58(&gStringVar1, 13);
  *(_BYTE *)v9 = 52;
  v10 = ConvertIntToDecimalString((_BYTE *)(v9 + 1), v8);
  *v10 = -4;
  v10[1] = 19;
  v10[2] = 32;
  v10[3] = -1;
  MenuPrint((int)&gStringVar1, 3, 0x10u);
  sub_80A0A2C(v3, 7, 16);
  return v12;
}
