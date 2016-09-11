signed int ProcessMenuInputNoWrap()
{
  int v0; // r5@1
  int v1; // r6@1
  signed int result; // r0@4

  v0 = (unsigned __int8)byte_30006B2;
  v1 = (unsigned __int8)byte_30006B2;
  if ( word_300179E & 1 )
  {
    audio_play(5);
    if ( byte_30006B7 )
      sub_8072DEC((unsigned __int8)byte_30006B7);
    result = byte_30006B2;
  }
  else if ( word_300179E & 2 )
  {
    if ( byte_30006B7 )
      sub_8072DEC((unsigned __int8)byte_30006B7);
    result = -1;
  }
  else
  {
    if ( word_300179E & 0x40 )
    {
      if ( v0 != (unsigned __int8)MoveMenuCursorNoWrap(-1) )
        audio_play(5);
    }
    else if ( word_300179E & 0x80 )
    {
      if ( v1 != (unsigned __int8)MoveMenuCursorNoWrap(1) )
        audio_play(5);
    }
    else
    {
      MoveMenuCursorNoWrap(0);
    }
    result = -2;
  }
  return result;
}
