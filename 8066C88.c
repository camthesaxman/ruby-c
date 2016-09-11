int __fastcall s57_move_sprites(int a1)
{
  int v1; // r6@1
  unsigned __int16 v2; // r0@1
  unsigned __int8 v3; // r5@1
  unsigned __int16 v4; // r0@1
  unsigned __int16 v5; // r4@1
  unsigned __int16 v6; // r0@1
  __int16 v7; // r0@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  v4 = script_read_halfword(v1);
  v5 = VarGet(v4);
  v6 = script_read_halfword(v1);
  v7 = VarGet(v6);
  sub_805C0F8(v3, v2025739, v2025738, v5, v7);
  return 0;
}
