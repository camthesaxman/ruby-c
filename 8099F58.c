int __fastcall sub_8099F58(int a1, _WORD *a2, int a3, unsigned __int8 a4)
{
  int v4; // r9@1
  _WORD *v5; // r5@1
  signed int v6; // r2@1
  unsigned int v7; // r8@1
  signed int v8; // r2@1
  int v9; // r6@2
  int v10; // r3@2
  int v11; // r4@2
  int v12; // r7@2
  __int16 v13; // r1@8
  int v14; // r3@9
  unsigned __int16 i; // r10@9
  int v16; // r3@11
  char v17; // r1@16
  int v18; // r4@18
  int v19; // r0@18
  int v20; // r0@19
  _WORD *v21; // r2@21
  unsigned __int16 v22; // r3@21
  unsigned int v23; // r1@22
  unsigned __int16 v24; // r5@22
  signed int v25; // r3@22
  int v26; // r0@24
  int v27; // r0@25
  __int16 v29; // [sp+0h] [bp-40h]@1
  int v30; // [sp+4h] [bp-3Ch]@1
  unsigned int v31; // [sp+8h] [bp-38h]@1
  signed int v32; // [sp+Ch] [bp-34h]@8
  int v33; // [sp+10h] [bp-30h]@8
  int v34; // [sp+3Ch] [bp-4h]@0

  v4 = a1;
  v5 = a2;
  v6 = a3 << 24;
  v29 = a4 << 8;
  v30 = ((3 * a4 + 4) << 12) & 0xFFFF;
  v7 = (unsigned int)v6 >> 24;
  v31 = (((unsigned int)v20008B4 >> 3) + 10 + 24 * (v6 >> 24)) & 0x3F;
  v8 = (((unsigned int)v20008B4 >> 3) + 10 + 24 * (v6 >> 24)) & 0x3F;
  if ( v8 > 12 )
  {
    if ( v8 > 31 )
    {
      if ( v8 > 44 )
      {
        v9 = (64 - v8) & 0xFFFF;
        v10 = (20 - (signed __int16)(64 - v8)) & 0xFFFF;
        v11 = a1 + 2 * v8 + 2112;
        v12 = a1 + 128;
      }
      else
      {
        LOWORD(v9) = 20;
        v10 = 0;
        v11 = a1 + 2 * v8 + 2112;
        v12 = 0;
      }
    }
    else
    {
      v9 = (32 - v8) & 0xFFFF;
      v10 = (20 - (signed __int16)(32 - v8)) & 0xFFFF;
      v11 = a1 + 2 * v8 + 128;
      v12 = a1 + 2176;
    }
  }
  else
  {
    LOWORD(v9) = 20;
    v10 = 0;
    v11 = a1 + 2 * v8 + 128;
    v12 = 0;
  }
  v13 = 0;
  v32 = v10 << 16;
  v33 = (signed __int16)v10;
  do
  {
    v14 = 0;
    for ( i = v13 + 1; v14 < (signed __int16)v9; v14 = (v14 + 1) & 0xFFFF )
    {
      *(_WORD *)(2 * v14 + v11) = (v30 + (*v5 & 0xF000)) | (v29 + (*v5 & 0xFFF));
      ++v5;
    }
    v16 = 0;
    if ( v33 > 0 )
    {
      do
      {
        *(_WORD *)(2 * v16 + v12) = (v30 + (*v5 & 0xF000)) | (v29 + (*v5 & 0xFFF));
        ++v5;
        v16 = (v16 + 1) & 0xFFFF;
      }
      while ( v16 < v32 >> 16 );
    }
    v11 += 64;
    v12 += 64;
    ++v13;
  }
  while ( i <= 0x11u );
  if ( (_BYTE)v7 )
  {
    if ( (char)v7 <= 0 )
      v17 = v31 - 4;
    else
      v17 = v31 + 20;
    v18 = v17 & 0x3F;
    v19 = v17 & 0x3F;
    if ( v18 > 31 )
      v20 = 2 * v19 + 2112;
    else
      v20 = 2 * v19 + 128;
    v21 = (_WORD *)(v4 + v20);
    v22 = 0;
    do
    {
      v23 = 0;
      v24 = v22 + 1;
      v25 = v18 << 16;
      do
      {
        *v21 = 0;
        v21 += 32;
        v23 = (v23 + 1) & 0xFFFF;
      }
      while ( v23 <= 0x11 );
      v18 = ((signed __int16)v18 + 1) & 0x3F;
      v26 = ((v25 >> 16) + 1) & 0x3F;
      if ( v26 > 31 )
        v27 = 2 * v26 + 2112;
      else
        v27 = 2 * v26 + 128;
      v21 = (_WORD *)(v4 + v27);
      v22 = v24;
    }
    while ( v24 <= 3u );
  }
  return v34;
}
