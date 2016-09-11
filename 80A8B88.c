int __fastcall sub_80A8B88(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@3
  int *v3; // r2@3
  __int16 v4; // r0@4
  int *v5; // r0@6
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    word_3004B02 = -word_3004B02;
  v2 = obj_id_for_side_relative_to_move((unsigned __int8)word_3004B08);
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 4) = word_3004B00[0];
  *((_WORD *)v3 + 5) = word_3004B02;
  *((_WORD *)v3 + 6) = word_3004B04;
  *((_WORD *)v3 + 7) = word_3004B06;
  *((_WORD *)v3 + 8) = v2;
  if ( word_3004B08 )
    v4 = v202F7C9;
  else
    v4 = v202F7C8;
  *((_WORD *)v3 + 9) = v4;
  v5 = &dword_3004B20[10 * v1];
  *((_WORD *)v5 + 16) = 1;
  *v5 = (int)sub_80A8C0C;
  return v7;
}
