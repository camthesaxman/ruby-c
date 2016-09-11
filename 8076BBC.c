int sub_8076BBC()
{
  int result; // r0@1

  result = *(_BYTE *)(++v202F7A4 + 3) << 24;
  v202F7A4 = *v202F7A4 + (*(_BYTE *)(v202F7A4 + 1) << 8) + (*(_BYTE *)(v202F7A4 + 2) << 16) + result;
  return result;
}
