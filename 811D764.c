int __fastcall sub_811D764(int a1, __int16 a2, __int16 a3, __int16 a4)
{
  int v4; // r9@1
  __int16 v5; // r5@1
  __int16 v6; // r4@1
  unsigned int v7; // r1@1
  unsigned int v8; // r5@2
  int v9; // r10@2
  __int16 v10; // r4@2
  __int16 v11; // r0@2
  int v12; // r6@2
  int v13; // r7@2
  signed int v14; // r8@2
  int v15; // r1@2
  int v16; // r6@10
  signed int v17; // r4@10
  __int16 v18; // r0@10
  int v19; // r2@10
  int v20; // r3@10
  signed int v21; // r1@14
  signed int v22; // r3@14
  signed int v23; // r5@14
  int v24; // r2@15
  int v25; // r1@16
  signed int v26; // r1@17
  signed int v27; // r4@21
  __int16 v29; // [sp+0h] [bp-34h]@1
  __int16 v30; // [sp+4h] [bp-30h]@1
  int v31; // [sp+8h] [bp-2Ch]@1
  unsigned int v32; // [sp+10h] [bp-24h]@2
  int v33; // [sp+30h] [bp-4h]@0

  v4 = a1;
  v29 = a2;
  v5 = a3;
  v6 = a4;
  memset(a1, 10, 320);
  v7 = 0;
  v30 = v6;
  v31 = v5;
  do
  {
    v8 = v7 << 16;
    v9 = (signed __int16)v7;
    v10 = sine((signed __int16)v7, v30);
    v11 = cosine(v9, v30);
    v12 = (v29 + v10) & 0xFFFF;
    v13 = (v31 - v11) & 0xFFFF;
    v14 = (v31 + v11) & 0xFFFF;
    v15 = (v29 - v10) & 0xFFFF;
    v32 = v8;
    if ( (v29 - v10) & 0x8000 )
      v15 = 0;
    if ( (signed __int16)(v29 + v10) > 240 )
      v12 = 240;
    if ( ((_WORD)v31 - v11) & 0x8000 )
      v13 = 0;
    if ( (signed __int16)(v31 + v11) > 159 )
      v14 = 159;
    v16 = v12 | (v15 << 8) & 0xFFFF;
    *(_WORD *)(2 * (signed __int16)v13 + v4) = v16;
    v17 = v14 << 16;
    *(_WORD *)((v14 << 16 >> 15) + v4) = v16;
    v18 = cosine((signed __int16)(v9 + 1), v30);
    v19 = (v31 + v18) & 0xFFFF;
    v20 = (v31 - v18) & 0xFFFF;
    if ( (v31 - v18) & 0x8000 )
      v20 = 0;
    if ( (signed __int16)(v31 + v18) > 159 )
      v19 = 159;
    v21 = (signed __int16)v20;
    v22 = v20 << 16;
    v23 = v19 << 16;
    if ( (signed __int16)v13 > v21 )
    {
      v24 = v21;
      do
      {
        v25 = (v13 << 16) - 0x10000;
        *(_WORD *)((v25 >> 15) + v4) = v16;
        v13 = (unsigned int)v25 >> 16;
      }
      while ( v25 >> 16 > v24 );
    }
    v26 = v13 << 16;
    if ( v13 << 16 < v22 )
    {
      do
      {
        *(_WORD *)(((v26 + 0x10000) >> 15) + v4) = v16;
        v26 += 0x10000;
      }
      while ( v26 >> 16 < v22 >> 16 );
    }
    if ( v14 << 16 > v23 )
    {
      do
      {
        v14 = (unsigned int)(v17 - 0x10000) >> 16;
        *(_WORD *)(((v17 - 0x10000) >> 15) + v4) = v16;
        v17 = v14 << 16;
      }
      while ( (signed __int16)v14 > v23 >> 16 );
    }
    v27 = v14 << 16;
    if ( v14 << 16 < v23 )
    {
      do
      {
        *(_WORD *)(((v27 + 0x10000) >> 15) + v4) = v16;
        v27 += 0x10000;
      }
      while ( v27 >> 16 < v23 >> 16 );
    }
    v7 = (v32 + 0x10000) >> 16;
  }
  while ( (signed int)(v32 + 0x10000) >> 16 <= 63 );
  return v33;
}
