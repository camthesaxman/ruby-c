int __fastcall sub_80DF63C(int a1)
{
  int v1; // r5@1
  __int16 v2; // r1@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078650(a1);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = word_3004B02;
    *(_WORD *)(v1 + 32) -= word_3004B02;
    *(_WORD *)(v1 + 34) += v2;
    *(_WORD *)(v1 + 50) -= word_3004B04;
    *(_WORD *)(v1 + 54) += word_3004B06;
  }
  else
  {
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    *(_WORD *)(v1 + 34) += word_3004B02;
    *(_WORD *)(v1 + 50) += word_3004B04;
    *(_WORD *)(v1 + 54) += word_3004B06;
    StartSpriteAnim(v1, 1);
  }
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  return v4;
}
