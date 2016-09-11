int __fastcall sub_80D927C(int a1)
{
  int v1; // r5@1
  int v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    --*(_WORD *)(a1 + 46);
  }
  else
  {
    v2 = *(_WORD *)(a1 + 60);
    if ( v2 != 64 )
    {
      FreeOamMatrix((unsigned int)(unsigned __int8)gSprites[68 * v2 + 3] << 26 >> 27);
      DestroySprite((int)&gSprites[68 * *(_WORD *)(v1 + 60)]);
    }
    move_anim_8072740(v1);
  }
  return v4;
}
