int __fastcall sub_807941C(int a1)
{
  int v1; // r5@1
  int v2; // r1@1
  unsigned __int8 v3; // r7@3
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( !(word_3004B0A & 0xFF00) )
    v2 = 1;
  v3 = 1;
  if ( !(_BYTE)word_3004B0A )
    v3 = 3;
  sub_80787B0(a1, v2);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + word_3004B04;
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, v3) + word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v5;
}
