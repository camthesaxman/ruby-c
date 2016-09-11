int sub_801DA80()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !v2024A64 )
  {
    if ( !(v2024C68 & 0x29) )
    {
      v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
      if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x1000000
        && *(_BYTE *)(28 * v2024A60 + 0x2024CB2)
        && !(v2024C6C & 0x100) )
      {
        b_std_message(128, v2024A60);
      }
      else
      {
        dp01_build_cmdbuf_x18_0_aa_health_bar_update(0, v2024BEC);
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
        if ( !(battle_side_get_owner(v2024A60) << 24) && v2024BEC > 0 )
          byte_30042E5 |= 1u;
      }
    }
    v2024C10 += 2;
  }
  return v1;
}
