int __fastcall sub_80DCF60(int a1)
{
  int v1; // r5@1
  __int16 v2; // r0@2
  __int16 v3; // r2@4
  __int16 v4; // r0@4
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  StartSpriteAnim(a1, word_3004B0A);
  AnimateSprite(v1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    v2 = *(_WORD *)(v1 + 32) - word_3004B00[0];
  else
    v2 = word_3004B00[0] + *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 32) = v2;
  v3 = word_3004B02 + *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 34) = v3;
  *(_WORD *)(v1 + 46) = word_3004B08;
  v4 = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 48) = v4;
  *(_WORD *)(v1 + 50) = v4 + word_3004B04;
  *(_WORD *)(v1 + 52) = v3;
  *(_WORD *)(v1 + 54) = v3 + word_3004B06;
  sub_8078A5C(v1);
  *(_WORD *)(v1 + 52) = 0;
  *(_WORD *)(v1 + 54) = 0;
  *(_DWORD *)(v1 + 28) = sub_8078394;
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  return v6;
}
