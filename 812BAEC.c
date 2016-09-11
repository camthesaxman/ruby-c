int dp01t_11_6_message_for_player_only()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( battle_side_get_owner(v2024A60) << 24 )
    dp01_tbl6_exec_completed();
  else
    dp01t_10_6_message();
  return v1;
}
