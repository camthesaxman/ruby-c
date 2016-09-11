int __fastcall sub_808FDF8(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@5
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8119F88(0);
  if ( sub_80753E8() << 24 )
    sub_8090040(1);
  else
    sub_8090040(0);
  if ( word_300179E & 1 )
  {
    sub_8090040(1);
    v2 = NationalPokedexNumToSpecies(*v202FFBC);
    sub_811A050(v2);
  }
  else if ( !(v202F38F & 0x80) )
  {
    if ( word_300179E & 2 )
    {
      BeginNormalPaletteFade(-21, 0, 0, 0x10u, v202F38F & 0x80);
      m4aMPlayContinue(&unk_3007380);
      *(_BYTE *)(v202FFB4 + 1615) = 1;
      dword_3004B20[10 * v1] = (int)sub_808FFBC;
      audio_play(3u);
    }
    else if ( word_300179E & 0x20 || word_300179E & 0x200 && v2024EB7 == 1 )
    {
      BeginNormalPaletteFade(-21, 0, 0, 0x10u, word_300179E & 2);
      m4aMPlayContinue(&unk_3007380);
      *(_BYTE *)(v202FFB4 + 1615) = 2;
      dword_3004B20[10 * v1] = (int)sub_808FFBC;
      audio_play(0x6Du);
    }
    else if ( word_300179E & 0x10 || word_300179E & 0x100 && v2024EB7 == 1 )
    {
      if ( *(_BYTE *)(v202FFBC + 2) & 2 )
      {
        BeginNormalPaletteFade(-21, 0, 0, 0x10u, 0);
        m4aMPlayContinue(&unk_3007380);
        *(_BYTE *)(v202FFB4 + 1615) = 3;
        dword_3004B20[10 * v1] = (int)sub_808FFBC;
        audio_play(0x6Du);
      }
      else
      {
        audio_play(0x20u);
      }
    }
  }
  return v4;
}
