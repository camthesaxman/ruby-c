int sub_802CA60()
{
  int v0; // r9@4
  __int16 *v1; // r1@4
  __int16 v2; // r6@4
  _BYTE *v3; // r1@4
  _BYTE *v4; // r1@4
  int v5; // r4@4
  int v6; // r0@4
  unsigned int v7; // r4@5
  signed int v8; // r6@6
  int v9; // r1@6
  char *v10; // r5@8
  signed int v11; // r6@8
  char *v12; // r2@8
  signed int v13; // r6@10
  _WORD *v14; // r2@10
  signed int v15; // r6@13
  int *v16; // r4@13
  char v17; // r0@15
  signed int v18; // r6@15
  char *v19; // r4@15
  char *v20; // r1@17
  __int16 v21; // r6@17
  char *v22; // r1@17
  char *v23; // r2@17
  signed int v24; // r6@17
  char *v25; // r2@17
  signed int v26; // r6@19
  int v27; // r5@19
  char *v28; // r4@19
  signed int v29; // r0@22
  int v30; // r0@22
  signed int v31; // r0@24
  int v32; // r0@24
  int v34; // [sp+8h] [bp-44h]@7
  int v35; // [sp+Ch] [bp-40h]@13
  char v36[16]; // [sp+14h] [bp-38h]@14
  char v37[16]; // [sp+20h] [bp-2Ch]@6
  char *v38; // [sp+24h] [bp-28h]@13
  char *v39; // [sp+28h] [bp-24h]@6
  int v40; // [sp+48h] [bp-4h]@59

  if ( word_300179E & 5 )
  {
    audio_play(5);
    if ( *(_BYTE *)(v2024A60 + 0x2024E64) == (unsigned __int8)byte_3004344 )
    {
      sub_802E12C((unsigned __int8)byte_3004344, &gUnknown_08400D49);
    }
    else
    {
      v0 = (v2024A60 << 9) + 33700452;
      v1 = (__int16 *)(2 * *(_BYTE *)(v2024A60 + 0x2024E64) + v0);
      v2 = *v1;
      *v1 = *(_WORD *)(2 * (unsigned __int8)byte_3004344 + (v2024A60 << 9) + 0x2023A64);
      *(_WORD *)(2 * (unsigned __int8)byte_3004344 + v0) = v2;
      v3 = (_BYTE *)(v0 + 8 + *(_BYTE *)(v2024A60 + 0x2024E64));
      LOBYTE(v2) = *v3;
      *v3 = *(_BYTE *)(v0 + 8 + (unsigned __int8)byte_3004344);
      *(_BYTE *)(v0 + 8 + (unsigned __int8)byte_3004344) = v2;
      v4 = (_BYTE *)(v0 + 12 + *(_BYTE *)(v2024A60 + 0x2024E64));
      LOBYTE(v2) = *v4;
      *v4 = *(_BYTE *)(v0 + 12 + (unsigned __int8)byte_3004344);
      *(_BYTE *)(v0 + 12 + (unsigned __int8)byte_3004344) = v2;
      v5 = *(_BYTE *)(28 * v2024A60 + 0x2024CC0);
      v6 = gBitTable[*(_BYTE *)(v2024A60 + 0x2024E64)];
      if ( ((unsigned int)(v5 << 24) >> 28) & v6 )
      {
        *(_BYTE *)(28 * v2024A60 + 0x2024CC0) = v5 & 0xF | 16
                                                         * (((unsigned int)(v5 << 24) >> 28) & ~(unsigned __int8)gBitTable[*(_BYTE *)(v2024A60 + 0x2024E64)]);
        v7 = *(_BYTE *)(28 * v2024A60 + 0x2024CC0);
        *(_BYTE *)(28 * v2024A60 + 0x2024CC0) = v7 & 0xF | 16
                                                         * (LOBYTE(gBitTable[(unsigned __int8)byte_3004344]) | (v7 >> 4));
      }
      sub_802E1B0();
      v8 = 0;
      v39 = v37;
      v9 = v2024A60;
      do
      {
        *((_BYTE *)&v34 + v8) = (*(_BYTE *)(88 * v9 + 0x2024ABB) & (3 << 2 * v8)) >> 2 * v8;
        ++v8;
      }
      while ( v8 <= 3 );
      *v39 = *((_BYTE *)&v34 + *(_BYTE *)(v2024A60 + 0x2024E64));
      *((_BYTE *)&v34 + *(_BYTE *)(v2024A60 + 0x2024E64)) = *((_BYTE *)&v34 + (unsigned __int8)byte_3004344);
      v10 = v39;
      *((_BYTE *)&v34 + (unsigned __int8)byte_3004344) = *v39;
      *v10 = 0;
      v11 = 0;
      v12 = v39;
      do
      {
        *v12 |= *((_BYTE *)&v34 + v11) << 2 * v11;
        ++v11;
      }
      while ( v11 <= 3 );
      *(_BYTE *)(88 * v2024A60 + 0x2024ABB) = *v39;
      v13 = 0;
      v14 = (_WORD *)v0;
      do
      {
        *(_WORD *)(2 * v13 + 88 * v2024A60 + 0x2024A8C) = *v14;
        *(_BYTE *)(v13 + 88 * v2024A60 + 33704612) = *(_BYTE *)(v0 + 8 + v13);
        ++v14;
        ++v13;
      }
      while ( v13 <= 3 );
      if ( !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x200000) )
      {
        v15 = 0;
        v38 = (char *)&v35;
        v16 = &v35;
        do
        {
          *(_WORD *)v16 = GetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), v15 + 13);
          v36[v15] = GetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), v15 + 17);
          v16 = (int *)((char *)v16 + 2);
          ++v15;
        }
        while ( v15 <= 3 );
        v17 = GetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 21);
        *v39 = v17;
        v18 = 0;
        v19 = v39;
        do
        {
          *((_BYTE *)&v34 + v18) = ((unsigned __int8)*v19 & (3 << 2 * v18)) >> 2 * v18;
          ++v18;
        }
        while ( v18 <= 3 );
        v20 = &v38[2 * *(_BYTE *)(v2024A60 + 0x2024E64)];
        v21 = *(_WORD *)v20;
        *(_WORD *)v20 = *(_WORD *)&v38[2 * (unsigned __int8)byte_3004344];
        *(_WORD *)&v38[2 * (unsigned __int8)byte_3004344] = v21;
        v22 = &v36[*(_BYTE *)(v2024A60 + 0x2024E64)];
        LOBYTE(v21) = *v22;
        *v22 = v36[(unsigned __int8)byte_3004344];
        v36[(unsigned __int8)byte_3004344] = v21;
        *v39 = *((_BYTE *)&v34 + *(_BYTE *)(v2024A60 + 0x2024E64));
        *((_BYTE *)&v34 + *(_BYTE *)(v2024A60 + 0x2024E64)) = *((_BYTE *)&v34 + (unsigned __int8)byte_3004344);
        v23 = v39;
        *((_BYTE *)&v34 + (unsigned __int8)byte_3004344) = *v39;
        *v23 = 0;
        v24 = 0;
        v25 = v39;
        do
        {
          *v25 |= *((_BYTE *)&v34 + v24) << 2 * v24;
          ++v24;
        }
        while ( v24 <= 3 );
        v26 = 0;
        v27 = (int)(v38 + 8);
        v28 = v38;
        do
        {
          SetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), v26 + 13, v28);
          SetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), v26 + 17, v27++);
          v28 += 2;
          ++v26;
        }
        while ( v26 <= 3 );
        SetMonData((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 21, v39);
      }
    }
    dword_3004330[v2024A60] = (int)sub_802C68C;
    *(_BYTE *)(v2024A60 + 0x2024E64) = byte_3004344;
    sub_802E3B4(*(_BYTE *)(v2024A60 + 0x2024E64), 0);
    FillWindowRect((int)&unk_3004210, 4118, 0x17u, 0x37u, 0x1Cu, 0x3Au);
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400D38, 656, 23, 55);
    v29 = sub_8002F44((int)&unk_3004210);
    v30 = sub_802E220(v29);
    sub_802E2D4(v30);
  }
  if ( word_300179E & 6 )
  {
    audio_play(5);
    nullsub_7((unsigned __int8)byte_3004344);
    sub_802E3B4(*(_BYTE *)(v2024A60 + 0x2024E64), 0);
    sub_802E12C(*(_BYTE *)(v2024A60 + 0x2024E64), &gUnknown_08400D49);
    dword_3004330[v2024A60] = (int)sub_802C68C;
    FillWindowRect((int)&unk_3004210, 4118, 0x17u, 0x37u, 0x1Cu, 0x3Au);
    InitWindow((int)&unk_3004210, (int)&gUnknown_08400D38, 656, 23, 55);
    v31 = sub_8002F44((int)&unk_3004210);
    v32 = sub_802E220(v31);
    sub_802E2D4(v32);
  }
  if ( word_300179E & 0x20 && byte_3004344 & 1 )
  {
    if ( (unsigned __int8)byte_3004344 == *(_BYTE *)(v2024A60 + 0x2024E64) )
      sub_802E3B4(*(_BYTE *)(v2024A60 + 0x2024E64), 29);
    else
      nullsub_7((unsigned __int8)byte_3004344);
    byte_3004344 ^= 1u;
    audio_play(5);
    if ( (unsigned __int8)byte_3004344 == *(_BYTE *)(v2024A60 + 0x2024E64) )
      sub_802E3B4((unsigned __int8)byte_3004344, 0);
    else
      sub_802E3B4((unsigned __int8)byte_3004344, 27);
  }
  if ( word_300179E & 0x10
    && !(byte_3004344 & 1)
    && ((unsigned __int8)byte_3004344 ^ 1u) < (unsigned __int8)byte_3004348 )
  {
    if ( (unsigned __int8)byte_3004344 == *(_BYTE *)(v2024A60 + 0x2024E64) )
      sub_802E3B4(*(_BYTE *)(v2024A60 + 0x2024E64), 29);
    else
      nullsub_7((unsigned __int8)byte_3004344);
    byte_3004344 ^= 1u;
    audio_play(5);
    if ( (unsigned __int8)byte_3004344 == *(_BYTE *)(v2024A60 + 0x2024E64) )
      sub_802E3B4((unsigned __int8)byte_3004344, 0);
    else
      sub_802E3B4((unsigned __int8)byte_3004344, 27);
  }
  if ( word_300179E & 0x40 && byte_3004344 & 2 )
  {
    if ( (unsigned __int8)byte_3004344 == *(_BYTE *)(v2024A60 + 0x2024E64) )
      sub_802E3B4(*(_BYTE *)(v2024A60 + 0x2024E64), 29);
    else
      nullsub_7((unsigned __int8)byte_3004344);
    byte_3004344 ^= 2u;
    audio_play(5);
    if ( (unsigned __int8)byte_3004344 == *(_BYTE *)(v2024A60 + 0x2024E64) )
      sub_802E3B4((unsigned __int8)byte_3004344, 0);
    else
      sub_802E3B4((unsigned __int8)byte_3004344, 27);
  }
  if ( word_300179E & 0x80
    && !(byte_3004344 & 2)
    && ((unsigned __int8)byte_3004344 ^ 2u) < (unsigned __int8)byte_3004348 )
  {
    if ( (unsigned __int8)byte_3004344 == *(_BYTE *)(v2024A60 + 0x2024E64) )
      sub_802E3B4(*(_BYTE *)(v2024A60 + 0x2024E64), 29);
    else
      nullsub_7((unsigned __int8)byte_3004344);
    byte_3004344 ^= 2u;
    audio_play(5);
    if ( (unsigned __int8)byte_3004344 == *(_BYTE *)(v2024A60 + 0x2024E64) )
      sub_802E3B4((unsigned __int8)byte_3004344, 0);
    else
      sub_802E3B4((unsigned __int8)byte_3004344, 27);
  }
  return v40;
}
