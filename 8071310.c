int sub_8071310()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !is_c1_link_related_active() )
  {
    player_bitmagic();
    sub_80594C0();
    sub_80597F4();
  }
  sub_8071284((int)sub_80712B4);
  script_env_2_enable();
  return v1;
}
