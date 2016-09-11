signed int ProcessMenuInput()
{
  char v1; // r0@10

  if ( word_300179E & 1 )
  {
    audio_play(5);
    if ( byte_30006B7 )
      sub_8072DEC((unsigned __int8)byte_30006B7);
    return byte_30006B2;
  }
  if ( !(word_300179E & 2) )
  {
    if ( word_300179E & 0x40 )
    {
      audio_play(5);
      v1 = -1;
    }
    else
    {
      if ( !(word_300179E & 0x80) )
        return -2;
      audio_play(5);
      v1 = 1;
    }
    MoveMenuCursor(v1);
    return -2;
  }
  if ( byte_30006B7 )
    sub_8072DEC((unsigned __int8)byte_30006B7);
  return -1;
}
