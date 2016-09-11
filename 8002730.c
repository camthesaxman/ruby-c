_BYTE *__fastcall SetSubspriteTables(int a1, int a2)
{
  _BYTE *result; // r0@1

  *(_DWORD *)(a1 + 24) = a2;
  result = (_BYTE *)(a1 + 66);
  *result = 64;
  return result;
}
