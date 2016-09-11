int __fastcall sub_811C5E8(int a1)
{
  int v1; // r4@1

  v1 = a1;
  v200C000 = 0;
  memset(word_3004DE0, ++*(_WORD *)(a1 + 14), 320);
  if ( (signed int)*(_WORD *)(v1 + 14) > 15 )
    ++*(_WORD *)(v1 + 8);
  ++v200C000;
  return 0;
}
