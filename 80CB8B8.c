int __fastcall sub_80CB8B8(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) == 10 )
    StartSpriteAffineAnim(a1, 1);
  v2 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 > 50 )
    move_anim_8072740(v1);
  return v4;
}
