int sub_8082524()
{
  int *v0; // r4@1
  unsigned __int8 v1; // r0@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = &dword_30048A0[9 * (unsigned __int8)byte_3004AE0];
  v1 = npc_running_behaviour_by_direction(*((_BYTE *)v0 + 24) & 0xF);
  npc_set_running_behaviour_etc((int)v0, v1);
  return v3;
}
