int sub_8052918()
{
  int v0; // r0@2
  int v1; // r1@6
  char *v2; // r1@18
  char v3; // r0@18
  char *v4; // r1@22
  char v5; // r0@22
  unsigned int v6; // r6@26
  unsigned int v7; // r4@26
  char *v8; // r2@27
  int v9; // r1@35
  int v11; // [sp+4h] [bp-58h]@28
  char v12; // [sp+Ch] [bp-50h]@28
  int v13; // [sp+58h] [bp-4h]@39

  if ( word_300179E & 0x100 )
  {
    v0 = (unsigned __int16)word_300057A + 1000;
    word_300057A += 1000;
    if ( v0 << 16 > 1966080000 )
      word_300057A = 1000;
    ++byte_3000570;
  }
  if ( word_300179E & 0x200 )
  {
    v1 = (unsigned __int16)word_300057A;
    word_300057A -= 1000;
    if ( (v1 - 1000) & 0x8000 )
      word_300057A = 30000;
    ++byte_3000570;
  }
  if ( word_300179E & 0x40 )
  {
    if ( --byte_3000560 & 0x80 )
      byte_3000560 = 3;
    ++byte_3000570;
  }
  if ( word_300179E & 0x80 )
  {
    if ( ++byte_3000560 > 3 )
      byte_3000560 = 0;
    ++byte_3000570;
  }
  if ( word_300179E & 0x20 )
  {
    v2 = &byte_3000561[byte_3000560];
    v3 = *v2 - 1;
    *v2 = v3;
    if ( v3 & 0x80 )
      byte_3000561[byte_3000560] = 42;
    ++byte_3000570;
  }
  if ( word_300179E & 0x10 )
  {
    v4 = &byte_3000561[byte_3000560];
    v5 = *v4 + 1;
    *v4 = v5;
    if ( v5 > 42 )
      byte_3000561[byte_3000560] = 0;
    ++byte_3000570;
  }
  if ( word_300179E & 1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = &byte_3000561[v7];
      if ( byte_3000561[v7] == 42 )
        break;
      v6 = (v6 + 1) & 0xFFFF;
      *((_WORD *)&v11 + v7) = *v8;
      sub_804E844((int)(&v12 + 16 * v7), *v8 + 133);
      v7 = (v7 + 1) & 0xFFFF;
    }
    while ( v7 <= 3 );
    if ( v6 <= 1 )
    {
      byte_3000568 = -1;
    }
    else
    {
      sub_8050744((int)&v12, (int)&byte_3000568, v6, (int)&byte_3000571, word_300057A);
      ++byte_3000570;
    }
  }
  if ( byte_3000570 )
  {
    sub_8052530();
    byte_3000570 = 0;
  }
  if ( word_300179E & 4 )
  {
    v9 = v20297DC;
    if ( v20297DC )
    {
_08052ADC:
      sub_80527BC();
      return v13;
    }
    ++v20297DC;
    v20297E0 = v9;
    SeedRng((unsigned __int16)dword_3001790);
  }
  if ( v20297DC )
    goto _08052ADC;
  return v13;
}
