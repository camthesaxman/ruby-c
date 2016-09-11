int __fastcall sub_811C43C(int a1)
{
  int v1; // r6@1

  v1 = a1;
  v200C018 -= 8;
  v200C01A += 8;
  if ( sub_811CA44(*(_WORD *)(a1 + 36)) << 16 )
  {
    v200C000 = 0;
    SetVBlankCallback(0);
    v40000BA &= 0xC5FFu;
    v40000BA &= 0x7FFFu;
    memset(word_3004DE0, 0, 320);
    memset(word_3005560, 0, 320);
    v4000040 = 240;
    v4000054 = 0;
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 14) = 0;
    *(_WORD *)(v1 + 16) = 0;
    v200C00E = 191;
    SetVBlankCallback((int)sub_811C700);
  }
  return 0;
}
