int *__fastcall sub_8102DEC(unsigned __int8 a1)
{
  _BYTE *v1; // r0@1
  int *result; // r0@1

  v1 = (_BYTE *)(a1 + 33554490);
  LOWORD(dword_3004B20[10 * *v1 + 2]) = 1;
  result = &dword_3004B20[10 * *v1];
  *((_WORD *)result + 18) = 1;
  return result;
}
