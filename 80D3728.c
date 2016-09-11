int __fastcall sub_80D3728(int a1)
{
  int v1; // r6@1
  int v2; // r4@1
  int v3; // r1@5
  unsigned __int8 v4; // r7@7
  int v6; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = battle_side_get_owner(v202F7C8);
  if ( v2 << 24 == battle_side_get_owner(v202F7C9) << 24 )
  {
    word_3004B00[0] = -word_3004B00[0];
    if ( !(battle_get_per_side_status(v202F7C8) << 24) || (unsigned __int8)battle_get_per_side_status(v202F7C8) == 1 )
      word_3004B00[0] = -word_3004B00[0];
  }
  v3 = 0;
  if ( !(word_3004B0A & 0xFF00) )
    v3 = 1;
  v4 = 1;
  if ( !(_BYTE)word_3004B0A )
    v4 = 3;
  sub_80787B0(v1, v3);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + word_3004B04;
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, v4) + word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v6;
}
