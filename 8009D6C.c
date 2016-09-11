signed int __fastcall MainMenuProcessKeyInput(unsigned __int8 a1)
{
  int v1; // r4@1
  signed int v2; // r1@5
  signed int v3; // r5@8
  int *v4; // r1@12
  int *v6; // r2@15

  v1 = a1;
  if ( word_300179E & 1 )
  {
    audio_play(5);
    BeginNormalPaletteFade(-1, 0, 0, 16);
    dword_3004B20[10 * v1] = (int)MainMenuPressedA;
  }
  else if ( word_300179E & 2 )
  {
    audio_play(5);
    BeginNormalPaletteFade(-1, 0, 0, 16);
    v4000040 = 240;
    v4000044 = 160;
    dword_3004B20[10 * v1] = (int)MainMenuPressedB;
  }
  else
  {
    v2 = LOWORD(dword_3004B20[10 * a1 + 2]);
    if ( v2 == 1 )
    {
      v3 = 3;
    }
    else if ( v2 > 1 && v2 == 2 )
    {
      v3 = 4;
    }
    else
    {
      v3 = 2;
    }
    if ( word_300179E & 0x40 )
    {
      v4 = &dword_3004B20[10 * a1];
      if ( (signed int)*((_WORD *)v4 + 5) > 0 )
      {
        --*((_WORD *)v4 + 5);
        return 1;
      }
    }
    if ( word_300179E & 0x80 )
    {
      v6 = &dword_3004B20[10 * a1];
      if ( *((_WORD *)v6 + 5) < v3 - 1 )
      {
        ++*((_WORD *)v6 + 5);
        return 1;
      }
    }
  }
  return 0;
}
