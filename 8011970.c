int sub_8011970()
{
  unsigned __int8 v0; // r0@3
  int v2; // [sp+0h] [bp-4h]@0

  if ( !v2024A64 )
  {
    if ( !(v20239F8 & 0x80) )
    {
      v0 = battle_get_side_with_given_state(0);
      b_std_message(1, v0);
    }
    dword_30042D4 = (int)sub_80119B4;
  }
  return v2;
}
