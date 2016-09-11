int __fastcall sub_8040048(int a1)
{
  int v1; // r6@1
  int v2; // r5@1
  int v3; // r0@1
  unsigned __int16 v4; // r0@4
  int v5; // r5@4
  int v6; // r4@4
  int v7; // r0@6
  char v9; // [sp+0h] [bp-14h]@7
  int v10; // [sp+10h] [bp-4h]@11

  v1 = a1;
  v2 = (unsigned __int16)Random(a1);
  v3 = 0x4000;
  if ( v2 == 0x4000 || (v3 = 0x8000, v2 == 0x8000) || (v3 = 49152, v2 == 49152) )
  {
    do
    {
      do
      {
        v4 = (unsigned __int16)Random(v3) % 6u;
        v5 = v4;
        v6 = v1 + 100 * v4;
        v3 = GetMonData(v6, 11, 0);
      }
      while ( !v3 );
      v3 = GetMonData(v6, 45, 0);
    }
    while ( v3 );
    v7 = sub_8040178(v1, LOBYTE(gBitTable[v5])) << 24;
    if ( !v7 )
    {
      do
      {
        v7 = (unsigned __int8)Random(v7);
        v9 = v7;
      }
      while ( !v7 );
      if ( v9 & 0xF0 )
        v9 &= 7u;
      v9 = ((v9 | 16 * v9) & 0xF3) + 1;
      SetMonData(v1 + 100 * v5, 34, (int)&v9);
    }
  }
  return v10;
}
