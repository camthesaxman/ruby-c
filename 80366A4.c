signed int __fastcall sub_80366A4(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r9@6
  int v3; // r0@6
  int v4; // r10@7
  int v5; // r0@8
  signed int result; // r0@26
  int v7; // r6@10
  int v8; // r4@18
  unsigned __int8 v9; // r2@19
  int v10; // r4@22
  int v11; // r0@23
  int v12; // [sp+0h] [bp-28h]@1
  signed int v13; // [sp+4h] [bp-24h]@1

  v12 = a1;
  v13 = a2;
  if ( *(_WORD *)(2 * v2024A60 + 0x2024C3C)
    && *(_WORD *)(2 * v2024A60 + 0x2024C3C) != 0xFFFF
    && *(_BYTE *)(v2024A60 + 0x2024C5C) != 255
    && gBattleMoves[12 * *(_WORD *)(2 * v2024A60 + 0x2024C3C) + 1] )
  {
    if ( v20239F8 & 1 )
    {
      v2 = v2024A60;
      v3 = battle_get_per_side_status(v2024A60);
      if ( v2024C0C & *(int *)((char *)gBitTable + (4 * battle_get_side_with_given_state((v3 ^ 2) & 0xFF) & 0x3FF)) )
      {
        v4 = v2024A60;
      }
      else
      {
        v5 = battle_get_per_side_status(v2024A60);
        v4 = battle_get_side_with_given_state((v5 ^ 2) & 0xFF) & 0xFF;
      }
    }
    else
    {
      v2 = v2024A60;
      v4 = v2024A60;
    }
    v7 = 0;
    while ( 1 )
    {
      if ( GetMonData((char *)&unk_30045C0 + 100 * v7, 57)
        && GetMonData((char *)&unk_30045C0 + 100 * v7, 65)
        && GetMonData((char *)&unk_30045C0 + 100 * v7, 65) != 412
        && v7 != *(_WORD *)(2 * v2 + 0x2024A6A)
        && v7 != *(_WORD *)(2 * v4 + 0x2024A6A)
        && v7 != *(_BYTE *)(v2 + 33644648)
        && v7 != *(_BYTE *)(v4 + 33644648) )
      {
        v8 = (unsigned __int16)GetMonData((char *)&unk_30045C0 + 100 * v7, 11);
        v9 = GetMonData((char *)&unk_30045C0 + 100 * v7, 46) ? *((_BYTE *)&gBaseStats + 28 * v8 + 23) : *((_BYTE *)&gBaseStats + 28 * v8 + 22);
        if ( v12 & ai_rate_move(*(_WORD *)(2 * v2024A60 + 0x2024C3C), v8, v9) )
          break;
      }
_080368D0:
      if ( ++v7 > 5 )
        goto _080368D8;
    }
    v2 = *(_BYTE *)(v2024A60 + 0x2024C5C);
    v10 = 0;
    while ( 1 )
    {
      v11 = (unsigned __int16)GetMonData((char *)&unk_30045C0 + 100 * v7, v10 + 13);
      if ( v11 )
      {
        if ( ai_rate_move(v11, *(_WORD *)(88 * v2 + 0x2024A80), *(_BYTE *)(88 * v2 + 0x2024AA0)) & 2
          && !((unsigned __int16)Random(2) % v13) )
        {
          break;
        }
      }
      if ( ++v10 > 3 )
        goto _080368D0;
    }
    *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8) = v7;
    dp01_build_cmdbuf_x21_a_bb(1u, 2, 0);
    result = 1;
  }
  else
  {
_080368D8:
    result = 0;
  }
  return result;
}
