int __fastcall sub_80C696C(__int16 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( a1 == 824 )
  {
    audio_play(0x4Au);
  }
  else if ( a1 > 824 )
  {
    if ( a1 == 828 )
    {
      audio_play(0x4Bu);
    }
    else if ( a1 == 832 )
    {
      audio_play(0x4Cu);
    }
  }
  else if ( a1 == 552 )
  {
    audio_play(0x4Eu);
  }
  return v2;
}
