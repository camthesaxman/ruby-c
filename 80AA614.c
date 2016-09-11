int __fastcall sub_80AA614(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int16 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v2 = sub_80AE770(a1, a2);
  ConvertIntToDecimalStringN((char *)0x2000000, v2, 1, 3);
  sub_8003460(33745160, 0x2000000, 226, 3, 0xCu);
  return v4;
}
