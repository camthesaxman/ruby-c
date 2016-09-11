int __fastcall sub_8086BE4(int a1)
{
  int v1; // r5@1
  char *v2; // r4@1
  __int16 v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * v202E85C];
  *((_WORD *)v2 + 18) = cosine(124, *(_WORD *)(a1 + 12));
  *((_WORD *)v2 + 19) = sine(118, *(_WORD *)(v1 + 12));
  v3 = *(_WORD *)(v1 + 14) + 1;
  *(_WORD *)(v1 + 14) = v3;
  if ( v3 & 1 )
    ++*(_WORD *)(v1 + 12);
  return v5;
}
