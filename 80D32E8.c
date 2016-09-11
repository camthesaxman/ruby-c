int __fastcall sub_80D32E8(int a1)
{
  int v1; // r5@1
  char *v2; // r7@1
  int v3; // r4@1
  unsigned int v4; // r8@1
  int v5; // r4@1
  int v7; // [sp+18h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * (*(_WORD *)(a1 + 56) & 0xFF)];
  v3 = *((_WORD *)v2 + 27) & 0xFF;
  v4 = *((_WORD *)v2 + 26);
  *(_WORD *)(a1 + 46) = 1;
  sub_8078B5C(a1);
  *(_WORD *)(v1 + 36) += sine(v4 >> 8, *((_WORD *)v2 + 23));
  *(_WORD *)(v1 + 38) += cosine(v4 >> 8, *((_WORD *)v2 + 24));
  *((_WORD *)v2 + 26) = v4 + *((_WORD *)v2 + 25);
  v5 = (v3 - 1) & 0xFF;
  if ( v5 )
  {
    *((_WORD *)v2 + 27) = v5;
  }
  else
  {
    *(_DWORD *)(v1 + 28) = sub_80D3370;
    DestroySprite((int)v2);
  }
  return v7;
}
