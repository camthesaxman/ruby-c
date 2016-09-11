int sub_80F15A8()
{
  _BYTE *v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  MenuZeroFillWindowRect(0xCu, 0xDu, 0x1Bu, 0x10u);
  v0 = StringCopy((_BYTE *)0x2008788, &gUnknown_08410E8C);
  *v0 = 0;
  *ConvertIntToDecimalStringN(v0 + 1, *(_BYTE *)(4 * v20087DC + 0x200893C), 0, 2) = -1;
  MenuPrint(33589128, 12, 0xDu);
  return v2;
}
