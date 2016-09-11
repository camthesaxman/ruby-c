int __fastcall sub_811AF7C(int a1)
{
  int v1; // r5@1

  v1 = a1;
  sub_811D658();
  dp12_8087EA4();
  BeginNormalPaletteFade(-1, 4, 0, 0x10u, 0);
  memset(word_3005560, v200C016, 320);
  SetVBlankCallback((int)sub_811B08C);
  SetHBlankCallback((int)sub_811B0C4);
  v4000200 |= 3u;
  v4000004 |= 0x18u;
  ++*(_WORD *)(v1 + 8);
  return 0;
}
