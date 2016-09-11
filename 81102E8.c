int sub_81102E8()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = sub_8053108(0x17u);
  ConvertIntToDecimalStringN_DigitWidth6((int)&gStringVar1, v0, 1, 4);
  v1 = sub_8053108(0x18u);
  ConvertIntToDecimalStringN_DigitWidth6((int)gStringVar2, v1, 1, 4);
  v2 = sub_8053108(0x19u);
  ConvertIntToDecimalStringN_DigitWidth6((int)&gStringVar3, v2, 1, 4);
  MenuPrint((int)"нин╩ф", 3, 3u);
  return v4;
}
