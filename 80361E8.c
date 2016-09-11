signed int sub_80361E8()
{
  int v0; // r0@1
  int v1; // r8@7
  int v2; // r0@7
  int v3; // r7@8
  int v4; // r0@9
  int v5; // r0@11
  signed int v6; // r0@12
  signed int v7; // r10@14
  int v9; // r6@21
  int v10; // r4@29
  int v11; // r0@30

  v0 = ai_has_super_effective_move_on_field(1) << 24;
  if ( v0 && (unsigned __int16)Random(v0) % 3u << 16
    || !*(_WORD *)(2 * v2024A60 + 0x2024C3C)
    || *(_WORD *)(2 * v2024A60 + 0x2024C3C) == 0xFFFF
    || !gBattleMoves[12 * *(_WORD *)(2 * v2024A60 + 0x2024C3C) + 1] )
  {
    return 0;
  }
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
  v5 = gBattleMoves[12 * *(_WORD *)(2 * v2024A60 + 0x2024C3C) + 2];
  if ( v5 == 10 )
  {
    v6 = 18;
  }
  else
  {
    if ( v5 == 11 )
    {
      v7 = 11;
      goto _080362F4;
    }
    if ( v5 != 13 )
      return 0;
    v6 = 10;
  }
  v7 = v6;
_080362F4:
  if ( *(_BYTE *)(88 * v2024A60 + 0x2024AA0) == v7 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( GetMonData((char *)&unk_30045C0 + 100 * v9, 57)
      && GetMonData((char *)&unk_30045C0 + 100 * v9, 65)
      && GetMonData((char *)&unk_30045C0 + 100 * v9, 65) != 412
      && v9 != *(_WORD *)(2 * v1 + 0x2024A6A)
      && v9 != *(_WORD *)(2 * v3 + 0x2024A6A)
      && v9 != *(_BYTE *)(v1 + 33644648)
      && v9 != *(_BYTE *)(v3 + 33644648) )
    {
      v10 = (unsigned __int16)GetMonData((char *)&unk_30045C0 + 100 * v9, 11);
      v11 = GetMonData((char *)&unk_30045C0 + 100 * v9, 46) ? *((_BYTE *)&gBaseStats + 28 * v10 + 23) : (unsigned int)*((_BYTE *)&gBaseStats + 28 * v10 + 22);
      if ( v7 == v11 && Random(v11) & 1 )
        break;
    }
    if ( ++v9 > 5 )
      return 0;
  }
  *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8) = v9;
  dp01_build_cmdbuf_x21_a_bb(1u, 2, 0);
  return 1;
}
