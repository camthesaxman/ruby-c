signed int sub_8096368()
{
  signed int result; // r0@2
  int v1; // r0@6
  int v2; // r0@8

  if ( word_300179E & 2 )
  {
    audio_play(5u);
    result = 201;
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    result = *(_BYTE *)(v2038478 + 572);
  }
  else
  {
    if ( word_300179E & 0x20 )
    {
      v1 = audio_play(5u);
      sub_809662C(v1);
    }
    else if ( word_300179E & 0x10 )
    {
      v2 = audio_play(5u);
      sub_80965F8(v2);
    }
    result = 200;
  }
  return result;
}
