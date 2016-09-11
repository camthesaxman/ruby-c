int __fastcall npc_use_some_d2s(unsigned __int8 a1)
{
  unsigned __int8 v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = d2s_08064034(a1);
  player_npc_set_state_and_x22_etc(v1, 2);
  return v3;
}
