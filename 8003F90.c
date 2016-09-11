int *__fastcall SetForegroundColor(int a1, unsigned __int8 a2)
{
  int *result; // r0@1

  *(_BYTE *)(a1 + 3) = a2;
  result = &dword_30003E0;
  dword_30003E0 = a2;
  return result;
}
