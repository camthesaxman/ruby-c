int __fastcall sub_811CD14(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r1@1

  v1 = a1;
  sub_811D658();
  dp12_8087EA4();
  v200C00E = 191;
  v200C012 = 0;
  v200C002 = 30;
  v200C004 = 63;
  v200C008 = 160;
  v2 = 0;
  do
  {
    word_3005560[v2] = 0;
    word_3005560[v2 + 160] = 240;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x9F );
  v4000200 |= 2u;
  v4000004 |= 0x10u;
  SetHBlankCallback((int)sub_811CFAC);
  SetVBlankCallback((int)sub_811CEE4);
  ++*(_WORD *)(v1 + 8);
  return 0;
}
