int __fastcall sub_812F948(int a1)
{
  int v1; // r5@1
  int v3; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = word_3004B06;
  StartSpriteAffineAnim(a1, word_3004B00[0]);
  if ( battle_side_get_owner(v202F7C9) << 24 )
    word_3004B02 = -word_3004B02;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) + word_3004B02;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) + word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80DA48C;
  return v3;
}
