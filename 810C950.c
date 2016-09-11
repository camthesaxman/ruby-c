_BYTE *__fastcall sub_810C950(int a1)
{
  int v1; // r0@1
  _BYTE *result; // r0@1

  v1 = (8 * a1 & 0x7FF) + 33707828;
  *(_BYTE *)(v1 + 2040) = 0;
  *(_BYTE *)(v1 + 2041) = 0;
  *(_BYTE *)(v1 + 2042) = 0;
  *(_BYTE *)(v1 + 2043) = 0;
  *(_BYTE *)(v1 + 2044) = 0;
  *(_BYTE *)(v1 + 2045) = 0;
  result = (_BYTE *)(v1 + 2046);
  *result = 0;
  return result;
}
