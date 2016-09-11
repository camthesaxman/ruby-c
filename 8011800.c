int sub_8011800()
{
  unsigned __int8 v0; // r0@2
  int v2; // [sp+0h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v0 = battle_get_side_with_given_state(1);
    b_std_message(1, v0);
    dword_30042D4 = (int)sub_8011834;
  }
  return v2;
}
