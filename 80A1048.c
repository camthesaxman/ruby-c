int __fastcall sub_80A1048(unsigned __int8 a1)
{
  unsigned __int8 v1; // r8@1
  _BYTE *v2; // r6@1
  int v3; // r0@1
  int v4; // r2@2
  char *v5; // r4@2
  signed int v6; // r5@2
  unsigned int v7; // r2@2
  int v8; // r0@6
  char *v9; // r3@6
  signed int v10; // r4@6
  unsigned int v11; // r1@6
  int v12; // r0@10
  char *v13; // r3@10
  signed int v14; // r4@10
  unsigned int v15; // r1@10
  int v16; // r0@14
  char *v17; // r3@14
  signed int v18; // r4@14
  unsigned int v19; // r1@14
  unsigned int v20; // r4@18
  __int16 v21; // r7@18
  int i; // r12@18
  int v23; // r0@23
  int v25; // [sp+14h] [bp-4h]@0

  v1 = a1;
  v2 = &byte_3004B28[40 * a1];
  v3 = *(_WORD *)v2 + *((_WORD *)v2 + 1);
  *((_WORD *)v2 + 1) = v3;
  if ( v3 << 16 )
  {
    v4 = *((_WORD *)v2 + 1);
    v5 = &gUnknown_08E73508[2 * (586 - v4)];
    v6 = 100721792;
    v7 = 2 * v4;
    if ( v7 > 0x1000 )
    {
      do
      {
        v40000D4 = v5;
        v40000D8 = v6;
        v40000DC = -2147481600;
        v5 += 4096;
        v6 += 4096;
        v7 -= 4096;
      }
      while ( v7 > 0x1000 );
      v40000D4 = v5;
      v40000D8 = v6;
      v40000DC = (v7 >> 1) | 0x80000000;
    }
    else
    {
      v40000D4 = v5;
      v40000D8 = 100721792;
      v40000DC = (v7 >> 1) | 0x80000000;
    }
    v8 = *((_WORD *)v2 + 1);
    v9 = &gUnknown_08E73508[2 * (618 - v8)];
    v10 = 100721856;
    v11 = 2 * v8;
    if ( (unsigned int)(2 * v8) > 0x1000 )
    {
      do
      {
        v40000D4 = v9;
        v40000D8 = v10;
        v40000DC = -2147481600;
        v9 += 4096;
        v10 += 4096;
        v11 -= 4096;
      }
      while ( v11 > 0x1000 );
      v40000D4 = v9;
      v40000D8 = v10;
      v40000DC = (v11 >> 1) | 0x80000000;
    }
    else
    {
      v40000D4 = &gUnknown_08E73508[2 * (618 - v8)];
      v40000D8 = 100721856;
      v40000DC = (v11 >> 1) | 0x80000000;
    }
    v12 = *((_WORD *)v2 + 1);
    v13 = &gUnknown_08E73508[2 * (586 - v12)];
    v14 = 100723840;
    v15 = 2 * v12;
    if ( (unsigned int)(2 * v12) > 0x1000 )
    {
      do
      {
        v40000D4 = v13;
        v40000D8 = v14;
        v40000DC = -2147481600;
        v13 += 4096;
        v14 += 4096;
        v15 -= 4096;
      }
      while ( v15 > 0x1000 );
      v40000D4 = v13;
      v40000D8 = v14;
      v40000DC = (v15 >> 1) | 0x80000000;
    }
    else
    {
      v40000D4 = &gUnknown_08E73508[2 * (586 - v12)];
      v40000D8 = 100723840;
      v40000DC = (v15 >> 1) | 0x80000000;
    }
    v16 = *((_WORD *)v2 + 1);
    v17 = &gUnknown_08E73508[2 * (618 - v16)];
    v18 = 100723904;
    v19 = 2 * v16;
    if ( (unsigned int)(2 * v16) > 0x1000 )
    {
      do
      {
        v40000D4 = v17;
        v40000D8 = v18;
        v40000DC = -2147481600;
        v17 += 4096;
        v18 += 4096;
        v19 -= 4096;
      }
      while ( v19 > 0x1000 );
      v40000D4 = v17;
      v40000D8 = v18;
      v40000DC = (v19 >> 1) | 0x80000000;
    }
    else
    {
      v40000D4 = &gUnknown_08E73508[2 * (618 - v16)];
      v40000D8 = 100723904;
      v40000DC = (v19 >> 1) | 0x80000000;
    }
  }
  v20 = v2[2];
  v21 = *((_WORD *)v2 + 1);
  for ( i = *(_WORD *)v2; v20 <= 9; v20 = (v20 + 1) & 0xFF )
  {
    v40000D4 = v2 + 4;
    v40000D8 = 2 * v20 + 100723904;
    v40000DC = -2147483647;
  }
  if ( !(i << 16) || v21 <= 0 || v21 > 9 )
  {
    v23 = v21;
    if ( v21 > 9 )
      v23 = sub_80A1FF8(&gUnknown_0840F813, 13, 1, 18);
    sub_80A1D18(v23);
    DestroyTask(v1);
  }
  return v25;
}
