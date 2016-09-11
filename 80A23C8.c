int __fastcall sub_80A23C8(unsigned __int8 a1, unsigned __int8 a2, char a3, int a4)
{
  int v4; // r8@1
  unsigned __int8 v5; // r5@1
  int v6; // r4@1
  char v7; // r6@1
  int v9; // [sp+10h] [bp-4h]@0

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v7 = a3;
  sub_80A2318(a1, a2);
  npc_obj_offscreen_culling_and_flag_update(v6, v4);
  sub_80A22D0(v5, v6, v7);
  return v9;
}
