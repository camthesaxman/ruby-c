signed int __fastcall sub_809D034(int a1, unsigned __int16 a2, unsigned __int16 a3, int a4, unsigned __int16 a5, unsigned __int16 a6, __int16 a7, __int16 a8)
{
  int v8; // r10@1
  int v9; // r6@1
  _DWORD *v10; // r2@1
  unsigned int v11; // r1@1
  int v12; // r2@2
  signed int result; // r0@2

  v8 = a2;
  v9 = a3;
  v10 = (_DWORD *)v20384EC;
  v11 = *(_BYTE *)(v20384EC + 4);
  if ( v11 >= *(_BYTE *)(v20384EC + 5) )
  {
    result = 0;
  }
  else
  {
    ++*(_BYTE *)(v20384EC + 4);
    v12 = *v10 + 16 * v11;
    *(_WORD *)(v12 + 8) = 2 * a7;
    *(_DWORD *)(v12 + 4) = (v9 << 6) + a1 + 2 * v8;
    *(_DWORD *)v12 = (a6 << 6) + a4 + 2 * a5;
    *(_WORD *)(v12 + 10) = a8;
    *(_DWORD *)(v12 + 12) = sub_809D0BC;
    result = 1;
  }
  return result;
}
