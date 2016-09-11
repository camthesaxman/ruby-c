int __fastcall sub_80B6B9C(int a1)
{
  int v1; // r3@1
  char *v2; // r4@1
  char *v3; // r5@1
  __int16 v4; // r0@1

  v1 = a1;
  v2 = &gSprites[68 * *(_WORD *)(a1 + 58)];
  v3 = &gSprites[68 * *(_WORD *)(a1 + 60)];
  v4 = *((_WORD *)v2 + 19) + 1;
  *((_WORD *)v2 + 19) = v4;
  if ( v4 > 7 )
  {
    ++*(_WORD *)(v1 + 46);
    *((_WORD *)v2 + 19) = -4;
    v2[62] |= 4u;
    sub_80B6C48(((*(_WORD *)(v1 + 48) & 0xFF) + 1) % 3 & 0xFF, v2, v3);
  }
  return 0;
}
