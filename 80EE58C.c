int sub_80EE58C()
{
  int v0; // r0@7
  int v1; // r0@12
  int v2; // r0@16
  int v4; // [sp+8h] [bp-4h]@0

  if ( v2000304 == 1 )
  {
    if ( sub_80F0718() << 24 )
      return v4;
    v2 = sub_80F0FFC(v200876E);
    sub_80F3264(v2);
    LOWORD(v1) = v2000304 + 1;
    goto _080EE650;
  }
  if ( (signed int)v2000304 > 1 )
  {
    if ( v2000304 != 2 )
      return v4;
    v1 = sub_8055870();
    if ( v1 )
      return v4;
_080EE650:
    v2000304 = v1;
    return v4;
  }
  if ( v2000304 )
    return v4;
  v0 = (unsigned __int8)sub_80F5DD4();
  if ( v0 == 1 )
  {
    audio_play(5u);
    sub_80F0FFC(v200876E);
    return v4;
  }
  if ( v0 == 2 )
  {
    audio_play(5u);
    LOWORD(v1) = v2000304 + 1;
    goto _080EE650;
  }
  if ( word_300179E & 1 )
  {
    audio_play(5u);
    sub_80EBDBC((int)sub_80EE658);
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    sub_80EBDBC((int)sub_80EE8F4);
  }
  return v4;
}
