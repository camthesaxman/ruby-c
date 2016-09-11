int __fastcall sub_80A1F98(signed int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, char a5, __int16 a6, unsigned __int8 a7)
{
  unsigned __int8 v7; // r8@1
  int v9; // [sp+20h] [bp-4h]@0

  v7 = a2;
  ConvertIntToDecimalStringN(&gStringVar1, a1, a4, a3);
  sub_80A1EF8(&gStringVar1, v7, a5, a6, a7);
  return v9;
}
