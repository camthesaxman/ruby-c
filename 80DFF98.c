int __fastcall sub_80DFF98(int a1)
{
  int v1; // r3@1
  int v2; // r1@1
  int v3; // r0@1
  int v4; // r0@1
  int v6; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 54) - *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 54) = v2;
  v3 = *(_WORD *)(a1 + 56) - *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 56) = v3;
  *(_WORD *)(v1 + 36) = v2 << 16 >> 24;
  *(_WORD *)(v1 + 38) = v3 << 16 >> 24;
  v4 = *(_WORD *)(v1 + 52) - 1;
  *(_WORD *)(v1 + 52) = v4;
  if ( !(v4 << 16) )
    move_anim_8074EE0(v1);
  return v6;
}
