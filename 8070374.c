int __fastcall sub_8070374(unsigned __int8 a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_300179E & 0x40 )
  {
    audio_play(5);
    MoveMenuCursor(-1);
  }
  else if ( word_300179E & 0x80 )
  {
    audio_play(5);
    MoveMenuCursor(1);
  }
  else if ( word_300179E & 1 )
  {
    call_via_r1(a1, 134677681);
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5);
    call_via_r1(v1, 134677745);
  }
  return v3;
}
