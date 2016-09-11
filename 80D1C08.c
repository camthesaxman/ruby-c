int __fastcall sub_80D1C08(int a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_80787B0(a1, 0);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C8, 0) + word_3004B04;
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C8, 1u) + word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  sub_80D1BA8(v1, (unsigned __int8)word_3004B0A, (unsigned __int8)word_3004B0C);
  return v3;
}
