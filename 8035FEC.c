signed int ai_switch_perish_song()
{
  signed int result; // r0@3

  if ( !(*(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x20) || *(_BYTE *)(28 * v2024A60 + 0x2024CB7) << 28 )
  {
    result = 0;
  }
  else
  {
    *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8) = 6;
    dp01_build_cmdbuf_x21_a_bb(1u, 2, 0);
    result = 1;
  }
  return result;
}
