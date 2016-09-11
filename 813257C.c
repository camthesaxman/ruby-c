int __fastcall sub_813257C(unsigned __int8 a1)
{
  int *v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  *((_WORD *)v1 + 4) = 0;
  v2 = obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  *((_WORD *)v1 + 19) = v2;
  sub_80798F4((int)v1, v2);
  *v1 = (int)sub_81325C4;
  return v4;
}
