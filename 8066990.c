int __fastcall s31_fanfare_play(int a1)
{
  unsigned __int16 v1; // r0@1

  v1 = script_read_halfword(a1);
  fanfare_play(v1);
  return 0;
}
