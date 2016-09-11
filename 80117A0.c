int bc_battle_begin_message()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = battle_get_side_with_given_state(1);
    b_std_message(0, v2024A60);
    dword_30042D4 = (int)sub_8011800;
  }
  return v1;
}
