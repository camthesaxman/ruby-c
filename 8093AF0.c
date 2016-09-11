int __fastcall sub_8093AF0(int a1)
{
  int v1; // r8@1
  int v2; // r2@1
  __int16 v3; // r0@1
  unsigned int v4; // r7@3
  int v5; // r9@3
  unsigned int v6; // r4@3
  unsigned int v7; // r6@3
  unsigned int v8; // r5@3
  unsigned int v9; // r10@3
  int v10; // r5@3
  int v11; // r3@3
  signed int v12; // r0@4
  signed int v13; // r2@5
  unsigned int v14; // r7@7
  unsigned int v15; // r1@6
  signed int v16; // r2@6
  signed int v17; // r1@8
  int v19; // [sp+0h] [bp-24h]@3

  v1 = a1;
  v2000004 = 0;
  v2 = a1;
  v3 = *(_WORD *)(a1 + 10) + 3;
  *(_WORD *)(v2 + 10) = v3;
  if ( v3 > 79 )
    *(_WORD *)(v2 + 10) = 79;
  v4 = *(_WORD *)(v1 + 10);
  v5 = 160 - v4;
  v6 = 160 - v4 - v4;
  v7 = -65536 * v4;
  v8 = 0xA00000 / v6 - 0x10000;
  v9 = v8 * v6 + -65536 * v4;
  v19 = v8 / v6;
  v10 = 2 * v8;
  v11 = 0;
  if ( v4 > 0 )
  {
    do
    {
      word_3004DE0[(signed __int16)v11] = -4 - v11;
      v12 = ((signed __int16)v11 + 1) << 16;
      v11 = ((signed __int16)v11 + 1) & 0xFFFF;
    }
    while ( v12 >> 16 < v4 );
  }
  v13 = v11 << 16;
  if ( v11 << 16 < v5 << 16 )
  {
    do
    {
      v15 = v7 >> 16;
      v7 += v10;
      v10 -= v19;
      v16 = v13 >> 16;
      word_3004DE0[v16] = v15 - 4;
      v11 = (v16 + 1) & 0xFFFF;
      v13 = (v16 + 1) << 16;
    }
    while ( v13 >> 16 < (signed __int16)v5 );
  }
  v14 = v9 >> 16;
  if ( (signed __int16)v11 <= 159 )
  {
    do
    {
      word_3004DE0[(signed __int16)v11] = v14 - 4;
      v17 = ((signed __int16)v11 + 1) << 16;
      v11 = ((signed __int16)v11 + 1) & 0xFFFF;
    }
    while ( v17 >> 16 <= 159 );
  }
  v2000004 = 1;
  if ( (signed int)*(_WORD *)(v1 + 10) > 74 )
    ++*(_WORD *)(v1 + 8);
  return 0;
}
