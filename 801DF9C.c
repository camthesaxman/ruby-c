int atk0E_missmessage()
{
  int v0; // r0@3
  __int16 v1; // r1@15
  __int16 v2; // r1@19
  int v4; // [sp+4h] [bp-4h]@0

  if ( !v2024A64 )
  {
    v2024A60 = v2024C08;
    if ( v2024C68 & 1 )
      goto _0801E054;
    v0 = v2024C68 & 0xFE;
    if ( v0 == 16 )
      goto _0801E00E;
    if ( v0 > 16 )
    {
      if ( v0 != 64 && v0 <= 64 && v0 == 32 )
        goto _0801E054;
      goto _0801E00E;
    }
    if ( v0 == 4 )
    {
      v1 = 12;
    }
    else
    {
      if ( v0 > 4 )
      {
        if ( v0 == 8 )
          goto _0801E054;
        goto _0801E00E;
      }
      if ( v0 != 2 )
      {
_0801E00E:
        if ( v2024C68 & 2 )
        {
          v2 = 14;
        }
        else
        {
          if ( !(v2024C68 & 4) )
          {
            if ( !(v2024C68 & 0x28) )
            {
              dp01_build_cmdbuf_x2B_aa_0(0, 13);
              dp01_battle_side_mark_buffer_for_execution(v2024A60);
            }
            goto _0801E054;
          }
          v2 = 12;
        }
        dp01_build_cmdbuf_x2B_aa_0(0, v2);
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
_0801E054:
        ++v2024C10;
        return v4;
      }
      v1 = 14;
    }
    dp01_build_cmdbuf_x2B_aa_0(0, v1);
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
    goto _0801E054;
  }
  return v4;
}
