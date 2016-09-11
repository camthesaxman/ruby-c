int __fastcall sub_8043740(__int16 a1, int a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r5@1
  int v5; // r10@1
  int v6; // r3@1
  signed int v7; // r0@2
  int v8; // r3@3
  signed int v9; // r1@6
  int v10; // r2@7
  unsigned int v11; // r3@11
  unsigned int v12; // r1@11
  signed int v13; // r1@12
  signed int v14; // r2@12
  char *v15; // r5@12
  signed int v16; // r3@13
  signed int v17; // r0@15
  unsigned int v18; // r3@17
  int v19; // r2@18
  char *v20; // r5@18
  unsigned int v21; // r3@18
  int v22; // r1@19
  int v23; // r2@20
  signed int v24; // r0@21
  unsigned __int8 v26; // [sp+0h] [bp-24h]@2
  int v27; // [sp+20h] [bp-4h]@22

  v3 = a2;
  LOWORD(v4) = a1;
  v5 = a3;
  LOBYTE(v6) = 0;
  do
  {
    *(&v26 + (char)v6) = 0;
    v7 = ((char)v6 + 1) << 24;
    v6 = ((char)v6 + 1) & 0xFF;
  }
  while ( v7 >> 24 <= 3 );
  v8 = 3;
  while ( (signed __int16)v4 > 0 )
  {
    *(&v26 + (char)v8) = (signed __int16)v4 % 10;
    v4 = (signed __int16)v4 / 10 & 0xFFFF;
    v8 = ((char)v8 - 1) & 0xFF;
  }
  v9 = v8 << 24;
  if ( (char)v8 > -1 )
  {
    do
    {
      *(&v26 + (v9 >> 24));
      *(&v26 + (v9 >> 24)) = -1;
      v10 = (v9 >> 24) - 1;
      v9 = v10 << 24;
    }
    while ( (char)v10 > -1 );
  }
  if ( *(&v26 + 3) == 255 )
    *(&v26 + 3) = 0;
  if ( v5 )
  {
    v18 = 0;
    do
    {
      v19 = (char)v18;
      v20 = (char *)(&v26 + (char)v18);
      v21 = v18 << 24;
      if ( (unsigned __int8)*v20 == 255 )
      {
        v22 = 2 * v19 + v3;
        *(_WORD *)v22 = *(_WORD *)v22 & 0xFC00 | 0x1E;
        *(_WORD *)(v22 + 64) = *(_WORD *)(v22 + 64) & 0xFC00 | 0x1E;
      }
      else
      {
        v23 = 2 * v19 + v3;
        *(_WORD *)v23 = *(_WORD *)v23 & 0xFC00 | ((unsigned __int8)*v20 + 20);
        *(_WORD *)(v23 + 64) = *(_WORD *)(v23 + 64) & 0xFC00 | ((unsigned __int8)*v20 + 52);
      }
      v24 = v21 + 0x1000000;
      v18 = (v21 + 0x1000000) >> 24;
    }
    while ( v24 >> 24 <= 3 );
  }
  else
  {
    v11 = 0;
    v12 = 0;
    do
    {
      v13 = v12 << 24;
      v14 = v13 >> 24;
      v15 = (char *)(&v26 + (v13 >> 24));
      if ( (unsigned __int8)*v15 == 255 )
      {
        *(_WORD *)(2 * v14 + v3) = *(_WORD *)(2 * v14 + v3) & 0xFC00 | 0x1E;
        v16 = v11 << 24;
        *(_WORD *)((v16 >> 23) + v3 + 64) = *(_WORD *)((v16 >> 23) + v3 + 64) & 0xFC00 | 0x1E;
      }
      else
      {
        *(_WORD *)(2 * v14 + v3) = *(_WORD *)(2 * v14 + v3) & 0xFC00 | ((unsigned __int8)*v15 + 20);
        *(_WORD *)(2 * (char)v11 + v3 + 64) = *(_WORD *)(2 * (char)v11 + v3 + 64) & 0xFC00 | (*(&v26 + (char)v11) + 52);
        v16 = v11 << 24;
      }
      v12 = (unsigned int)(v13 + 0x1000000) >> 24;
      v17 = v16 + 0x1000000;
      v11 = (unsigned int)(v16 + 0x1000000) >> 24;
    }
    while ( v17 >> 24 <= 3 );
  }
  return v27;
}
