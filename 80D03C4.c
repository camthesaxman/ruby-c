int __fastcall sub_80D03C4(unsigned __int8 a1)
{
  int v1; // r5@1
  unsigned __int8 v2; // r0@1
  int v3; // r4@1
  int *v4; // r0@1
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = obj_id_for_side_relative_to_move(1);
  v3 = v2;
  sub_8078E70(v2, 1);
  obj_id_set_rotscale(v3, 0xD0u, 208, 0);
  sub_8079108(((unsigned int)(unsigned __int8)gSprites[68 * v3 + 5] >> 4) + 16, 0);
  v4 = &dword_3004B20[10 * v1];
  *((_WORD *)v4 + 4) = 80;
  *v4 = (int)sub_80D0428;
  return v6;
}
