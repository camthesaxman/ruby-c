unsigned int sub_8133248()
{
  unsigned int v0; // r4@1

  v0 = (-(word_300179E & 0x30) | word_300179E & 0x30u) >> 31;
  if ( v2024EB7 == 1 && word_300179E & 0x300 )
    ++v0;
  if ( v0 )
  {
    audio_play(5u);
    *(_BYTE *)dword_30007B0 = 3;
    *(_BYTE *)(dword_30007B0 + 708) = 0;
  }
  return v0;
}
