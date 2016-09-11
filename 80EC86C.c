int sub_80EC86C()
{
  int v0; // r0@5
  int v2; // [sp+Ch] [bp-4h]@0

  if ( v2000304 )
  {
    if ( v2000304 == 1 && !(sub_80F1E6C() << 24) )
      sub_80EBDBC((int)sub_80EC210);
  }
  else if ( sub_80EEC90() << 24 )
  {
    audio_play(5u);
    v0 = sub_80EF428(1, v2006DAD);
    sub_80EED9C(v0);
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    v2006DF0 = v2006DAD;
    if ( v2006DAD == 1 )
    {
      sub_80EBDBC((int)sub_80EC960);
    }
    else if ( v2006DAD > 1 )
    {
      if ( v2006DAD == 2 )
        sub_80EBDBC((int)sub_80EC210);
    }
    else if ( !v2006DF0 )
    {
      sub_80EBDBC((int)sub_80ED620);
    }
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    v2006DF0 = 2;
    v2006DAD = 2;
    ++v2000304;
  }
  return v2;
}
