int __fastcall sub_811A798(signed int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  int v4; // r5@1
  int v5; // r6@1
  unsigned __int8 v6; // r7@1
  unsigned int v7; // r1@1
  int v8; // r6@1
  unsigned int v9; // r1@1
  char *v10; // r4@1
  int v12; // [sp+0h] [bp-24h]@1
  int v13; // [sp+20h] [bp-4h]@3

  v4 = a2;
  v5 = a3;
  v6 = a4;
  ConvertIntToDecimalString(&v12, a1);
  v7 = (6 * v4 + 33 - 8 * (v4 + 2)) << 24;
  v8 = (v5 - (v7 >> 27)) & 0xFF;
  v9 = (v7 & 0x7000000) >> 24;
  v10 = &gStringVar1;
  if ( v9 )
  {
    gStringVar1 = -4;
    byte_20231CD = 17;
    byte_20231CE = 8 - v9;
    v10 = &byte_20231CF;
  }
  *v10 = -4;
  v10[1] = 17;
  v10[2] = 6 * (v4 - StringLength(&v12));
  StringCopy(v10 + 3, &v12);
  MenuPrint((int)&OtherText_Coins2, v8, v6);
  return v13;
}
