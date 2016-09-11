int __fastcall ItemUseOutOfBattle_CoinCase(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int16 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = GetCoins();
  ConvertIntToDecimalStringN(&gStringVar1, v2, 0, 4);
  StringExpandPlaceholders(&gStringVar4, (unsigned __int8 *)"׃דיז");
  if ( LOWORD(dword_3004B20[10 * v1 + 3]) )
  {
    DisplayItemMessageOnField(v1, &gStringVar4, sub_80A5C9C, 0);
  }
  else
  {
    MenuZeroFillWindowRect(0, 0xDu, 0xDu, 0x14u);
    DisplayItemMessageOnField(v1, &gStringVar4, sub_80A5C48, 1);
  }
  return v4;
}
