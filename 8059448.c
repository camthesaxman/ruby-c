int __fastcall PlayerNotOnBikeCollide(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  PlayCollisionSoundIfNotFacingWarp(a1);
  v2 = GetStepInPlaceDelay32AnimId(v1);
  player_npc_set_state_and_x22_etc(v2, 2);
  return v4;
}
