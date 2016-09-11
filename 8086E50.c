int __fastcall sub_8086E50(int a1)
{
  int v1; // r4@1
  char *v2; // r5@1
  __int16 v3; // r0@1

  v1 = a1;
  v2 = &gSprites[68 * v202E85C];
  *((_WORD *)v2 + 18) = cosine(124, *(_WORD *)(a1 + 10));
  *((_WORD *)v2 + 19) = sine(118, *(_WORD *)(v1 + 10));
  v3 = *(_WORD *)(v1 + 12) + 1;
  *(_WORD *)(v1 + 12) = v3;
  if ( v3 & 1 )
    --*(_WORD *)(v1 + 10);
  if ( !*(_WORD *)(v1 + 10) )
  {
    *((_WORD *)v2 + 18) = 0;
    *((_WORD *)v2 + 19) = 0;
    ++*(_WORD *)(v1 + 8);
  }
  return 0;
}
