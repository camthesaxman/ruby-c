int sub_80EE96C()
{
  __int16 v0; // r4@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = v2000304;
  if ( v2000304 )
  {
    if ( !(v202F38F & 0x80) )
    {
      sub_80F5BDC(0);
      sub_805469C();
    }
  }
  else
  {
    audio_play(0x6Fu);
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v0);
    ++v2000304;
  }
  return v2;
}
