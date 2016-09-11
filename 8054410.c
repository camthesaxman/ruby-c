int c2_load_new_map_2()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v0 = sub_80547A8();
  sub_8074D08(v0);
  ResetSafariZoneFlag_();
  NewGameInitData();
  player_avatar_init_params_reset();
  v1 = PlayTimeCounter_Start();
  v2 = script_env_1_init(v1);
  script_env_2_disable(v2);
  dword_300485C = (int)sub_80C76A0;
  v3 = do_load_map_stuff_loop(&byte_3001BAC);
  SetFieldVBlankCallback(v3);
  set_callback1((int)c1_overworld);
  SetMainCallback2((int)c2_overworld);
  return v5;
}
