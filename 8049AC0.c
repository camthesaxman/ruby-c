int sub_8049AC0()
{
  signed int v0; // r0@2
  int v1; // r0@7
  unsigned __int8 v2; // r0@10
  int v3; // r0@11
  int v4; // r0@13
  unsigned __int8 v5; // r0@15
  int v7; // [sp+4h] [bp-4h]@0

  if ( word_30017A0 & 0x40 )
  {
    audio_play(5);
    v0 = -1;
  }
  else
  {
    if ( !(word_30017A0 & 0x80) )
      goto _08049AFC;
    audio_play(5);
    v0 = 1;
  }
  *(_BYTE *)(dword_3004824 + 124) = MoveMenuCursor(v0);
_08049AFC:
  if ( word_300179E & 1 )
  {
    v1 = audio_play(5);
    if ( GetMenuCursorPos(v1) << 24 )
    {
      sub_804AADC(3, 1);
      if ( sub_8007ECC() << 24 )
      {
        *(_WORD *)(dword_3004824 + 140) = -17460;
        v2 = bitmask_all_link_players_but_self();
        SendBlock(v2, (char *)(dword_3004824 + 140), 0x14u);
      }
    }
    else
    {
      sub_8049A20();
    }
    v3 = dword_3004824;
_08049BAA:
    *(_BYTE *)(v3 + 123) = 100;
    return v7;
  }
  if ( word_300179E & 2 )
  {
    v4 = sub_804AADC(3, 1);
    if ( !(GetMenuCursorPos(v4) << 24) )
      *(_BYTE *)(dword_3004824 + 124) = MoveMenuCursor(1);
    *(_WORD *)(dword_3004824 + 140) = -17460;
    v5 = bitmask_all_link_players_but_self();
    SendBlock(v5, (char *)(dword_3004824 + 140), 0x14u);
    v3 = dword_3004824;
    goto _08049BAA;
  }
  return v7;
}
