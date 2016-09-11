int __fastcall sub_8143300(int a1, int a2)
{
  int v2; // r8@1
  unsigned int v3; // r5@1
  int v4; // r6@1
  unsigned int v5; // r4@1
  int v6; // r8@1
  int v7; // r6@1
  _BYTE *v8; // r0@1
  int v10; // [sp+18h] [bp-4h]@0

  v2 = (unsigned __int8)a1;
  v3 = (unsigned int)((a1 << 24) + 0x1000000) >> 24;
  v4 = (unsigned __int8)a2;
  v5 = (unsigned int)((a2 << 24) + 0x1000000) >> 24;
  MenuPrint((int)"»ª«ø", v3, v5);
  v6 = (v2 + 14) & 0xFF;
  sub_8072B4C((_BYTE *)0x2024EA4, v6, v5);
  MenuPrint((int)"√æ»„≠", v3, v4 + 3);
  ConvertIntToDecimalStringN(gStringVar1, v2024EAE | (v2024EAF << 8), 2, 5);
  sub_8072B4C(gStringVar1, v6, v4 + 3);
  v7 = (v4 + 5) & 0xFF;
  MenuPrint((int)&gMainMenuString_Time, v3, v7);
  v8 = ConvertIntToDecimalString(gStringVar1, v2024EB2);
  *v8 = 0;
  v8[1] = -16;
  v8[2] = 0;
  *ConvertIntToDecimalStringN(v8 + 3, v2024EB4, 2, 2) = -1;
  sub_8072B4C(gStringVar1, v6, v7);
  return v10;
}
