int __fastcall sub_806CA18(unsigned __int8 a1, int a2)
{
  int *v2; // r2@1
  int result; // r0@1

  v2 = &dword_3004B20[10 * a1];
  result = *((_BYTE *)v2 + 14) | (a2 << 8) & 0xFFFF;
  *((_WORD *)v2 + 7) = *((_BYTE *)v2 + 14) | (unsigned __int16)((_WORD)a2 << 8);
  return result;
}
