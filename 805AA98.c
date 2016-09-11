int sub_805AA98()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  strange_npc_table_clear();
  npcs_clear_ids_and_state();
  v0 = ClearPlayerAvatarInfo();
  sub_805AAB0(v0);
  return v2;
}
