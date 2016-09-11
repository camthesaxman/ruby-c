int __fastcall sub_8093C38(int a1)
{
  int v1; // r8@1
  int v2; // r0@1
  unsigned int v3; // r7@3
  int v4; // r9@3
  unsigned int v5; // r4@3
  unsigned int v6; // r6@3
  unsigned int v7; // r5@3
  unsigned int v8; // r10@3
  unsigned int v9; // r5@3
  int v10; // r3@3
  signed int v11; // r0@4
  signed int v12; // r2@5
  unsigned int v13; // r7@7
  unsigned int v14; // r1@6
  signed int v15; // r2@6
  signed int v16; // r1@8
  int v18; // [sp+0h] [bp-24h]@3

  v1 = a1;
  v2000004 = 0;
  v2 = *(_WORD *)(a1 + 10) - 3;
  *(_WORD *)(v1 + 10) = v2;
  if ( v2 << 16 <= 0 )
    *(_WORD *)(v1 + 10) = 0;
  v3 = *(_WORD *)(v1 + 10);
  v4 = 160 - v3;
  v5 = 160 - v3 - v3;
  v6 = -65536 * v3;
  v7 = 0xA00000 / v5 - 0x10000;
  v8 = v7 * v5 + -65536 * v3;
  v18 = v7 / v5;
  v9 = v7 >> 1;
  v10 = 0;
  if ( v3 > 0 )
  {
    do
    {
      word_3004DE0[(signed __int16)v10] = -4 - v10;
      v11 = ((signed __int16)v10 + 1) << 16;
      v10 = ((signed __int16)v10 + 1) & 0xFFFF;
    }
    while ( v11 >> 16 < v3 );
  }
  v12 = v10 << 16;
  if ( v10 << 16 < v4 << 16 )
  {
    do
    {
      v14 = v6 >> 16;
      v6 += v9;
      v9 += v18;
      v15 = v12 >> 16;
      word_3004DE0[v15] = v14 - 4;
      v10 = (v15 + 1) & 0xFFFF;
      v12 = (v15 + 1) << 16;
    }
    while ( v12 >> 16 < (signed __int16)v4 );
  }
  v13 = v8 >> 16;
  if ( (signed __int16)v10 <= 159 )
  {
    do
    {
      word_3004DE0[(signed __int16)v10] = v13 - 4;
      v16 = ((signed __int16)v10 + 1) << 16;
      v10 = ((signed __int16)v10 + 1) & 0xFFFF;
    }
    while ( v16 >> 16 <= 159 );
  }
  v2000004 = 1;
  if ( (signed int)*(_WORD *)(v1 + 10) <= 0 )
    ++*(_WORD *)(v1 + 8);
  return 0;
}
