int __fastcall sub_8070A20(unsigned __int8 a1, int a2)
{
  int v2; // r6@1
  int v3; // r7@1
  int v4; // r0@1
  int v5; // r5@4
  int v6; // r2@4
  unsigned __int16 v7; // r4@4
  int v8; // r2@4
  unsigned __int16 v9; // r0@4
  int v10; // r2@4
  unsigned __int8 v11; // r0@4
  int v12; // r2@4
  int v13; // r0@4
  unsigned __int8 v14; // r0@4
  int v16; // [sp+10h] [bp-4h]@0

  v2 = a2;
  v3 = a1;
  v4 = (unsigned __int8)sub_80A1CD8(a2);
  if ( !v4 || v4 == 6 )
    v4 = sub_806FBB4(v2, v3);
  v5 = (unsigned __int8)battle_type_is_double(v4);
  v7 = GetMonData(v2, 57, v6);
  v9 = GetMonData(v2, 58, v8);
  sub_806E420(v3, v5, v7, v9);
  sub_806E674(v3, v2, v10);
  v11 = sub_806DDA0(v201C004, v3);
  v13 = sub_806D84C(v11, v2, v12);
  v14 = battle_type_is_double(v13);
  task_pc_turn_off(&gUnknown_083769A8[12 * v14] + 2 * v3, 7u);
  v201B261 = 2;
  return v16;
}
