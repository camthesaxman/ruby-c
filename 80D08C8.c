int __fastcall sub_80D08C8(unsigned __int8 a1)
{
  int *v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = obj_id_for_side_relative_to_move(0);
  sub_80798F4((int)v1, v2);
  *v1 = (int)sub_80D0904;
  return v4;
}
