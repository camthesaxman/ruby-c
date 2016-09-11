int sub_8049680()
{
  unsigned int v0; // r1@10
  signed int v1; // r2@17
  unsigned __int8 v2; // r0@19
  int v4; // [sp+Ch] [bp-4h]@0

  if ( word_30017A0 & 0x40 )
  {
    sub_8049560((unsigned __int8 *)(dword_3004824 + 65), 0);
  }
  else if ( word_30017A0 & 0x80 )
  {
    sub_8049560((unsigned __int8 *)(dword_3004824 + 65), 1u);
  }
  else if ( word_30017A0 & 0x20 )
  {
    sub_8049560((unsigned __int8 *)(dword_3004824 + 65), 2u);
  }
  else if ( word_30017A0 & 0x10 )
  {
    sub_8049560((unsigned __int8 *)(dword_3004824 + 65), 3u);
  }
  if ( word_300179E & 1 )
  {
    audio_play(5);
    v0 = *(_BYTE *)(dword_3004824 + 65);
    if ( v0 > 5 )
    {
      if ( v0 > 0xB )
      {
        if ( v0 == 12 )
        {
          DrawTextWindow(dword_3004824 + 4, 24, 14, 29);
          InitYesNoMenu(24, 14, 4);
          *(_BYTE *)(dword_3004824 + 123) = 4;
          sub_804ACD8(138593917, 32 * *(_WORD *)(dword_3004824 + 126) + 100728832, 20);
        }
      }
      else
      {
        BeginNormalPaletteFade(-1, 0, 0, 16);
        *(_BYTE *)(dword_3004824 + 123) = 2;
      }
    }
    else
    {
      DrawTextWindow(dword_3004824 + 4, 18, 14, 28);
      PrintMenuItems(19, 15, 2, &gUnknown_0820C320);
      InitMenu(0, 19, 15, 2);
      *(_BYTE *)(dword_3004824 + 123) = 1;
    }
  }
  if ( word_300179E & 0x100 )
  {
    v1 = 0;
    do
    {
      *(_WORD *)(dword_3004824 + 140 + 2 * v1) = v1;
      ++v1;
    }
    while ( v1 <= 9 );
    v2 = bitmask_all_link_players_but_self();
    SendBlock(v2, (char *)(dword_3004824 + 140), 0x14u);
  }
  return v4;
}
