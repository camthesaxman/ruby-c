int __fastcall sub_80CF374(int a1)
{
  int v1; // r4@1
  char *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * *(_WORD *)(a1 + 50)];
  *((_WORD *)v2 + 18) += *(_WORD *)(v1 + 48);
  *(_WORD *)(v1 + 48) = -*(_WORD *)(v1 + 48);
  if ( !*(_WORD *)(v1 + 46) )
  {
    *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 50) + 36] = 0;
    move_anim_8074EE0(v1);
  }
  --*(_WORD *)(v1 + 46);
  return v4;
}
