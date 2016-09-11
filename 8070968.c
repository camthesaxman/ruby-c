int __fastcall sub_8070968(int a1, int a2, int a3)
{
  unsigned int v3; // r7@1
  int v5; // [sp+1Ch] [bp-4h]@0

  v3 = 0;
  do
  {
    *(_WORD *)(2 * (v3 + 6) + 0x201B264) = GetMonData(v201C000, (unsigned __int8)gUnknown_08376D1C[v3], a3);
    gStringVar1 = -4;
    byte_20231CD = 20;
    byte_20231CE = 6;
    ConvertIntToDecimalStringN(&byte_20231CF, *(_WORD *)(2 * (v3 + 6) + 0x201B264), 1, 3);
    sub_80729D8(
      &gStringVar1,
      (8 * (((9 * (v3 / 3 & 0xFF) + 11) & 0xFF) + 6) + 6) & 0xFF,
      8 * ((2 * (v3 % 3) + 1) & 0xFF),
      0);
    v3 = (v3 + 1) & 0xFF;
  }
  while ( v3 <= 5 );
  return v5;
}
