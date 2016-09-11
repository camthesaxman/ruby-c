int __fastcall sub_80DB194(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  unsigned __int8 v3; // r0@4
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( v2 )
  {
    if ( v2 == 1 && *(_BYTE *)(v1 + 63) & 0x20 )
      move_anim_8072740(v1);
  }
  else
  {
    sub_80787B0(v1, 1);
    v3 = obj_id_for_side_relative_to_move(0);
    gSprites[68 * v3 + 62] |= 4u;
    ++*(_WORD *)(v1 + 46);
  }
  return v5;
}
