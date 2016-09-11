int __fastcall sub_80D6E38(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@4
  __int16 v4; // r2@6
  char *v5; // r0@6
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      v4 = *(_WORD *)(v1 + 60);
      *(_WORD *)(v1 + 32) += v4;
      v5 = &gSprites[68 * *(_WORD *)(v1 + 58)];
      *((_WORD *)v5 + 18) += v4;
      if ( ((unsigned int)*(_WORD *)(v1 + 32) + 80) << 16 > 0x1900000 )
        move_anim_8074EE0(v1);
    }
  }
  else
  {
    v3 = *(_WORD *)(v1 + 48) + 1;
    *(_WORD *)(v1 + 48) = v3;
    if ( v3 > 40 )
      ++*(_WORD *)(v1 + 46);
  }
  return v7;
}
