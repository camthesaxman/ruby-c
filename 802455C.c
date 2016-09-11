int atk66_8025E38()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    if ( !(*(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400C0)
      && !*(_BYTE *)(28 * v2024A60 + 0x2024CB2)
      && !(v2024C6C & 0x80) )
    {
      dp01_build_cmdbuf_x1B_aaaa_b(
        0,
        *(_BYTE *)(v2024C10 + 2),
        *(_BYTE *)(v2024C10 + 3) | (*(_BYTE *)(v2024C10 + 4) << 8) | (*(_BYTE *)(v2024C10 + 5) << 16) | (*(_BYTE *)(v2024C10 + 6) << 24));
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
    }
    v2024C10 += 7;
  }
  return v1;
}
