int *__fastcall SetShadowColor(int a1, unsigned __int8 a2)
{
  int *result; // r0@1

  *(_BYTE *)(a1 + 5) = a2;
  result = &sGlyphBuffer;
  dword_30003DC = a2;
  return result;
}
