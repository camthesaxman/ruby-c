int sub_8101E3C()
{
  unsigned int v0; // r4@5
  int v1; // r0@6

  if ( word_300179E & 4 )
  {
    sub_8104AB8(0);
    v2000000 = 8;
  }
  else if ( word_300179E & 0x100 )
  {
    if ( v200000C - 3 + v2000012 < 0 )
    {
      v2000000 = 6;
    }
    else
    {
      v0 = v2000012;
      if ( v2000012 <= 2 )
      {
        do
        {
          sub_8103D50((unsigned __int8)v0);
          v1 = (v0 << 16) + 0x10000;
          v0 = (unsigned int)v1 >> 16;
        }
        while ( v1 >> 16 <= 2 );
      }
      v200000C = v200000C - 3 + v2000012;
      v2000012 = 3;
      v2000000 = 9;
      audio_play(0x5Fu);
    }
  }
  else
  {
    if ( word_300179E & 0x80 && v200000C )
    {
      audio_play(0x5Fu);
      sub_8103D50(v2000012);
      --v200000C;
      ++v2000012;
    }
    if ( v2000012 > 2 || v2000012 && word_300179E & 1 )
      v2000000 = 9;
    if ( word_300179E & 2 )
      v2000000 = 21;
  }
  return 0;
}
