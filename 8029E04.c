int atkC9_jumpifattackandspecialattackcannotfall()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(88 * v2024C08 + 0x2024A99) || *(_BYTE *)(88 * v2024C08 + 0x2024A9C) || v2024D24 == 1 )
  {
    v2024A60 = v2024C07;
    v2024BEC = *(_WORD *)(88 * v2024C07 + 0x2024AA8);
    dp01_build_cmdbuf_x18_0_aa_health_bar_update(0, 0x7FFF);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 5;
  }
  else
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v1;
}
