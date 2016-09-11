int __fastcall sub_8049514(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r6@1
  int v3; // r5@1
  char *v4; // r2@1

  v2 = 0;
  v3 = 0;
  v4 = (char *)&gTradeNextSelectedMonTable + 24 * a1 + 6 * a2;
  while ( *(_BYTE *)(dword_3004824 + 68 + (unsigned __int8)*v4) != 1 )
  {
    ++v4;
    if ( ++v3 > 5 )
      return v2;
  }
  return (unsigned __int8)*v4;
}
