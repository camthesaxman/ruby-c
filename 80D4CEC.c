int __fastcall sub_80D4CEC(int a1)
{
  int v1; // r4@1
  int v2; // r6@1
  int v3; // r5@1
  __int16 v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) - *(_WORD *)(a1 + 32);
  v3 = *(_WORD *)(a1 + 50) - *(_WORD *)(a1 + 34);
  *(_WORD *)(v1 + 36) = *(_WORD *)(v1 + 46) * v2 / *(_WORD *)(v1 + 52);
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 46) * v3 / *(_WORD *)(v1 + 52);
  v4 = *(_WORD *)(a1 + 56) + 1;
  *(_WORD *)(v1 + 56) = v4;
  if ( v4 == *(_WORD *)(v1 + 54) )
  {
    *(_WORD *)(v1 + 56) = 0;
    sub_80D4D64(v1, v2, v3);
  }
  if ( *(_WORD *)(v1 + 52) == *(_WORD *)(v1 + 46) )
    move_anim_8072740(v1);
  ++*(_WORD *)(v1 + 46);
  return v6;
}
