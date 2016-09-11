int __fastcall sub_80DD02C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  __int16 v3; // r0@1
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 54);
  *(_WORD *)(v1 + 54) = v2;
  *(_WORD *)(v1 + 38) = -(signed __int16)(v2 << 16 >> 24);
  *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 56), *(_WORD *)(v1 + 52));
  *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 50) + *(_WORD *)(v1 + 56)) & 0xFF;
  v3 = *(_WORD *)(v1 + 46) - 1;
  *(_WORD *)(v1 + 46) = v3;
  if ( v3 == -1 )
    move_anim_8072740(v1);
  return v5;
}
