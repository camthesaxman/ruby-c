int atk64_statusanimation()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    if ( !(*(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400C0)
      && !*(_BYTE *)(28 * v2024A60 + 0x2024CB2)
      && !(v2024C6C & 0x80) )
    {
      dp01_build_cmdbuf_x1B_aaaa_b(0, 0, *(_DWORD *)(88 * v2024A60 + 0x2024ACC));
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
    }
    v2024C10 += 2;
  }
  return v1;
}
