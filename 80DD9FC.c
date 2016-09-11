int __fastcall sub_80DD9FC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) += 8;
  *(_WORD *)(a1 + 52) += *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 54) += *(_WORD *)(a1 + 50);
  *(_WORD *)(v1 + 36) += *(_WORD *)(a1 + 52) / 40;
  *(_WORD *)(v1 + 38) -= sine(*(_WORD *)(v1 + 46), *(_WORD *)(v1 + 56));
  if ( (signed int)*(_WORD *)(v1 + 46) > 140 )
    move_anim_8072740(v1);
  return v3;
}
