signed int __fastcall sub_811D200(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r1@1

  v1 = a1;
  sub_811D658();
  dp12_8087EA4();
  v200C002 = 63;
  v200C004 = 0;
  v200C008 = 160;
  v2 = 0;
  do
  {
    word_3004DE0[v2] = 240;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x9F );
  CpuSet(word_3004DE0, word_3005560, 160);
  SetVBlankCallback((int)sub_811D438);
  ++*(_WORD *)(v1 + 8);
  return 1;
}
