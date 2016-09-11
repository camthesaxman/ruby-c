int sub_8049860()
{
  signed int v0; // r0@2
  int v1; // r0@7
  char *v2; // r0@11
  int v4; // [sp+8h] [bp-4h]@0

  if ( word_30017A0 & 0x40 )
  {
    audio_play(5);
    v0 = -1;
  }
  else
  {
    if ( !(word_30017A0 & 0x80) )
      goto _0804989C;
    audio_play(5);
    v0 = 1;
  }
  *(_BYTE *)(dword_3004824 + 124) = MoveMenuCursor(v0);
_0804989C:
  if ( word_300179E & 1 )
  {
    v1 = audio_play(5);
    if ( GetMenuCursorPos(v1) & 0xFF )
    {
      if ( sub_80499F0(dword_3004824 + 81, *(_BYTE *)(dword_3004824 + 66), *(_BYTE *)(dword_3004824 + 65)) << 24 )
      {
        sub_8049620();
        v2 = &gSprites[68 * *(_BYTE *)(dword_3004824 + 64) + 62];
        *v2 |= 4u;
      }
      else
      {
        sub_804AADC(3, 2);
        *(_BYTE *)(dword_3004824 + 123) = 8;
      }
    }
    else
    {
      BeginNormalPaletteFade(-1, 0, 0, 16);
      *(_BYTE *)(dword_3004824 + 123) = 2;
    }
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5);
    sub_8049804();
  }
  return v4;
}
