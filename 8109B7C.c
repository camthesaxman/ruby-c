int __fastcall sub_8109B7C(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = a1;
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
  else if ( word_300179E & 1 )
  {
    audio_play(5u);
    v202E8CE = GetMenuCursorPos();
    v202E8CE = v202E8CE;
    if ( HIWORD(dword_3004B20[10 * v1 + 2]) == v202E8CE )
    {
      sub_8109B34(v1, 0);
    }
    else
    {
      StringCopy(&gStringVar1, (_BYTE *)(11 * v202E8CE + 33719501));
      sub_8109B34(v1, *(_BYTE *)(v202E8CE + 0x20284C9));
    }
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5u);
    sub_8109B34(v2, 0);
  }
  return v4;
}
