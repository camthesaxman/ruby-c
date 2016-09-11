_WORD *__fastcall sub_80BEC10(int a1)
{
  int v1; // r0@1
  _WORD *result; // r0@1

  v1 = (4 * a1 & 0x3FF) + 33707828;
  *(_BYTE *)(v1 + 10940) = 0;
  *(_BYTE *)(v1 + 10941) = 0;
  result = (_WORD *)(v1 + 10942);
  *result = 0;
  return result;
}
