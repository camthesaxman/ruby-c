int __fastcall sub_811B2F4(int a1)
{
  int v1; // r3@1
  int v2; // r2@1
  int v3; // r0@4

  v1 = a1;
  v200C000 = 0;
  v2 = *(_WORD *)(a1 + 14);
  if ( !*(_WORD *)(a1 + 14) || (*(_WORD *)(a1 + 14) = v2 - 1, !((v2 - 1) << 16)) )
  {
    --*(_WORD *)(a1 + 10);
    *(_WORD *)(a1 + 14) = 2;
  }
  v3 = *(_WORD *)(a1 + 10);
  v200C010 = ((_WORD)v3 << 8) | *(_WORD *)(v1 + 12);
  if ( !(v3 << 16) )
    ++*(_WORD *)(v1 + 8);
  *(_WORD *)(v1 + 16) += 8;
  *(_WORD *)(v1 + 18) -= 256;
  sub_811D6E8(word_3004DE0, 0, *(_WORD *)(v1 + 16), 132);
  ++v200C000;
  return 0;
}
