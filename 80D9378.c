int __fastcall sub_80D9378(int a1)
{
  int v1; // r6@1
  __int16 v2; // r0@6
  __int16 v3; // r0@6
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( (v202F7C8 ^ 2) == v202F7C9 && (unsigned __int8)battle_get_per_side_status(v202F7C9) <= 1u )
    word_3004B00[0] = -word_3004B00[0];
  sub_8078764(v1, 1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B06;
  v2 = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 48) = v2;
  *(_WORD *)(v1 + 50) = v2 + word_3004B04;
  v3 = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 52) = v3;
  *(_WORD *)(v1 + 54) = v3;
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_WORD *)(v1 + 56) = word_3004B0A;
  *(_WORD *)(v1 + 58) = word_3004B08;
  *(_WORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 28) = sub_80D9404;
  return v5;
}
