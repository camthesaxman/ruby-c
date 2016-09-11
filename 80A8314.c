int __fastcall sub_80A8314(unsigned __int8 a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int *v3; // r1@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = (unsigned __int8)obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  *(_WORD *)&gSprites[68 * v2 + 36] = word_3004B02;
  v3 = &dword_3004B20[10 * v1];
  *((_WORD *)v3 + 4) = v2;
  *((_WORD *)v3 + 5) = word_3004B02;
  *((_WORD *)v3 + 6) = word_3004B04;
  *((_WORD *)v3 + 7) = word_3004B06;
  *((_WORD *)v3 + 8) = word_3004B08;
  *v3 = (int)sub_80A8374;
  call_via_r2(v1, v3, sub_80A8374);
  return v5;
}
