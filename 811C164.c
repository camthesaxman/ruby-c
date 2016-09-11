int __fastcall sub_811C164(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1

  v1 = a1;
  sub_811D658();
  dp12_8087EA4();
  sub_811C7B0(v1);
  *(_WORD *)(v1 + 10) = 0;
  *(_WORD *)(v1 + 12) = 1;
  *(_WORD *)(v1 + 14) = 239;
  v200C002 = 63;
  v200C004 = 62;
  v200C008 = 160;
  v2 = 0;
  do
  {
    word_3005560[v2] = -3855;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0x9F );
  SetVBlankCallback((int)sub_811C670);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
