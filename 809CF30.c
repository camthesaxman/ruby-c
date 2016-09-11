int sub_809CF30()
{
  int v0; // r5@1

  v0 = -2;
  if ( word_300179E & 1 )
  {
    v0 = GetMenuCursorPos() & 0xFF;
  }
  else
  {
    if ( word_300179E & 2 )
    {
      audio_play(5u);
      v0 = -1;
    }
    if ( word_300179E & 0x40 )
    {
      audio_play(5u);
      MoveMenuCursor(-1);
    }
    else if ( word_300179E & 0x80 )
    {
      audio_play(5u);
      MoveMenuCursor(1);
    }
  }
  if ( v0 != -2 )
  {
    sub_8072DEC(-2);
    MenuZeroFillWindowRect(v20011BA, v20011BC, 0x1Du, 0xFu);
  }
  if ( v0 >= 0 )
    v0 = *(_DWORD *)(8 * v0 + 0x2001184);
  return (signed __int16)v0;
}
