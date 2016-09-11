int __fastcall sub_80D2CF8(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = obj_id_for_side_relative_to_move(LOBYTE(word_3004B00[0]));
  sub_80798F4((int)&dword_3004B20[10 * v1], v2);
  dword_3004B20[10 * v1] = (int)sub_80D2D3C;
  return v4;
}
