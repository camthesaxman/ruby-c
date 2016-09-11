int __fastcall SetBackgroundColor(int a1, int a2)
{
  int v2; // r0@1
  int result; // r0@1

  a2 = (unsigned __int8)a2;
  *(_BYTE *)(a1 + 4) = a2;
  dword_30003A4 = (unsigned __int8)a2;
  v2 = ((16 * a2 | a2) << 8) | 16 * a2 | a2;
  result = v2 | (v2 << 16);
  dword_30003A0 = result;
  return result;
}
