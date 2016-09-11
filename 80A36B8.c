int __fastcall sub_80A36B8(int a1, unsigned __int8 a2, int a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r8@1
  int v6; // r7@2
  int v7; // r1@3
  unsigned __int16 i; // r4@3
  int v10; // [sp+14h] [bp-4h]@0

  v5 = a2;
  a3 = (unsigned __int8)a3;
  if ( a3 <= a3 + a5 )
  {
    v6 = a3 + a5;
    do
    {
      v7 = v5;
      for ( i = a3 + 1; v7 <= v5 + a4; v7 = (v7 + 1) & 0xFFFF )
        *(_WORD *)(2 * (v7 + 32 * a3) + a1) = 0;
      a3 = (unsigned __int16)(a3 + 1);
    }
    while ( i <= v6 );
  }
  return v10;
}
