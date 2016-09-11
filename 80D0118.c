int __fastcall sub_80D0118(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 0);
  if ( !(battle_side_get_owner(v202F7C8) << 24) )
    *(_WORD *)(v1 + 34) += 16;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 48) = word_3004B04;
  *(_WORD *)(v1 + 50) = word_3004B0A;
  *(_WORD *)(v1 + 52) = word_3004B0C;
  *(_WORD *)(v1 + 54) = word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_8078114;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  call_via_r1(v1, *(_DWORD *)(v1 + 28));
  return v3;
}
