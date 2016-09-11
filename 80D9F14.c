int __fastcall sub_80D9F14(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@3
  __int16 v3; // r1@3
  __int16 v4; // r3@3
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_807A3FC(v202F7C9, 1, (_WORD *)(v1 + 32), (_WORD *)(v1 + 34));
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B00[0] = -word_3004B00[0];
  v2 = word_3004B00[0] + *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 32) = v2;
  v3 = word_3004B02 + *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 34) = v3;
  v4 = word_3004B08;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = v2 + word_3004B04;
  *(_WORD *)(v1 + 54) = v3 + v4;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v6;
}
