signed int sub_8036904()
{
  int v0; // r8@8
  int v1; // r7@9
  int v2; // r0@9
  int v3; // r6@10
  int v4; // r0@11
  signed int v5; // r5@13
  signed int result; // r0@32

  if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x400E000
    || *(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400
    || (unsigned __int8)sub_8018324(0xCu, v2024A60, 0x17u, 0, 0)
    || (unsigned __int8)sub_8018324(0xCu, v2024A60, 0x47u, 0, 0)
    || sub_8018324(0xEu, 0, 0x2Au, 0, 0) << 24
    && (*(_BYTE *)(88 * v2024A60 + 0x2024AA1) == 8 || *(_BYTE *)(88 * v2024A60 + 0x2024AA2) == 8) )
  {
    goto LABEL_36;
  }
  v0 = 0;
  if ( v20239F8 & 1 )
  {
    v1 = v2024A60;
    v2 = battle_get_per_side_status(v2024A60);
    if ( v2024C0C & *(int *)((char *)gBitTable + (4 * battle_get_side_with_given_state((v2 ^ 2) & 0xFF) & 0x3FF)) )
    {
      v3 = v2024A60;
    }
    else
    {
      v4 = battle_get_per_side_status(v2024A60);
      v3 = battle_get_side_with_given_state((v4 ^ 2) & 0xFF) & 0xFF;
    }
  }
  else
  {
    v3 = v2024A60;
    v1 = v2024A60;
  }
  v5 = 0;
  do
  {
    if ( GetMonData((char *)&unk_30045C0 + 100 * v5, 57)
      && GetMonData((char *)&unk_30045C0 + 100 * v5, 65)
      && GetMonData((char *)&unk_30045C0 + 100 * v5, 65) != 412
      && v5 != *(_WORD *)(2 * v1 + 0x2024A6A)
      && v5 != *(_WORD *)(2 * v3 + 0x2024A6A)
      && v5 != *(_BYTE *)(v1 + 33644648)
      && v5 != *(_BYTE *)(v3 + 33644648) )
    {
      ++v0;
    }
    ++v5;
  }
  while ( v5 <= 5 );
  if ( !v0
    || !(ai_switch_perish_song() << 24)
    && !(sub_8036054() << 24)
    && !(sub_80361E8() << 24)
    && !(ai_switchout_natural_cure() << 24)
    && (ai_has_super_effective_move_on_field(0) << 24
     || ai_is_too_invested_in_stat_buffs() << 24
     || !(sub_80366A4(8u, 2u) << 24) && !(sub_80366A4(4u, 3u) << 24)) )
  {
LABEL_36:
    result = 0;
  }
  else
  {
    result = 1;
  }
  return result;
}
