int __fastcall sub_80D31C8(int a1)
{
  int v1; // r6@1
  __int16 *v2; // r4@2
  __int16 v3; // r0@2
  unsigned __int8 v4; // r0@6
  int v5; // r4@6
  char *v6; // r1@6
  int v8; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = word_3004B00;
    v3 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) - word_3004B00[0];
  }
  else
  {
    v2 = word_3004B00;
    v3 = (unsigned __int8)sub_8077ABC(v202F7C8, 2u) + word_3004B00[0];
  }
  *(_WORD *)(v1 + 32) = v3;
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u) + v2[1];
  *(_BYTE *)(v1 + 44) |= 0x40u;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B04 = -word_3004B04;
  *(_WORD *)(v1 + 46) = word_3004B0C;
  *(_WORD *)(v1 + 48) = *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 52) = *(_WORD *)(v1 + 34);
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  obj_translate_based_on_private_1_2_3_4(v1);
  v4 = object_new_hidden_with_callback((int)SpriteCallbackDummy);
  v5 = v4;
  *(_WORD *)(v1 + 56) = v4;
  *(_WORD *)(v1 + 32) -= sine((unsigned __int8)word_3004B08, word_3004B04);
  *(_WORD *)(v1 + 34) -= cosine((unsigned __int8)word_3004B08, word_3004B06);
  v6 = &gSprites[68 * v5];
  *((_WORD *)v6 + 23) = word_3004B04;
  *((_WORD *)v6 + 24) = word_3004B06;
  *((_WORD *)v6 + 25) = word_3004B0A;
  *((_WORD *)v6 + 26) = (unsigned __int8)word_3004B08 << 8;
  *((_WORD *)v6 + 27) = word_3004B0C;
  *(_DWORD *)(v1 + 28) = sub_80D32E8;
  call_via_r1(v1, sub_80D32E8);
  return v8;
}
