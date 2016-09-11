int __fastcall sub_80A6A84(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r4@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 10 * a1;
  sub_80A4DA4((int)gBG1TilemapBuffer);
  itemid_copy_name(v203855E, &gStringVar1);
  ConvertIntToDecimalStringN((char *)&gStringVar2, *(_WORD *)&byte_3004B28[v2 * 4 + 2], 0, 3);
  MenuZeroFillWindowRect(7u, 6u, 0xBu, 0xDu);
  sub_80A7528(7);
  sub_80A3D5C(v1);
  dword_3004B20[v2] = (int)sub_80A5E1C;
  return v4;
}
