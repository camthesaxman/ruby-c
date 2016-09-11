int __fastcall DrawWindowRect(int a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  __int16 v6; // r6@1
  unsigned int v7; // r8@1
  int v8; // r2@1
  unsigned int i; // r1@1
  int j; // r1@3
  int v11; // r2@6
  unsigned int k; // r1@6
  int v14; // [sp+18h] [bp-4h]@0

  v6 = a2;
  v7 = a3;
  v8 = *(_DWORD *)(a1 + 40) + (a4 << 6);
  for ( i = v7; i <= a5; i = (i + 1) & 0xFF )
    *(_WORD *)(2 * i + v8) = v6;
  for ( j = (a4 + 1) & 0xFF; j < a6 - 1; j = (j + 1) & 0xFF )
  {
    v8 += 64;
    *(_WORD *)(2 * v7 + v8) = v6;
    *(_WORD *)(2 * a5 + v8) = v6;
  }
  if ( a4 != a6 )
  {
    v11 = v8 + 64;
    for ( k = v7; k <= a5; k = (k + 1) & 0xFF )
      *(_WORD *)(2 * k + v11) = v6;
  }
  return v14;
}
