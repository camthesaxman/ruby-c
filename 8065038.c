int __fastcall DrawTextWindowInternal(int a1, unsigned __int16 a2, unsigned int a3, int a4, unsigned __int8 a5, unsigned __int8 a6)
{
  int v6; // r7@1
  int v7; // r9@1
  unsigned int v8; // r3@1
  unsigned int v9; // r5@1
  unsigned int v10; // r10@1
  unsigned int v11; // r1@1
  unsigned int v12; // r1@3
  unsigned int v13; // r6@5
  unsigned int v14; // r3@5
  unsigned int v15; // r5@7
  unsigned int v16; // r0@7
  int v17; // r3@9
  unsigned int v18; // r2@9
  unsigned int v19; // r1@10
  unsigned int v20; // r3@12
  int v21; // r10@12
  unsigned int v22; // r8@13
  unsigned int v23; // r12@13
  int v24; // r1@14
  unsigned int v25; // r2@14
  int v26; // r5@14
  unsigned int v27; // r2@17
  unsigned int v28; // r1@18
  unsigned int v30; // [sp+0h] [bp-3Ch]@3
  int v31; // [sp+38h] [bp-4h]@0

  v6 = a1;
  v7 = a2;
  a3 = (unsigned __int8)a3;
  v8 = a4 << 24;
  v9 = v8 >> 24;
  v10 = v8 >> 24;
  v11 = a5;
  if ( a5 > (unsigned int)(unsigned __int8)a3 )
    v11 = a3;
  v30 = v11;
  v12 = a3;
  if ( a3 < a5 )
    v12 = a5;
  v13 = v12;
  v14 = a6;
  if ( a6 > v9 )
    v14 = v9;
  v15 = v14;
  v16 = v10;
  if ( v10 < a6 )
    v16 = a6;
  v17 = 32 * v14;
  *(_WORD *)(2 * (32 * v15 + v30) + v6) = v7 | 0xE000;
  v18 = (v30 + 1) & 0xFF;
  if ( v18 < v12 )
  {
    v19 = (v7 + 1) | 0xFFFFE000;
    do
    {
      *(_WORD *)(2 * (v17 + v18) + v6) = v19;
      v18 = (v18 + 1) & 0xFF;
    }
    while ( v18 < v13 );
  }
  *(_WORD *)(2 * (v17 + v13) + v6) = (v7 + 2) | 0xE000;
  v20 = (unsigned __int8)(v15 + 1);
  v21 = 32 * v16;
  if ( v20 < v16 )
  {
    v22 = (v7 + 3) | 0xFFFFE000;
    v23 = (v7 + 5) | 0xFFFFE000;
    do
    {
      v24 = 32 * v20;
      *(_WORD *)(2 * (32 * v20 + v30) + v6) = v22;
      v25 = (unsigned __int8)(v30 + 1);
      v26 = 32 * v20;
      for ( LOBYTE(v20) = v20 + 1; v25 < v13; v25 = (v25 + 1) & 0xFF )
        *(_WORD *)(2 * (v24 + v25) + v6) = (v7 + 4) | 0xE000;
      *(_WORD *)(2 * (v26 + v13) + v6) = v23;
      v20 = (unsigned __int8)v20;
    }
    while ( (unsigned __int8)v20 < v16 );
  }
  *(_WORD *)(2 * (v30 + v21) + v6) = (v7 + 6) | 0xE000;
  v27 = (unsigned __int8)(v30 + 1);
  if ( v27 < v13 )
  {
    v28 = (v7 + 7) | 0xFFFFE000;
    do
    {
      *(_WORD *)(2 * (v21 + v27) + v6) = v28;
      v27 = (v27 + 1) & 0xFF;
    }
    while ( v27 < v13 );
  }
  *(_WORD *)(2 * (v21 + v13) + v6) = (v7 + 8) | 0xE000;
  return v31;
}
