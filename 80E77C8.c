signed int sub_80E77C8()
{
  signed int v0; // r7@1
  int *v1; // r6@2
  int v2; // r0@3
  signed int v3; // r4@9
  signed int v4; // r4@18
  char v5; // r2@19
  __int16 v7; // r1@31
  int v8; // r9@42
  signed int v9; // r1@42
  int v10; // r0@45

  v0 = 0;
  if ( v20011B7 )
  {
    v1 = gMain;
    if ( word_30017A0 & 0x40 )
    {
      v2 = v20011A8 - 1;
      --v20011A8;
      if ( v2 << 24 <= 0 )
        v20011A8 = 3;
      return 1;
    }
    if ( word_30017A0 & 0x80 )
    {
      ++v20011A8;
      if ( v20011A8 > 3 )
        v20011A8 = 1;
      return 1;
    }
    goto _080E7950;
  }
  if ( v2001026 != 1 )
  {
    v4 = 0;
    v20011C0 = 0;
    v1 = gMain;
    if ( word_30017A0 & 0x40 )
    {
      v5 = v20011A8;
      if ( !v20011A8 )
        return 0;
      --v20011A8;
      if ( (char)(v5 - 1) < v20011B5 )
        v20011C0 = -1;
    }
    else
    {
      if ( word_30017A0 & 0x80 )
      {
        if ( v20011A8 >= v20011B6 - 1 )
          return 0;
        ++v20011A8;
        if ( v20011A8 > v20011B5 + 3 )
          v20011C0 = 1;
        v4 = 1;
      }
      if ( !v4 )
        goto _080E7950;
    }
    if ( v20011C0 )
      return 0;
_080E7944:
    sub_80E7A98();
    return 1;
  }
  v3 = 0;
  v1 = gMain;
  if ( word_30017A0 & 0x40 )
  {
    if ( --v20011A8 & 0x80 )
      v20011A8 = 3;
    goto _080E7944;
  }
  if ( word_30017A0 & 0x80 )
  {
    ++v20011A8;
    if ( v20011A8 > 3 )
      v20011A8 = 0;
    v3 = 1;
  }
  if ( v3 )
    goto _080E7944;
_080E7950:
  v7 = *((_WORD *)v1 + 24);
  if ( v7 & 0x20 )
  {
    if ( v20011A9 )
      --v20011A9;
    else
      v20011A9 = *(_BYTE *)(v20011A8 + 0x20011AA);
_080E79E6:
    v8 = v20011B7;
    v9 = 0;
    if ( v20011A9 == *(_BYTE *)(v20011A8 + 0x20011AA) )
      v9 = 1;
    v20011B7 = v9;
    if ( v9 )
    {
      v10 = v20011A8 - v20011B5;
      v20011A8 -= v20011B5;
      if ( !(v10 << 24) )
      {
        v20011A8 = 1;
        v20011A9 = v20011AB;
      }
    }
    else if ( v8 )
    {
      v20011A8 += v20011B5;
      if ( v20011A9 )
        v20011A9 = *(_BYTE *)(v20011A8 + 0x20011AA) - 1;
    }
    return 1;
  }
  if ( v7 & 0x10 )
  {
    if ( v20011B7 || v20011A9 == *(_BYTE *)(v20011A8 + 0x20011AA) )
      v20011A9 = 0;
    else
      ++v20011A9;
    v0 = 1;
  }
  if ( v0 )
    goto _080E79E6;
  return 0;
}
