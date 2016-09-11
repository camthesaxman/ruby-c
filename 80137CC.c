int bc_80154A0()
{
  int v1; // [sp+10h] [bp-4h]@0

  if ( v2024C6C & 0x8000 || v201601D >= (unsigned int)v2024A68 )
  {
_08013884:
    b_clear_atk_up_if_hit_flag_unless_enraged();
    v2024A7E = 0;
    v2024A7F = v2024A76;
    v2024DEC = 0;
    v201601C = 0;
    dword_30042D4 = (int)sub_80138F0;
    v2024D21 = 0;
    v2024D22 = 0;
    v2016112 = 0;
    v2017130 = 0;
  }
  else
  {
    while ( 1 )
    {
      v2024C07 = v201601D;
      v2024A60 = v201601D++;
      if ( *(_WORD *)(2 * v2024A60 + 0x2024C60) == 264
        && !(*(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 7)
        && !(*(_BYTE *)(28 * v2024C07 + 0x2024CC0) << 31)
        && !(*(_BYTE *)(16 * v2024A60 + 0x2024D28) & 4) )
      {
        break;
      }
      if ( v201601D >= (unsigned int)v2024A68 )
        goto _08013884;
    }
    b_call_bc_move_exec(&gUnknown_081D94DA);
  }
  return v1;
}
