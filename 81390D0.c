int sub_81390D0()
{
  int v0; // r4@1
  signed int v1; // r2@1
  int v3; // [sp+14h] [bp-4h]@0

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A61) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A62) << 8);
  v1 = *(_BYTE *)(12 * v2024A60 + 0x2017814);
  if ( v1 == 1 )
  {
    if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
    {
      sub_80326EC(0);
      move_anim_start_t1(v0);
      *(_BYTE *)(12 * v2024A60 + 0x2017814) = 2;
    }
  }
  else if ( v1 > 1 )
  {
    if ( v1 == 2 )
    {
      call_via_r0(v202F7AC);
      if ( !v202F7B1 )
      {
        sub_80326EC(1u);
        if ( *(_BYTE *)(4 * v2024A60 + 0x2017800) & 4 )
          move_anim_start_t4(v2024A60, v2024A60, v2024A60, 6u);
        *(_BYTE *)(12 * v2024A60 + 0x2017814) = 3;
      }
    }
    else if ( v1 == 3 && !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
    {
      sub_8031F24();
      sub_80324BC(
        v2024A60,
        *(_BYTE *)((v2024A60 << 9) + 0x2023A61) | (unsigned __int16)(*(_BYTE *)((v2024A60 << 9) + 0x2023A62) << 8));
      *(_BYTE *)(12 * v2024A60 + 0x2017814) = 0;
      dp01_tbl5_exec_completed();
    }
  }
  else if ( !*(_BYTE *)(12 * v2024A60 + 0x2017814) )
  {
    if ( *(_BYTE *)(4 * v2024A60 + 0x2017800) & 4 )
      move_anim_start_t4(v2024A60, v2024A60, v2024A60, 5u);
    *(_BYTE *)(12 * v2024A60 + 0x2017814) = 1;
  }
  return v3;
}
