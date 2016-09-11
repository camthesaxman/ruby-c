int __fastcall sub_8050520(int a1, int a2, unsigned __int8 a3, int a4, unsigned __int16 a5)
{
  int v5; // r8@1
  signed int v6; // r9@1
  __int16 *v7; // r7@1
  __int16 *v8; // r0@1
  signed int v9; // r6@3
  int v10; // r5@4
  signed int v11; // r3@5
  __int16 *v12; // r2@5
  __int16 v13; // r3@8
  int v14; // r3@8
  __int16 *v15; // r1@8
  signed int v16; // r6@8
  unsigned int v17; // r10@12
  __int16 *v18; // r1@12
  signed int v19; // r6@12
  int v20; // r0@13
  __int16 *v21; // r1@18
  _DWORD *v22; // r2@18
  signed int v23; // r6@18
  unsigned int v24; // r0@20
  int v25; // r3@20
  signed int v26; // r6@20
  int v27; // r0@21
  signed int v28; // r5@21
  int v29; // r4@21
  int v30; // r0@21
  int v31; // r5@21
  __int16 *v32; // r1@24
  _DWORD *v33; // r2@24
  signed int v34; // r6@24
  int v35; // r0@26
  signed int v36; // r6@29
  signed int v37; // r0@29
  __int16 *v38; // r1@29
  __int16 *v39; // r1@34
  signed int v40; // r6@34
  signed int v41; // r6@38
  __int16 *v42; // r2@38
  int v44; // [sp+0h] [bp-30h]@1
  int v45; // [sp+4h] [bp-2Ch]@1
  int v46; // [sp+2Ch] [bp-4h]@0

  v44 = a1;
  v5 = a2;
  v45 = a4;
  v6 = a3;
  v7 = &word_3000510;
  v8 = &word_300051A;
  do
  {
    *v8 = 0;
    --v8;
  }
  while ( (signed int)v8 >= (signed int)&word_3000510 );
  v9 = 0;
  if ( (signed int)a3 > 0 )
  {
    v10 = v44 + 9;
    do
    {
      v11 = 0;
      v12 = &word_3000510;
      do
      {
        *v12 += *(_BYTE *)(v10 + v11);
        ++v12;
        ++v11;
      }
      while ( v11 <= 5 );
      v10 += 16;
      ++v9;
    }
    while ( v9 < v6 );
  }
  v13 = word_3000510;
  word_3000510 -= word_3000512;
  word_3000512 -= word_3000514;
  word_3000514 -= word_3000516;
  word_3000516 -= word_3000518;
  word_3000518 -= v13;
  v14 = 0;
  v15 = &word_3000510;
  v16 = 4;
  do
  {
    if ( *v15 < 0 )
    {
      *v15 = 0;
      ++v14;
    }
    ++v15;
    --v16;
  }
  while ( v16 >= 0 );
  v17 = (unsigned __int8)v14;
  v18 = &word_3000510;
  v19 = 4;
  do
  {
    v20 = *v18;
    if ( v20 > 0 )
    {
      if ( v20 >= v14 )
        *v18 -= v14;
      else
        *v18 = 0;
    }
    ++v18;
    --v19;
  }
  while ( v19 >= 0 );
  v21 = &word_3000510;
  v22 = &unk_3000530;
  v23 = 4;
  do
  {
    *v22 = *v21;
    ++v22;
    ++v21;
    --v23;
  }
  while ( v23 >= 0 );
  v24 = a5 / 0x14Du & 0xFFFF;
  v25 = v24 + 100;
  dword_300055C = v24 + 100;
  v26 = 4;
  do
  {
    v27 = *v7 * v25 / 10;
    v28 = v27;
    v29 = v27 % 10;
    v30 = v27 / 10;
    v31 = v28 / 10;
    if ( v29 > 4 )
      LOWORD(v31) = v30 + 1;
    *v7 = v31;
    ++v7;
    --v26;
  }
  while ( v26 >= 0 );
  v32 = &word_3000510;
  v33 = &unk_3000548;
  v34 = 4;
  do
  {
    *v33 = *v32;
    ++v33;
    ++v32;
    --v34;
  }
  while ( v34 >= 0 );
  *(_BYTE *)v5 = sub_80502F8(v44, (unsigned __int16 *)&word_3000510, v6, v17);
  v35 = word_300051A / v6 - v6;
  word_300051A = word_300051A / v6 - v6;
  if ( v35 & 0x8000 )
    word_300051A = 0;
  if ( *(_BYTE *)v5 == 12 )
  {
    v36 = 0;
    v37 = gUnknown_082165DF[(unsigned __int16)Random() % 0xAu & 0xFFFF];
    v38 = &word_3000510;
    do
    {
      if ( (v37 >> v36) & 1 )
        *v38 = 2;
      else
        *v38 = 0;
      ++v38;
      ++v36;
    }
    while ( v36 <= 4 );
  }
  v39 = &word_3000510;
  v40 = 5;
  do
  {
    if ( *v39 > 255 )
      *v39 = 255;
    ++v39;
    --v40;
  }
  while ( v40 >= 0 );
  *(_BYTE *)(v5 + 1) = word_3000510;
  *(_BYTE *)(v5 + 2) = word_3000512;
  *(_BYTE *)(v5 + 3) = word_3000514;
  *(_BYTE *)(v5 + 4) = word_3000516;
  *(_BYTE *)(v5 + 5) = word_3000518;
  *(_BYTE *)(v5 + 6) = word_300051A;
  v41 = 0;
  v42 = &word_3000510;
  do
  {
    *(_BYTE *)(v45 + v41) = *v42;
    ++v42;
    ++v41;
  }
  while ( v41 <= 5 );
  return v46;
}
