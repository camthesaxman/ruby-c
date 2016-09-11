signed int __fastcall sub_809D16C(int a1, unsigned __int16 a2, unsigned __int16 a3, __int16 a4, __int16 a5)
{
  int v5; // r6@1
  int v6; // r4@1
  _DWORD *v7; // r1@1
  unsigned int v8; // r2@1
  int v9; // r1@2
  signed int result; // r0@2

  v5 = a2;
  v6 = a3;
  v7 = (_DWORD *)v20384EC;
  v8 = *(_BYTE *)(v20384EC + 4);
  if ( v8 >= *(_BYTE *)(v20384EC + 5) )
  {
    result = 0;
  }
  else
  {
    ++*(_BYTE *)(v20384EC + 4);
    v9 = *v7 + 16 * v8;
    *(_WORD *)(v9 + 8) = 2 * a4;
    *(_DWORD *)(v9 + 4) = 2 * (32 * v6 + v5) + a1;
    *(_WORD *)(v9 + 10) = a5;
    *(_DWORD *)(v9 + 12) = sub_809D1C4;
    result = 1;
  }
  return result;
}
