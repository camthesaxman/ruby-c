int __fastcall sub_80DCBCC(int a1)
{
  int v1; // r7@1
  int v2; // r4@6
  int v3; // r4@10
  unsigned __int8 v4; // r0@10
  int v5; // r5@10
  int v6; // r0@10
  int v8; // [sp+14h] [bp-4h]@0

  v1 = a1;
  if ( sub_8076BE0() << 24 )
  {
    word_3004B04 = -word_3004B04;
  }
  else if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    word_3004B04 = -word_3004B04;
    word_3004B02 = -word_3004B02;
    word_3004B06 = -word_3004B06;
  }
  if ( !(sub_8076BE0() << 24) )
  {
    v2 = battle_side_get_owner(v202F7C8);
    if ( v2 << 24 == battle_side_get_owner(v202F7C9) << 24
      && (!(battle_get_per_side_status(v202F7C9) << 24) || (unsigned __int8)battle_get_per_side_status(v202F7C9) == 1) )
    {
      word_3004B04 = -word_3004B04;
      word_3004B00[0] = -word_3004B00[0];
    }
  }
  sub_80787B0(v1, 1);
  v3 = ((unsigned __int8)sub_8077ABC(v202F7C9, 2u) + (unsigned __int16)word_3004B04) & 0xFFFF;
  v4 = sub_8077ABC(v202F7C9, 3u);
  v5 = (v4 + (unsigned __int16)word_3004B06) & 0xFFFF;
  v6 = sub_80790F0(v3 - *(_WORD *)(v1 + 32), v4 + word_3004B06 - *(_WORD *)(v1 + 34));
  sub_8078FDC(v1, 0, 0x100u, 0x100u, (unsigned int)((v6 << 16) - 0x40000000) >> 16);
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = v3;
  *(_WORD *)(v1 + 54) = v5;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v8;
}
