int __fastcall s2F_music_play(int a1)
{
  unsigned __int16 v1; // r0@1

  v1 = script_read_halfword(a1);
  audio_play(v1);
  return 0;
}
