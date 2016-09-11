int sub_80E6FC8()
{
  int v0; // r1@1
  int v1; // r0@15
  int v2; // r0@15
  int v3; // r0@18
  int v5; // [sp+4h] [bp-4h]@0

  v0 = sub_80E77C8();
  v2001096 = v0;
  if ( v20011C0 )
  {
    audio_play(5u);
    v20011C4 = sub_80E6FC8;
    sub_80E682C((int)sub_80E7458);
    return v5;
  }
  if ( v0 << 24 )
    audio_play(5u);
  if ( word_300179E & 1 )
  {
    if ( v20011B7 )
    {
      audio_play(5u);
      if ( v20011A8 != 2 )
      {
        if ( v20011A8 <= 2 )
        {
          if ( v20011A8 == 1 )
            sub_80E682C((int)sub_80E718C);
          return v5;
        }
        if ( v20011A8 != 3 )
          return v5;
_080E70F0:
        sub_80E682C((int)sub_80E7114);
        return v5;
      }
      if ( v2001008 != 6 )
      {
        v1 = sub_80E7F00(v2001027, 0xFFFF);
        v2 = sub_80E7574(v1);
        sub_80E95A4(v2);
      }
    }
    else if ( !v2001026 || *(_WORD *)(2 * *(_BYTE *)(v20011A9 + 14 * v20011A8 + 0x2001040) + 0x2005142) )
    {
      v3 = audio_play(5u);
      sub_80E7AD4(v3);
      sub_80E682C((int)sub_80E7218);
    }
  }
  else
  {
    if ( word_300179E & 2 )
      goto _080E70F0;
    if ( word_300179E & 4 )
      sub_80E682C((int)sub_80E718C);
  }
  return v5;
}
