int sub_80E7294()
{
  int v0; // r1@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = sub_80E7B40();
  v20011B9 = v0;
  if ( v20011C0 )
  {
    audio_play(5u);
    v20011C4 = sub_80E7294;
    sub_80E682C((int)sub_80E7458);
  }
  else
  {
    if ( v0 << 24 )
      audio_play(5u);
    if ( word_300179E & 1 )
    {
      audio_play(5u);
      sub_80E682C((int)sub_80E7324);
    }
    else if ( word_300179E & 2 )
    {
      sub_80E682C((int)sub_80E73D0);
    }
  }
  return v2;
}
