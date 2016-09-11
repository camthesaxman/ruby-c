int __fastcall sub_811B380(int a1)
{
  int v1; // r4@1

  v1 = a1;
  v200C000 = 0;
  *(_WORD *)(a1 + 16) += 8;
  *(_WORD *)(a1 + 18) -= 256;
  sub_811D6E8(word_3004DE0, 0, *(_WORD *)(a1 + 16), 132);
  if ( (signed int)*(_WORD *)(v1 + 18) <= 0 )
  {
    ++*(_WORD *)(v1 + 8);
    *(_WORD *)(v1 + 10) = 160;
    *(_WORD *)(v1 + 12) = 256;
    *(_WORD *)(v1 + 14) = 0;
  }
  ++v200C000;
  return 0;
}
