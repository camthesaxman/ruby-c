int __fastcall sub_80CF6DC(int a1)
{
  int v1; // r5@1
  int v2; // r8@5
  unsigned __int8 v3; // r0@5
  int v4; // r7@5
  unsigned int v5; // r4@5
  int v7; // [sp+18h] [bp-4h]@0

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
  sub_80787B0(v1, 1);
  v2 = ((unsigned __int8)sub_8077ABC(v202F7C9, 2u) + (unsigned __int16)word_3004B04) & 0xFFFF;
  v3 = sub_8077ABC(v202F7C9, 3u);
  v4 = (v3 + (unsigned __int16)word_3004B06) & 0xFFFF;
  v5 = (unsigned int)((sub_80790F0(v2 - *(_WORD *)(v1 + 32), v3 + word_3004B06 - *(_WORD *)(v1 + 34)) << 16) - 0x10000000) >> 16;
  if ( sub_8076BE0() << 24 )
    v5 = (v5 - 24576) & 0xFFFF;
  sub_8078FDC(v1, 0, 0x100u, 0x100u, v5);
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = v2;
  *(_WORD *)(v1 + 54) = v4;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v7;
}
