int sub_8049BC0()
{
  signed int v0; // r0@2
  int v1; // r0@7
  int v2; // r0@8
  char *v3; // r0@8
  int v5; // [sp+8h] [bp-4h]@0

  if ( word_30017A0 & 0x40 )
  {
    audio_play(5);
    v0 = -1;
  }
  else
  {
    if ( !(word_30017A0 & 0x80) )
      goto _08049BFC;
    audio_play(5);
    v0 = 1;
  }
  *(_BYTE *)(dword_3004824 + 124) = MoveMenuCursor(v0);
_08049BFC:
  if ( word_300179E & 1 )
  {
    v1 = audio_play(5);
    if ( (unsigned __int8)GetMenuCursorPos(v1) )
    {
      sub_8049804();
    }
    else
    {
      sub_804AA0C(4);
      v2 = dword_3004824;
      *(_WORD *)(dword_3004824 + 140) = -4438;
      *(_WORD *)(v2 + 142) = 0;
      sub_804AADC(5, 0);
      v3 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 64) + 62];
      *v3 |= 4u;
      *(_BYTE *)(dword_3004824 + 123) = 100;
    }
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5);
    sub_8049804();
  }
  return v5;
}
