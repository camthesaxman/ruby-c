int __fastcall sub_80D8700(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned __int8 v3; // r0@9
  unsigned __int8 v4; // r1@9
  int v6; // [sp+14h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = word_3004B00[0];
  v2 = sub_8077ABC(v202F7C8, 2u);
  if ( v2 << 24 < (unsigned int)(sub_8077ABC(v202F7C9, 2u) << 24) )
    *(_WORD *)(v1 + 60) = -32768;
  if ( !(*(_BYTE *)(v202F7C9 + 0x2024A72) & 1) )
  {
    word_3004B02 = -word_3004B02;
    word_3004B06 = -word_3004B06;
    if ( *(_WORD *)(v1 + 60) & 0x8000 && !(*(_BYTE *)(v202F7C8 + 0x2024A72) & 1) )
      *(_BYTE *)(v1 + 67) = gSprites[68 * (unsigned __int8)obj_id_for_side_relative_to_move(1) + 67] + 1;
    *(_WORD *)(v1 + 58) = 1;
  }
  *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C8, 3u);
  if ( word_3004B0E )
  {
    *(_WORD *)(v1 + 48) = word_3004B02 + *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u) + word_3004B06;
    *(_WORD *)(v1 + 52) = word_3004B04 + *(_WORD *)(v1 + 34);
    v3 = v202F7C9;
    v4 = 3;
  }
  else
  {
    *(_WORD *)(v1 + 48) = word_3004B02 + *(_WORD *)(v1 + 32);
    *(_WORD *)(v1 + 50) = (unsigned __int8)sub_8077ABC(v202F7C9, 0) + word_3004B06;
    *(_WORD *)(v1 + 52) = word_3004B04 + *(_WORD *)(v1 + 34);
    v3 = v202F7C9;
    v4 = 1;
  }
  *(_WORD *)(v1 + 54) = (unsigned __int8)sub_8077ABC(v3, v4) + word_3004B08;
  *(_WORD *)(v1 + 60) |= (unsigned __int16)sub_8079ED4(v202F7C9) << 8;
  if ( sub_8076BE0() << 24 )
  {
    *(_WORD *)(v1 + 58) = 1;
    *(_BYTE *)(v1 + 67) = -128;
  }
  obj_translate_based_on_private_1_2_3_4(v1);
  *(_DWORD *)(v1 + 28) = sub_80D8874;
  return v6;
}
