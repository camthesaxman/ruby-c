int __fastcall sub_80A8D34(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  __int16 v3; // r5@1
  int *v4; // r0@1
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = obj_id_for_side_relative_to_move((unsigned __int8)word_3004B06);
  v3 = v2;
  sub_8078E70(v2, word_3004B08);
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 4) = word_3004B00[0];
  *((_WORD *)v4 + 5) = word_3004B02;
  *((_WORD *)v4 + 6) = word_3004B04;
  *((_WORD *)v4 + 7) = word_3004B04;
  *((_WORD *)v4 + 8) = v3;
  *((_WORD *)v4 + 14) = 256;
  *((_WORD *)v4 + 15) = 256;
  *v4 = (int)sub_80A8D8C;
  return v6;
}
