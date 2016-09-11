int sub_80ED31C()
{
  int v0; // r0@7
  int v1; // r0@11
  int v2; // r0@12
  int v3; // r0@16
  int v5; // [sp+4h] [bp-4h]@0

  if ( v2000304 == 1 )
  {
    if ( sub_80F0718() << 24 )
      return v5;
    v3 = ((int (*)(void))ShowMapNamePopUpWindow)();
    sub_80F3264(v3);
    LOWORD(v2) = v2000304 + 1;
    goto _080ED3C8;
  }
  if ( (signed int)v2000304 > 1 )
  {
    if ( v2000304 != 2 )
      return v5;
    v2 = sub_8055870();
    if ( v2 )
      return v5;
_080ED3C8:
    v2000304 = v2;
    return v5;
  }
  if ( v2000304 )
    return v5;
  v0 = (unsigned __int8)sub_80F5DD4();
  if ( v0 == 1 )
  {
    v1 = audio_play(5u);
    ShowMapNamePopUpWindow(v1);
    return v5;
  }
  if ( v0 == 2 )
  {
    audio_play(5u);
    LOWORD(v2) = v2000304 + 1;
    goto _080ED3C8;
  }
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    sub_80EBDBC((int)sub_80ED4D8);
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    sub_80EBDBC((int)sub_80ECD80);
  }
  return v5;
}
