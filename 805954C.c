int __fastcall sub_805954C(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  audio_play(34);
  v2 = sub_8060A5C(v1);
  player_npc_set_state_and_x22_etc(v2, 1);
  return v4;
}
