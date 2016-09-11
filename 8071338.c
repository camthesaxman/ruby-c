signed int sub_8071338()
{
  int (*v0)(); // r1@8

  if ( word_300179E & 0x40 )
  {
    audio_play(5);
    v202E8FC = MoveMenuCursor(-1);
  }
  if ( word_300179E & 0x80 )
  {
    audio_play(5);
    v202E8FC = MoveMenuCursor(1);
  }
  if ( word_300179E & 1 )
  {
    audio_play(5);
    if ( *(&off_8376D28 + 2 * *(_BYTE *)(v202E8FC + 0x202E8FE)) != StartMenu_Pokedex || pokedex_count(0) << 16 )
    {
      v0 = (int (*)())*(&off_8376D28 + 2 * *(_BYTE *)(v202E8FC + 0x202E8FE));
      dword_3004AE8 = (int)v0;
      if ( v0 != sub_80714FC && v0 != sub_8071554 && v0 != sub_8071560 )
        fade_screen(1, 0);
    }
    return 0;
  }
  if ( !(word_300179E & 0xA) )
    return 0;
  sub_8071C20();
  return 1;
}
