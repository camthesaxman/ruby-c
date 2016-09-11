int dp01t_35_1_link_standby_message_and_free_vram()
{
  signed int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61);
  if ( v0 == 1 )
  {
_0803120E:
    dp11b_obj_free(v2024A60, 1);
    dp11b_obj_free(v2024A60, 0);
    goto _0803122C;
  }
  if ( v0 <= 1 )
  {
    if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A61) )
      goto _0803122C;
    b_link_standby_message();
    goto _0803120E;
  }
  if ( v0 == 2 )
    b_link_standby_message();
_0803122C:
  dp01_tbl1_exec_completed();
  return v2;
}
