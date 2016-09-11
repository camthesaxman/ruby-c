int __fastcall sub_80DA410(int a1)
{
  int v1; // r4@1
  unsigned int v2; // r1@1
  unsigned __int8 v3; // r0@5
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = 1;
  sub_8078B5C(a1);
  v2 = *(_WORD *)(v1 + 52);
  if ( v2 >> 8 > 0xC8 )
  {
    *(_WORD *)(v1 + 32) += *(_WORD *)(v1 + 36);
    *(_WORD *)(v1 + 36) = 0;
    *(_WORD *)(v1 + 52) = (unsigned __int8)v2;
  }
  if ( (unsigned int)(*(_WORD *)(v1 + 32) + *(_WORD *)(v1 + 36) + 32) > 0x130
    || *(_WORD *)(v1 + 34) + (signed int)*(_WORD *)(v1 + 38) > 160 )
  {
    v3 = obj_id_for_side_relative_to_move(0);
    gSprites[68 * v3 + 62] &= 0xFBu;
    move_anim_8072740(v1);
  }
  return v5;
}
