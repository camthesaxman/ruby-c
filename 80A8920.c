int __fastcall sub_80A8920(unsigned __int8 a1)
{
  int v1; // r6@1
  __int16 v2; // r7@1
  int *v3; // r4@3
  int v5; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 0x8000 / word_3004B06;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    word_3004B02 = -word_3004B02;
    word_3004B0A = -word_3004B0A;
  }
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 4) = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  *((_WORD *)v3 + 5) = (word_3004B02 << 8) / word_3004B06;
  *((_WORD *)v3 + 6) = word_3004B04;
  *((_WORD *)v3 + 7) = word_3004B06;
  *((_WORD *)v3 + 8) = word_3004B08;
  *((_WORD *)v3 + 9) = (word_3004B0A << 8) / word_3004B0C;
  *((_WORD *)v3 + 10) = word_3004B0C;
  *((_WORD *)v3 + 11) = v2;
  *v3 = (int)sub_80A89B4;
  return v5;
}
