int sub_8027238()
{
  int v0; // r0@2
  int v1; // r0@7
  int v3; // [sp+10h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v0 = *(_BYTE *)(v2024C10 + 1);
    if ( v0 == 4 )
    {
      v2024A60 = v2024C07;
      if ( !(v2024C0C & gBitTable[v2024C07]) )
      {
        dp01_build_cmdbuf_x1A_aaaa_bbbb(
          0,
          *(_DWORD *)(88 * v2024C07 + 0x2024ACC),
          *(_DWORD *)(88 * v2024C07 + 0x2024AD0));
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
      }
      if ( v20239F8 & 1 )
      {
        v1 = battle_get_per_side_status(v2024C07);
        v2024A60 = battle_get_side_with_given_state((v1 ^ 2) & 0xFF);
        if ( !(v2024C0C & gBitTable[v2024A60]) )
        {
          dp01_build_cmdbuf_x1A_aaaa_bbbb(
            0,
            *(_DWORD *)(88 * v2024A60 + 0x2024ACC),
            *(_DWORD *)(88 * v2024A60 + 0x2024AD0));
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
      }
      v2024C10 += 2;
    }
    else
    {
      v2024A60 = sub_8015150(v0);
      dp01_build_cmdbuf_x1A_aaaa_bbbb(0, *(_DWORD *)(88 * v2024A60 + 0x2024ACC), *(_DWORD *)(88 * v2024A60 + 0x2024AD0));
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v2024C10 += 2;
    }
  }
  return v3;
}
