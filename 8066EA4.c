int __fastcall s65_set_sprite_behaviour(int a1)
{
  int v1; // r4@1
  unsigned __int16 v2; // r0@1
  unsigned __int8 v3; // r0@1
  char *v4; // r2@1
  char v5; // r1@1

  v1 = a1;
  v2 = script_read_halfword(a1);
  v3 = VarGet(v2);
  v4 = *(char **)(v1 + 8);
  v5 = *v4;
  *(_DWORD *)(v1 + 8) = v4 + 1;
  update_saveblock1_field_object_movement_behavior(v3, v5);
  return 0;
}
