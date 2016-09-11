int __fastcall sub_80BC9E4(unsigned __int8 a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int v3; // r0@8
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( word_30017A0 & 0x40 )
  {
    if ( GetMenuCursorPos() << 24 )
    {
      audio_play(5u);
      MoveMenuCursor(-1);
    }
  }
  else if ( word_30017A0 & 0x80 )
  {
    if ( (unsigned __int8)GetMenuCursorPos() != 1 )
    {
      audio_play(5u);
      MoveMenuCursor(1);
    }
  }
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    v3 = GetMenuCursorPos();
    call_via_r1(v1, *(void **)((char *)&off_83D13D8 + (8 * v3 & 0x7FF)));
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    sub_80BCBF8(v2);
  }
  return v5;
}
