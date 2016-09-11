int __fastcall sub_8086E10(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1

  v1 = a1;
  v2 = &gSprites[68 * v202E85C];
  *((_WORD *)v2 + 18) = cosine(124, *(_WORD *)(a1 + 10));
  *((_WORD *)v2 + 19) = sine(118, *(_WORD *)(v1 + 10));
  ++*(_WORD *)(v1 + 8);
  return 0;
}
