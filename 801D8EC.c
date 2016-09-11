int sub_801D8EC()
{
  int v1; // [sp+20h] [bp-4h]@0

  if ( !v2024A64 )
  {
    if ( v2024C6C & 0x80 && v2024BE6 != 144 && v2024BE6 != 164 )
    {
      b_movescr_stack_push(v2024C10 + 1);
      v2024C10 = &gUnknown_081D8EEF;
      ++v2016002;
      ++v20160A1;
    }
    else
    {
      if ( !(gBattleMoves[12 * v2024BE6 + 6] & 8)
        && !(gBattleMoves[12 * v2024BE6 + 6] & 0x20)
        && !(gBattleMoves[12 * v2024BE6 + 6] & 1)
        || !v20160A1 )
      {
        if ( v2024C68 & 0x29 )
        {
          b_movescr_stack_push(v2024C10 + 1);
          v2024C10 = &gUnknown_081D8EEF;
          return v1;
        }
        v2024A60 = v2024C07;
        dp01_build_cmdbuf_x0F_aa_b_cc_dddd_e_mlc_weather_00_x1Cbytes(
          0,
          v2024BE6,
          v2016002,
          v2024E80,
          v2024BEC,
          *(_BYTE *)(88 * v2024C07 + 0x2024AAB),
          28 * v2024C07 + 33705128);
        ++v2016002;
        ++v20160A1;
        dp01_battle_side_mark_buffer_for_execution(v2024C07);
      }
      ++v2024C10;
    }
  }
  return v1;
}
