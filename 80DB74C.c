int __fastcall sub_80DB74C(int a1)
{
  int v1; // r6@1
  unsigned int v2; // r0@5
  int v3; // r4@5
  unsigned int v4; // r7@5
  unsigned __int8 v5; // r0@5
  int v6; // r5@5
  signed __int16 v7; // r0@12
  int v9; // [sp+10h] [bp-4h]@0

  v1 = a1;
  if ( !(battle_side_get_owner(v202F7C8) << 24) || sub_8076BE0() << 24 )
  {
    *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 8;
    *(_BYTE *)(v1 + 67) = -56;
  }
  if ( !(sub_8076BE0() << 24) )
  {
    v2 = battle_get_side_with_given_state(1u) << 24;
    v3 = v2 >> 24;
    v4 = v2 >> 24;
    v5 = battle_get_per_side_status_permutated(BYTE3(v2));
    v6 = (-(v5 ^ 1) | v5 ^ 1u) >> 31;
    if ( b_side_obj__get_some_boolean(v3) << 24 )
      sub_8076034(v3, v6);
    if ( b_side_obj__get_some_boolean(v4 ^ 2) << 24 )
      sub_8076034(v4 ^ 2, v6 ^ 1);
  }
  if ( sub_8076BE0() << 24 || !(battle_type_is_double() << 24) )
  {
    if ( battle_side_get_owner(v202F7C8) << 24 )
      word_3004B00[0] = -word_3004B00[0];
    *(_WORD *)(v1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C8, 0) + word_3004B00[0];
    v7 = (unsigned __int8)sub_8077ABC(v202F7C8, 1u) + word_3004B02;
  }
  else if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 32) = 176;
    v7 = 40;
  }
  else
  {
    *(_WORD *)(v1 + 32) = 72;
    v7 = 80;
  }
  *(_WORD *)(v1 + 34) = v7;
  if ( sub_8076BE0() << 24 )
    *(_WORD *)(v1 + 34) += 9;
  *(_WORD *)(v1 + 46) = (16 * IndexOfSpritePaletteTag(word_3004B04) & 0xFFF) + 256;
  *(_DWORD *)(v1 + 28) = sub_80DB88C;
  call_via_r1(v1, sub_80DB88C);
  return v9;
}
