int __fastcall sub_80903D0(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v4; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = a1;
  if ( word_300179E & 2 )
  {
    BeginNormalPaletteFade(-21, 0, 0, 0x10u, 0);
    *(_BYTE *)(v202FFB4 + 1615) = 1;
    dword_3004B20[10 * v1] = (int)sub_8090498;
    audio_play(3u);
  }
  else if ( word_300179E & 0x20 || word_300179E & 0x200 && v2024EB7 == 1 )
  {
    BeginNormalPaletteFade(-21, 0, 0, 0x10u, word_300179E & 2);
    *(_BYTE *)(v202FFB4 + 1615) = 2;
    dword_3004B20[10 * v2] = (int)sub_8090498;
    audio_play(0x6Du);
  }
  return v4;
}
