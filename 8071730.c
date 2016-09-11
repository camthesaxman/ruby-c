signed int sub_8071730()
{
  int v0; // r2@1

  v0 = (unsigned __int8)byte_30006AC-- - 1;
  if ( word_300179C & 1 )
  {
    audio_play(5);
  }
  else if ( v0 << 24 )
  {
    return 0;
  }
  return 1;
}
