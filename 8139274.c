int dp01t_11_5_message_for_player_only()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( battle_side_get_owner(v2024A60) << 24 )
    dp01_tbl5_exec_completed();
  else
    sub_8139208();
  return v1;
}
