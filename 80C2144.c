int sub_80C2144()
{
  signed int v0; // r2@1
  unsigned int v1; // r3@1
  int v2; // r0@3
  int v3; // r6@3
  char v4; // r4@4
  int v5; // r0@4
  signed int v6; // r5@4
  int v7; // r12@4
  signed int v8; // r7@4
  int v9; // r1@4
  signed int v10; // r4@4
  signed __int16 v11; // r6@5
  signed int v12; // r2@7
  int v13; // r0@7
  signed __int16 v14; // r3@10
  int v16; // [sp+0h] [bp-18h]@2
  int v17; // [sp+14h] [bp-4h]@15

  v0 = 100663296;
  v1 = 98304;
  do
  {
    v16 = 0;
    v40000D4 = &v16;
    v40000D8 = v0;
    v40000DC = -2063596544;
    v0 += 4096;
    v1 -= 4096;
  }
  while ( v1 > 0x1000 );
  v16 = 0;
  v40000D4 = &v16;
  v40000D8 = v0;
  v40000DC = (v1 >> 2) | 0x85000000;
  LZDecompressVram((int)&gUnknown_08D1977C, 100663296);
  LZDecompressVram((int)&gUnknown_08D1A490, 100716544);
  LZDecompressVram((int)&gUnknown_08D1A364, 100720640);
  v2 = LZDecompressVram((int)&gUnknown_08D1A250, 100724736);
  sub_80C37E4(v2);
  LoadCompressedPalette((int)&gUnknown_08D1A618, 0, 512);
  LoadFontDefaultPalette((int)&gWindowConfig_81E6FA0);
  v3 = 0;
  do
  {
    v4 = sub_80C3990((unsigned __int8)v3, 1);
    v5 = sub_80C39E4((unsigned __int8)v3, 1);
    v6 = 0;
    v7 = v3 + 1;
    v8 = v4;
    v9 = 192 * v3;
    v10 = v5 << 24;
    do
    {
      v11 = 24754;
      if ( v6 < v8 )
        v11 = 24756;
      v12 = v10 >> 24;
      v13 = v10 >> 24;
      if ( v10 >> 24 < 0 )
        v13 = -v12;
      if ( v6 >= v13 )
      {
        v14 = 24738;
      }
      else
      {
        v14 = 24740;
        if ( v12 < 0 )
          v14 = 24742;
      }
      *(_WORD *)(v9 + 100712806) = v11;
      *(_WORD *)(v9 + 100712870) = v14;
      v9 += 2;
      ++v6;
    }
    while ( v6 <= 9 );
    v3 = v7;
  }
  while ( v7 <= 3 );
  return v17;
}
