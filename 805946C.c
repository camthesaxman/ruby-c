int __fastcall PlayerFaceDirection(unsigned __int8 a1)
{
  unsigned __int8 v1; // r0@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = GetFaceDirectionAnimId(a1);
  player_npc_set_state_and_x22_etc(v1, 1);
  return v3;
}
