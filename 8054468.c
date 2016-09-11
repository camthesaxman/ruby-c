int c2_whiteout()
{
  int v0; // r0@2
  signed int v1; // r0@2
  int v2; // r0@2
  int v3; // r0@2
  char v5; // [sp+0h] [bp-8h]@2
  int v6; // [sp+4h] [bp-4h]@3

  if ( (unsigned __int8)++byte_3001BAC > 0x77u )
  {
    v0 = sub_80547A8();
    sub_8074D08(v0);
    ResetSafariZoneFlag_();
    sub_8052F5C();
    v1 = player_avatar_init_params_reset();
    v2 = script_env_1_init(v1);
    script_env_2_disable(v2);
    dword_300485C = (int)sub_8080B60;
    v5 = 0;
    v3 = do_load_map_stuff_loop(&v5);
    SetFieldVBlankCallback(v3);
    set_callback1((int)c1_overworld);
    SetMainCallback2((int)c2_overworld);
  }
  return v6;
}
