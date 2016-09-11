signed int __fastcall sub_805A0D8(int a1, int a2)
{
  ++*(_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 10) = (unsigned int)*(_BYTE *)(a2 + 24) >> 4;
  v202E85E = 1;
  script_env_2_enable(1);
  audio_play(45);
  return 1;
}
