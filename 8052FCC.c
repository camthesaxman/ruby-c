int new_game()
{
  int v1; // [sp+0h] [bp-4h]@0

  player_avatar_init_params_reset();
  FlagReset(2091);
  FlagReset(2093);
  FlagReset(2092);
  FlagReset(2089);
  FlagReset(2088);
  script_env_2_execute_new_script(&gUnknown_0819FC9F);
  return v1;
}
