int play_some_sound()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( sub_80755FC() << 24 )
  {
    if ( v202FEC5 == 1 )
    {
      audio_play(0x54u);
    }
    else if ( (signed int)v202FEC5 > 1 || v202FEC5 )
    {
      audio_play(0x52u);
    }
    else
    {
      audio_play(0x56u);
    }
  }
  return v1;
}
