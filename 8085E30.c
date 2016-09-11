int __fastcall sub_8085E30(int a1)
{
  int v1; // r2@1
  char *v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)&gSprites[68 * *(_WORD *)(a1 + 20) + 46] > 1 )
  {
    v2 = &gSprites[68 * *(_WORD *)(a1 + 22)];
    ++*((_WORD *)v2 + 23);
    ++*(_WORD *)(v1 + 8);
  }
  return v4;
}
