int __fastcall sub_811ADE4(int a1)
{
  int v1; // r5@1

  v1 = a1;
  sub_811D658();
  dp12_8087EA4();
  BeginNormalPaletteFade(-1, 4, 0, 0x10u, 0);
  sub_811D6E8(word_3005560, v200C014, 0, 2);
  SetVBlankCallback((int)sub_811AEE0);
  SetHBlankCallback((int)sub_811AF18);
  v4000200 |= 3u;
  v4000004 |= 0x18u;
  ++*(_WORD *)(v1 + 8);
  return 0;
}
