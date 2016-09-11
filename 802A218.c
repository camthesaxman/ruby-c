int sub_802A218()
{
  int v0; // r2@4
  int v1; // r1@10
  char *v2; // r6@16
  int v3; // r10@16
  char v4; // r0@18
  int v6; // [sp+20h] [bp-4h]@0

  if ( (unsigned __int8)battle_side_get_owner(v2024C07) != 1 || v20239F8 & 0x902 || v202FF5E == 1024 )
  {
    v0 = (unsigned __int8)battle_side_get_owner(v2024C07);
    if ( (v20239F8 & 0x902
       || v202FF5E == 1024
       || !(*(_BYTE *)(v0 + 33705445) & gBitTable[*(_WORD *)(2 * v2024C07 + 0x2024A6A)]))
      && (*(_WORD *)(88 * v2024C07 + 0x2024AAE) || *(_WORD *)(88 * v2024C08 + 0x2024AAE))
      && *(_WORD *)(88 * v2024C07 + 0x2024AAE) != 175 )
    {
      v1 = *(_WORD *)(88 * v2024C08 + 0x2024AAE);
      if ( v1 != 175 && ((*(_WORD *)(88 * v2024C07 + 0x2024AAE) - 121) & 0xFFFFu) > 0xB && ((v1 - 121) & 0xFFFFu) > 0xB )
      {
        if ( *(_BYTE *)(88 * v2024C08 + 0x2024AA0) == 60 )
        {
          v2024C10 = &gUnknown_081D9913;
          v2024C06 = *(_BYTE *)(88 * v2024C08 + 0x2024AA0);
          sub_81074C4(v2024C08, v2024C06);
          return v6;
        }
        v2 = (char *)(2 * v2024C07 + 33644784);
        v3 = *(_WORD *)(88 * v2024C07 + 0x2024AAE);
        *(_WORD *)v2 = v1;
        *(_WORD *)(88 * v2024C07 + 0x2024AAE) = 0;
        *(_WORD *)(88 * v2024C08 + 0x2024AAE) = v3;
        v2024A60 = v2024C07;
        dp01_build_cmdbuf_x02_a_b_varargs(0, 2, 0, 2u, v2);
        dp01_battle_side_mark_buffer_for_execution(v2024C07);
        v2024A60 = v2024C08;
        dp01_build_cmdbuf_x02_a_b_varargs(0, 2, 0, 2u, (char *)(88 * v2024C08 + 33704622));
        dp01_battle_side_mark_buffer_for_execution(v2024C08);
        *(_BYTE *)(2 * v2024C08 + 0x20160E8) = 0;
        *(_BYTE *)(2 * v2024C08 + 0x20160E9) = 0;
        *(_BYTE *)(2 * v2024C07 + 0x20160E8) = 0;
        *(_BYTE *)(2 * v2024C07 + 0x20160E9) = 0;
        v2024C10 += 5;
        byte_30041C0[0] = -3;
        byte_30041C1 = 10;
        word_30041C2 = *(_WORD *)v2;
        byte_30041C4 = -1;
        byte_3004290[0] = -3;
        byte_3004291 = 10;
        word_3004292 = v3;
        byte_3004294 = -1;
        if ( v3 )
        {
          if ( *(_WORD *)v2 )
          {
            v4 = 2;
_0802A498:
            v2024D23 = v4;
            return v6;
          }
        }
        else if ( *(_WORD *)v2 )
        {
          v2024D23 = 0;
          return v6;
        }
        v4 = 1;
        goto _0802A498;
      }
    }
  }
  v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  return v6;
}
