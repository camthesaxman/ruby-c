int sub_801F7AC()
{
  int v0; // r4@3
  int v1; // r0@3
  int v2; // r7@5
  void *v3; // r4@5
  unsigned int v4; // r0@12
  int v5; // r4@24
  int v6; // r4@27
  int v8; // [sp+20h] [bp-4h]@0

  if ( *(_BYTE *)(v2024C10 + 2) )
  {
    v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    if ( v2024C6C & (gBitTable[v2024A60] << 28) )
    {
      v0 = *(_BYTE *)(v2024C10 + 3) | (*(_BYTE *)(v2024C10 + 4) << 8) | (*(_BYTE *)(v2024C10 + 5) << 16) | (*(_BYTE *)(v2024C10 + 6) << 24);
      b_movescr_stack_pop_cursor();
      v2024C10 = v0;
      v1 = battle_side_get_owner(v2024A60);
      *(_WORD *)((2 * v1 & 0x1FF) + 0x2024C7A) &= 0xFDFFu;
      return v8;
    }
_0801FB1C:
    v2024C10 += 7;
    return v8;
  }
  if ( *(_BYTE *)(v2024C10 + 1) == 1 )
  {
    v2024A60 = v2024C07;
    v2 = v2024C08;
    v3 = &gUnknown_081D8C58;
  }
  else
  {
    v2024A60 = v2024C08;
    v2 = v2024C07;
    v3 = &gUnknown_081D8C65;
  }
  if ( v2024C0C & gBitTable[v2024A60] || *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
    goto _0801FB1C;
  *(_BYTE *)(2 * v2 + 0x20160AC) = 0;
  *(_BYTE *)(2 * v2 + 0x20160AD) = 0;
  *(_BYTE *)(4 * v2 + 0x2016100) = 0;
  *(_BYTE *)(4 * v2 + 0x2016101) = 0;
  *(_BYTE *)(4 * v2 + 0x2016102) = 0;
  *(_BYTE *)(4 * v2 + 0x2016103) = 0;
  v2024C6C |= gBitTable[v2024A60] << 28;
  b_movescr_stack_push(v2024C10 + 7);
  v2024C10 = v3;
  if ( battle_side_get_owner(v2024A60) << 24 )
  {
    if ( (unsigned __int8)byte_30042E1 <= 0xFEu )
      ++byte_30042E1;
    word_3004300 = *(_WORD *)(88 * v2024A60 + 0x2024A80);
  }
  else
  {
    v2024C6C |= 0x400000u;
    if ( (unsigned __int8)byte_30042E0 <= 0xFEu )
      ++byte_30042E0;
    v4 = *(_BYTE *)(88 * v2 + 0x2024AAA);
    if ( v4 > *(_BYTE *)(88 * v2024A60 + 0x2024AAA) )
    {
      if ( (signed int)(v4 - *(_BYTE *)(88 * v2024A60 + 0x2024AAA)) <= 29 )
        sub_803FCD4((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 6);
      else
        sub_803FCD4((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 8);
    }
  }
  if ( v2024C6C & 0x40 && *(_WORD *)(88 * v2024C07 + 0x2024AA8) )
  {
    b_movescr_stack_push(v2024C10);
    v2024BEC = *(_WORD *)(88 * v2 + 0x2024AA8);
    v2024C10 = &gUnknown_081D9156;
  }
  if ( *(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x4000 )
  {
    if ( !(v2024C6C & 0x1000000) )
    {
      v5 = battle_side_get_owner(v2024C07);
      if ( v5 << 24 != battle_side_get_owner(v2024C08) << 24 && *(_WORD *)(88 * v2024C07 + 0x2024AA8) && v2024BE6 != 165 )
      {
        v6 = *(_BYTE *)(v2024C07 + 0x201608C);
        *(_BYTE *)(v6 + 88 * v2024C07 + 33704612) = 0;
        b_movescr_stack_push(v2024C10);
        v2024C10 = &gUnknown_081D9468;
        v2024A60 = v2024C07;
        dp01_build_cmdbuf_x02_a_b_varargs(0, v6 + 9, 0, 1u, (char *)(88 * v2024C07 + 33704612 + v6));
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
        byte_30041C0[0] = -3;
        byte_30041C1 = 2;
        word_30041C2 = *(_WORD *)(2 * v6 + 88 * v2024C07 + 0x2024A8C);
        byte_30041C4 = -1;
      }
    }
  }
  return v8;
}
