int __fastcall sub_8124DDC(int a1, __int16 a2, unsigned __int8 a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  __int16 v6; // r7@1
  int v7; // r1@1
  int v8; // r6@1
  _WORD *v9; // r2@2
  unsigned int v10; // r0@2
  unsigned __int8 i; // r3@2
  int v13; // [sp+10h] [bp-4h]@0

  v6 = a2;
  v7 = 0;
  v8 = a1 + 2 * ((32 * a4 & 0x1FFF) + a3);
  if ( a6 > 0u )
  {
    do
    {
      v9 = (_WORD *)(v8 + (v7 << 6));
      v10 = 0;
      for ( i = v7 + 1; v10 < a5; v10 = (v10 + 1) & 0xFF )
      {
        *v9 = v6;
        ++v9;
      }
      v7 = (unsigned __int8)(v7 + 1);
    }
    while ( i < (unsigned int)a6 );
  }
  return v13;
}
