int __fastcall sub_8124E2C(int a1, _WORD *a2, unsigned __int8 a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r4@1
  int v7; // r7@1
  _WORD *v8; // r2@2
  unsigned int v9; // r3@2
  int v11; // [sp+10h] [bp-4h]@0

  v6 = 0;
  v7 = a1 + 2 * ((32 * a4 & 0x1FFF) + a3);
  if ( a6 > 0u )
  {
    do
    {
      v8 = (_WORD *)(v7 + (v6 << 6));
      v9 = 0;
      for ( LOBYTE(v6) = v6 + 1; v9 < a5; v9 = (v9 + 1) & 0xFF )
      {
        *v8 = *a2;
        ++a2;
        ++v8;
      }
      v6 = (unsigned __int8)v6;
    }
    while ( (unsigned __int8)v6 < (unsigned int)a6 );
  }
  return v11;
}
