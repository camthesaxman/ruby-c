int CB2_ContinueSavedGame()
{
  int v0; // r0@1
  int v1; // r0@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r0@3
  int v8; // [sp+0h] [bp-4h]@0

  v0 = sub_80547A8();
  sub_8074D08(v0);
  ResetSafariZoneFlag_();
  sub_805338C();
  v1 = sub_8053198();
  v2 = sub_806451C(v1);
  InTrainerHill(v2);
  v3 = sub_805308C();
  sub_8055FC0(v3);
  v4 = PlayTimeCounter_Start();
  v5 = script_env_1_init(v4);
  script_env_2_disable(v5);
  if ( sub_80479F8() == 1 )
  {
    sub_8047A04();
    sub_8053778();
    warp_in();
    SetMainCallback2((int)c2_load_new_map);
  }
  else
  {
    dword_300485C = (int)sub_805470C;
    v6 = set_callback1((int)c1_overworld);
    c2_exit_to_overworld_2_switch(v6);
  }
  return v8;
}
