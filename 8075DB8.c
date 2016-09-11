int ma09_play_sound()
{
  int v1; // [sp+4h] [bp-4h]@0

  audio_play(*v202F7A4 | (unsigned __int16)(*(_BYTE *)(++v202F7A4 + 1) << 8));
  v202F7A4 += 2;
  return v1;
}
