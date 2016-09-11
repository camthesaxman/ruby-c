int __fastcall sub_811B268(int a1)
{
  int v1; // r3@1
  __int16 v2; // r1@4

  v200C000 = 0;
  v1 = *(_WORD *)(a1 + 14);
  if ( !*(_WORD *)(a1 + 14) || (*(_WORD *)(a1 + 14) = v1 - 1, !((v1 - 1) << 16)) )
  {
    ++*(_WORD *)(a1 + 12);
    *(_WORD *)(a1 + 14) = 2;
  }
  v2 = *(_WORD *)(a1 + 12);
  v200C010 = (*(_WORD *)(a1 + 10) << 8) | v2;
  if ( v2 > 15 )
    ++*(_WORD *)(a1 + 8);
  *(_WORD *)(a1 + 16) += 8;
  *(_WORD *)(a1 + 18) -= 256;
  sub_811D6E8(word_3004DE0, 0, *(_WORD *)(a1 + 16), 132);
  ++v200C000;
  return 0;
}
