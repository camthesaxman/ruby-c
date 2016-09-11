signed int __fastcall sub_811CA94(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r2@1

  v1 = a1;
  sub_811D658();
  dp12_8087EA4();
  v2 = 0;
  *(_WORD *)(v1 + 12) = 256;
  *(_WORD *)(v1 + 14) = 1;
  v200C002 = 63;
  v200C004 = 0;
  v200C008 = 160;
  do
  {
    word_3005560[v2] = v200C014;
    word_3005560[v2 + 160] = 240;
    v2 = (v2 + 1) & 0xFFFF;
  }
  while ( v2 <= 0x9F );
  v4000200 |= 2u;
  v4000004 |= 0x10u;
  SetVBlankCallback((int)sub_811CC28);
  SetHBlankCallback((int)sub_811CCB0);
  ++*(_WORD *)(v1 + 8);
  return 1;
}
