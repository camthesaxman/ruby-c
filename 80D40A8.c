int __fastcall sub_80D40A8(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v3; // r3@1
  int v4; // r0@2
  __int16 v5; // r0@4
  int v7; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48);
  v3 = v2 + *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 52) = v3;
  *(_WORD *)(v1 + 54) += *(_WORD *)(v1 + 50);
  if ( v2 & 1 )
    v4 = -(v3 << 16 >> 24);
  else
    v4 = v3 << 16 >> 24;
  *(_WORD *)(v1 + 36) = v4;
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 54) << 16 >> 24;
  v5 = *(_WORD *)(v1 + 46) + 1;
  *(_WORD *)(v1 + 46) = v5;
  if ( v5 == 21 )
    move_anim_8072740(v1);
  return v7;
}
