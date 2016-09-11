int atk5C_cmd5c()
{
  int v1; // [sp+4h] [bp-4h]@0

  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  if ( v2024C68 & 0x29
    || v2024C6C & 0x100 && *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x1000000 && *(_BYTE *)(28 * v2024A60 + 0x2024CB2) )
  {
    v2024C10 += 2;
  }
  else
  {
    dp01_build_cmdbuf_x29_29_29_29(0);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    v2024C10 += 2;
  }
  return v1;
}
