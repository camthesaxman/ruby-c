signed int sub_80727CC()
{
  int v1; // r0@10

  if ( word_300179E & 1 )
  {
    if ( byte_30006B7 )
      sub_8072DEC((unsigned __int8)byte_30006B7);
    audio_play(5);
    return (char)GetMenuCursorPos();
  }
  if ( !(word_300179E & 2) )
  {
    if ( word_300179E & 0x40 )
    {
      audio_play(5);
      v1 = -byte_30006B5;
    }
    else if ( word_300179E & 0x80 )
    {
      audio_play(5);
      LOBYTE(v1) = byte_30006B5;
    }
    else if ( word_300179E & 0x20 )
    {
      audio_play(5);
      LOBYTE(v1) = -1;
    }
    else
    {
      if ( !(word_300179E & 0x10) )
        return -2;
      audio_play(5);
      LOBYTE(v1) = 1;
    }
    MoveMenuCursor4(v1);
    return -2;
  }
  if ( byte_30006B7 )
    sub_8072DEC((unsigned __int8)byte_30006B7);
  return -1;
}
