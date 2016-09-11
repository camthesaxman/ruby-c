int __fastcall sub_808F6CC(unsigned __int8 a1)
{
  int *v1; // r5@1
  signed int v2; // r0@6
  int (*v3)(); // r0@14
  unsigned int v4; // r0@28
  int v6; // [sp+10h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v1 + 4) )
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    *v1 = (int)sub_808F888;
    audio_play(0x6Cu);
    return v6;
  }
  if ( word_300179E & 2 )
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, *((_WORD *)v1 + 4));
    *v1 = (int)sub_808F8B8;
    audio_play(3u);
    return v6;
  }
  if ( word_300179E & 1 )
  {
    v2 = *(_BYTE *)(v202FFB4 + 1613);
    if ( v2 == 1 )
    {
      BeginNormalPaletteFade(-21, 0, 0, 0x10u, word_300179E & 2);
      v3 = sub_808F8D8;
    }
    else
    {
      if ( v2 <= 1 )
      {
        if ( !*(_BYTE *)(v202FFB4 + 1613) )
          sub_8090C68();
        return v6;
      }
      if ( v2 == 2 )
      {
        BeginNormalPaletteFade(-21, 0, 0, 0x10u, word_300179E & 2);
        v3 = sub_808FA64;
      }
      else
      {
        if ( v2 != 3 )
          return v6;
        if ( !(*(_BYTE *)(v202FFBC + 2) & 2) )
        {
          audio_play(0x20u);
          return v6;
        }
        BeginNormalPaletteFade(-21, 0, 0, 0x10u, word_300179E & 2);
        v3 = sub_8090070;
      }
    }
    *v1 = (int)v3;
    audio_play(0x15u);
    return v6;
  }
  if ( (word_300179E & 0x20 || word_300179E & 0x200 && v2024EB7 == 1) && *(_BYTE *)(v202FFB4 + 1613) )
  {
    sub_8090584(--*(_BYTE *)(v202FFB4 + 1613), 13);
    audio_play(0x6Du);
  }
  else if ( word_300179E & 0x10 || word_300179E & 0x100 && v2024EB7 == 1 )
  {
    v4 = *(_BYTE *)(v202FFB4 + 1613);
    if ( v4 <= 2 )
    {
      *(_BYTE *)(v202FFB4 + 1613) = v4 + 1;
      sub_8090584(*(_BYTE *)(v202FFB4 + 1613), 13);
      audio_play(0x6Du);
    }
  }
  return v6;
}
