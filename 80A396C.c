int __fastcall sub_80A396C(int a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned int v4; // r7@1
  int v5; // r2@1
  int v6; // r5@1
  unsigned int v7; // r1@2
  unsigned int v8; // r1@4
  int v10; // [sp+10h] [bp-4h]@0

  v4 = a3;
  v5 = a1 + ((a2 + 2) << 6) + 28;
  v6 = (a2 + 1) & 0xFF;
  if ( v4 > a2 )
  {
    do
    {
      v7 = 0;
      do
      {
        *(_WORD *)(2 * v7 + v5) = a4;
        v7 = (v7 + 1) & 0xFFFF;
      }
      while ( v7 <= 0xE );
      v5 += 64;
      v8 = v6;
      v6 = (unsigned __int8)(v6 + 1);
    }
    while ( v4 > v8 );
  }
  return v10;
}
