int __fastcall sub_807A960(int a1)
{
  __int16 v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  *(_WORD *)(a1 + 50) += *(_WORD *)(a1 + 46);
  v1 = *(_WORD *)(a1 + 48);
  *(_WORD *)(a1 + 52) += v1;
  *(_WORD *)(a1 + 36) = *(_WORD *)(a1 + 50) / 10;
  *(_WORD *)(a1 + 38) = *(_WORD *)(a1 + 52) / 10;
  if ( v1 < -20 )
    *(_WORD *)(a1 + 48) = v1 + 1;
  if ( *(_WORD *)(a1 + 34) + (signed int)*(_WORD *)(a1 + 38) < -32 )
    move_anim_8072740(a1);
  return v3;
}
