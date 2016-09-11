int __fastcall unref_sub_80CCB6C(int a1)
{
  int v1; // r5@1
  char *v2; // r0@3
  char *v3; // r0@3
  char *v4; // r0@4
  char *v5; // r0@4
  int v7; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 50) <= 1 )
  {
    ++*(_WORD *)(a1 + 50);
  }
  else
  {
    if ( *(_WORD *)(a1 + 52) & 1 )
    {
      *(_BYTE *)(a1 + 62) &= 0xFBu;
      v2 = &gSprites[68 * *(_WORD *)(a1 + 46) + 62];
      *v2 &= 0xFBu;
      v3 = &gSprites[68 * *(_WORD *)(v1 + 48) + 62];
      *v3 &= 0xFBu;
    }
    else
    {
      *(_BYTE *)(a1 + 62) |= 4u;
      v4 = &gSprites[68 * *(_WORD *)(a1 + 46) + 62];
      *v4 |= 4u;
      v5 = &gSprites[68 * *(_WORD *)(v1 + 48) + 62];
      *v5 |= 4u;
    }
    *(_WORD *)(v1 + 50) = 0;
    ++*(_WORD *)(v1 + 52);
  }
  if ( *(_WORD *)(v1 + 52) == 10 )
  {
    DestroySprite((int)&gSprites[68 * *(_WORD *)(v1 + 46)]);
    DestroySprite((int)&gSprites[68 * *(_WORD *)(v1 + 48)]);
    move_anim_8072740(v1);
  }
  return v7;
}
