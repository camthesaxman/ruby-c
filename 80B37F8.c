int __fastcall sub_80B37F8(unsigned __int8 a1)
{
  int v1; // r6@1
  unsigned __int16 v2; // r4@1
  char v3; // r0@1
  int *v4; // r5@1
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = itemid_get_market_price(*(_WORD *)(2 * ((unsigned __int8)byte_3000713 + (unsigned __int8)byte_3000711)
                                        + dword_300070C));
  v3 = GetPriceReduction(1);
  v4 = &dword_3004B20[10 * v1];
  sub_80B7A94(*((_WORD *)v4 + 5) * ((signed int)v2 >> v3), 6, 6, 11);
  gStringVar1 = -4;
  byte_20231CD = 20;
  byte_20231CE = 6;
  ConvertIntToDecimalStringN(&byte_20231CF, *((_WORD *)v4 + 5), 1, 2);
  MenuPrint((int)&gUnknown_0840E6D0, 1, 0xBu);
  sub_80A3FA0((int)gBG1TilemapBuffer, 1u, 11, 12, 2u, -15391);
  return v6;
}
