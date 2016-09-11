int sub_807F434()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v202FED5 == 1 )
  {
    if ( v202FED0 )
    {
      --v202FED0;
    }
    else if ( !(mplay_has_finished_maybe() << 24) )
    {
      if ( Random() & 1 )
        audio_play(0x57u);
      else
        audio_play(0x58u);
      v202FED5 = 0;
    }
  }
  return v1;
}
