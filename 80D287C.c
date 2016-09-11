int __fastcall sub_80D287C(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) += *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 38) += *(_WORD *)(a1 + 48);
  v2 = *(_WORD *)(a1 + 52);
  *(_WORD *)(v1 + 52) = v2 + 1;
  if ( v2 >= (signed int)*(_WORD *)(v1 + 50) )
    move_anim_8072740(v1);
  return v4;
}
