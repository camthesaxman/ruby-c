signed int __fastcall sub_811BCF4(int a1)
{
  int v1; // r5@1
  unsigned int v2; // r2@1

  v1 = a1;
  sub_811D658();
  dp12_8087EA4();
  v2 = 0;
  do
  {
    word_3005560[v2] = v200C016;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 0x9F );
  SetVBlankCallback((int)sub_811BE3C);
  SetHBlankCallback((int)sub_811BE74);
  v4000200 |= 2u;
  v4000004 |= 0x10u;
  ++*(_WORD *)(v1 + 8);
  return 1;
}
