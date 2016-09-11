int __fastcall sub_80D4C18(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(v1 + 54) = *(_WORD *)(a1 + 54) - *(_WORD *)(v1 + 46);
  *(_WORD *)(a1 + 38) = *(_WORD *)(a1 + 54) / 10;
  *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 48) + *(_WORD *)(v1 + 56)) & 0xFF;
  *(_WORD *)(v1 + 36) = sine(*(_WORD *)(v1 + 56), *(_WORD *)(v1 + 50));
  v2 = *(_WORD *)(v1 + 52) - 1;
  *(_WORD *)(v1 + 52) = v2;
  if ( !(v2 << 16) )
    move_anim_8072740(v1);
  return v4;
}
