int __fastcall sub_80D792C(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    *(_WORD *)(v1 + 50) -= word_3004B04;
  else
    *(_WORD *)(v1 + 50) += word_3004B04;
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u) + word_3004B06;
  *(_WORD *)(v1 + 46) = word_3004B08;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  return v3;
}
