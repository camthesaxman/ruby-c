int __fastcall sub_80DF4F4(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@1
  __int16 v3; // r1@2
  char *v4; // r0@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52);
  if ( *(_WORD *)(v1 + 52) )
  {
    *(_WORD *)(v1 + 52) = v2 - 1;
    *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 56) + 36] = sine(*(_WORD *)(v1 + 46), *(_WORD *)(v1 + 48));
    *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 56) + 38] = cosine(*(_WORD *)(v1 + 46), *(_WORD *)(v1 + 48));
    v3 = *(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 46);
    *(_WORD *)(v1 + 46) = v3;
    if ( v3 > 255 )
      *(_WORD *)(v1 + 46) = v3 - 256;
  }
  else
  {
    *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 56) + 36] = 0;
    *(_WORD *)&gSprites[68 * *(_WORD *)(v1 + 56) + 38] = 0;
    v4 = &gSprites[68 * *(_WORD *)(v1 + 56)];
    *((_WORD *)v4 + 17) -= 8;
    *(_DWORD *)(v1 + 28) = move_anim_8074EE0;
  }
  return v6;
}
