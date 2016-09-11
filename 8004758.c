int __fastcall FillWindowRect(int a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  __int16 v6; // r12@1
  unsigned int v7; // r8@1
  unsigned int v8; // r2@1
  int v9; // r4@1
  int v10; // r3@1
  unsigned int i; // r1@2
  unsigned int v12; // r1@4
  int v14; // [sp+18h] [bp-4h]@0

  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = *(_DWORD *)(a1 + 40) + (a4 << 6);
  v10 = (a4 + 1) & 0xFF;
  if ( v8 <= a6 )
  {
    do
    {
      for ( i = v7; i <= a5; i = (i + 1) & 0xFF )
        *(_WORD *)(2 * i + v9) = v6;
      v9 += 64;
      v12 = v10;
      v10 = (unsigned __int8)(v10 + 1);
    }
    while ( v12 <= a6 );
  }
  return v14;
}
