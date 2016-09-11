int __fastcall sub_8124E7C(int a1, __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r10@1
  char v7; // r0@1
  int v8; // r4@1
  int v9; // r2@2
  unsigned int v10; // r3@2
  unsigned __int8 i; // r12@2
  int v13; // [sp+0h] [bp-24h]@1
  int v14; // [sp+20h] [bp-4h]@0

  v6 = a1;
  v13 = a3;
  v7 = 0;
  v8 = a4;
  if ( a6 > 0u )
  {
    do
    {
      v9 = v13;
      v10 = 0;
      for ( i = v7 + 1; v10 < a5; v10 = (v10 + 1) & 0xFF )
      {
        *(_WORD *)(2 * v9 + (v8 << 6) + v6) = a2;
        v9 = (v9 + 1 - 32 * ((v9 + 1) >> 5)) & 0xFF;
      }
      v8 = (v8 + 1 - 32 * ((v8 + 1) >> 5)) & 0xFF;
      ++v7;
    }
    while ( i < (unsigned int)a6 );
  }
  return v14;
}
