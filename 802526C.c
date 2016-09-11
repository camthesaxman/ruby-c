int atk78_faintifabilitynotdamp()
{
  int v0; // r2@8
  int v2; // [sp+14h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024C08 = v2024A64;
    if ( v2024A64 < (unsigned int)v2024A68 && v2024AA0 != 6 )
    {
      do
        ++v2024C08;
      while ( v2024C08 < (unsigned int)v2024A68 && *(_BYTE *)(88 * v2024C08 + 0x2024AA0) != 6 );
    }
    if ( v2024C08 == v2024A68 )
    {
      v2024A60 = v2024C07;
      v2024BEC = *(_WORD *)(88 * v2024C07 + 0x2024AA8);
      dp01_build_cmdbuf_x18_0_aa_health_bar_update(0, 0x7FFF);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      ++v2024C10;
      v2024C08 = 0;
      if ( v2024A68 )
      {
        do
        {
          v0 = v2024C08;
          if ( v2024C08 != v2024C07 && !(v2024C0C & gBitTable[v2024C08]) )
            break;
          ++v2024C08;
        }
        while ( ((v0 + 1) & 0xFFu) < v2024A68 );
      }
    }
    else
    {
      v2024C06 = 6;
      sub_81074C4(v2024C08, *(_BYTE *)(88 * v2024C08 + 0x2024AA0));
      v2024C10 = &gUnknown_081D9834;
    }
  }
  return v2;
}
