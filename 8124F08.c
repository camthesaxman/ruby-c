int __fastcall sub_8124F08(int a1, _WORD *a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r10@1
  char v7; // r0@1
  _WORD *v8; // r5@1
  int v9; // r4@1
  int v10; // r2@2
  unsigned int v11; // r3@2
  unsigned __int8 i; // r8@2
  int v14; // [sp+0h] [bp-24h]@1
  int v15; // [sp+20h] [bp-4h]@0

  v6 = a1;
  v14 = a3;
  v7 = 0;
  v8 = a2;
  v9 = a4;
  if ( a6 > 0u )
  {
    do
    {
      v10 = v14;
      v11 = 0;
      for ( i = v7 + 1; v11 < a5; v11 = (v11 + 1) & 0xFF )
      {
        *(_WORD *)(2 * v10 + (v9 << 6) + v6) = *v8;
        ++v8;
        v10 = (v10 + 1 - 32 * ((v10 + 1) >> 5)) & 0xFF;
      }
      v9 = (v9 + 1 - 32 * ((v9 + 1) >> 5)) & 0xFF;
      ++v7;
    }
    while ( i < (unsigned int)a6 );
  }
  return v15;
}
