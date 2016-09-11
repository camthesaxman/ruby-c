int __fastcall sub_80CECE8(int a1)
{
  int v1; // r6@1
  int v3; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
    word_3004B02 = -word_3004B02;
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) + word_3004B02;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) + word_3004B04;
  StartSpriteAnim(v1, word_3004B00[0]);
  *(_WORD *)(v1 + 50) = 0;
  *(_WORD *)(v1 + 52) = 0;
  *(_WORD *)(v1 + 54) = 16 * *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 56) = 16 * *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 58) = 16 * word_3004B02 / 5;
  *(_WORD *)(v1 + 60) = (word_3004B04 << 7) / 5;
  *(_DWORD *)(v1 + 28) = sub_80CED78;
  return v3;
}
