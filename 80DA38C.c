int __fastcall sub_80DA38C(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 32) = 272;
    *(_WORD *)(v1 + 34) = -32;
    StartSpriteAffineAnim(v1, 1);
  }
  else
  {
    *(_WORD *)(v1 + 32) = -32;
    *(_WORD *)(v1 + 34) = -32;
  }
  *(_WORD *)(v1 + 46) = word_3004B00[0];
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_DWORD *)(v1 + 28) = sub_80DA410;
  return v3;
}
