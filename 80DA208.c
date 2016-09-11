int __fastcall sub_80DA208(int a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@5
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    word_3004B00[0] = -word_3004B00[0];
    word_3004B02 = -word_3004B02;
    word_3004B04 = -word_3004B04;
    word_3004B06 = -word_3004B06;
  }
  if ( sub_8076BE0() << 24 )
  {
    word_3004B02 = -word_3004B02;
    word_3004B06 = -word_3004B06;
  }
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  v2 = sub_8077ABC(v202F7C8, 3u);
  *(_WORD *)(v1 + 32) += word_3004B00[0];
  *(_WORD *)(v1 + 34) = v2 + word_3004B02;
  *(_WORD *)(v1 + 46) = word_3004B08;
  if ( word_3004B0C )
  {
    sub_807A3FC(v202F7C9, 1, (_WORD *)(v1 + 50), (_WORD *)(v1 + 54));
  }
  else
  {
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
    *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  }
  *(_WORD *)(v1 + 50) += word_3004B04;
  *(_WORD *)(v1 + 54) += word_3004B06;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  SeekSpriteAnim(v1, word_3004B0A);
  return v4;
}
