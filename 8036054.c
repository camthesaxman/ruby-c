signed int sub_8036054()
{
  int v1; // r6@3
  int v2; // r4@3
  unsigned __int16 v3; // r0@4
  int v4; // r6@7
  int v5; // r4@12
  int v6; // r0@12
  unsigned __int16 *v7; // r5@12
  unsigned __int8 *v8; // r7@12
  int v9; // r0@13

  if ( !(v20239F8 & 1) && *(_BYTE *)(88 * (unsigned __int8)battle_get_side_with_given_state(0) + 0x2024AA0) == 25 )
  {
    v1 = 0;
    v2 = 88 * (unsigned __int8)battle_get_side_with_given_state(0) + 33704576;
    while ( 1 )
    {
      v3 = *(_WORD *)(2 * v1 + 88 * v2024A60 + 0x2024A8C);
      if ( v3 )
      {
        if ( ai_rate_move(v3, *(_WORD *)v2, *(_BYTE *)(v2 + 32)) & 2 )
          break;
      }
      if ( ++v1 > 3 )
      {
        v4 = 0;
        while ( !GetMonData((char *)&unk_30045C0 + 100 * v4, 57)
             || !GetMonData((char *)&unk_30045C0 + 100 * v4, 65)
             || GetMonData((char *)&unk_30045C0 + 100 * v4, 65) == 412
             || v4 == *(_WORD *)(2 * v2024A60 + 0x2024A6A) )
        {
_080361C2:
          if ( ++v4 > 5 )
            return 0;
        }
        GetMonData((char *)&unk_30045C0 + 100 * v4, 11);
        GetMonData((char *)&unk_30045C0 + 100 * v4, 46);
        v5 = 0;
        v6 = 88 * (unsigned __int8)battle_get_side_with_given_state(0);
        v7 = (unsigned __int16 *)(v6 + 33704576);
        v8 = (unsigned __int8 *)(v6 + 33704608);
        while ( 1 )
        {
          v9 = (unsigned __int16)GetMonData((char *)&unk_30045C0 + 100 * v4, v5 + 13);
          if ( v9 )
          {
            if ( ai_rate_move(v9, *v7, *v8) & 2 && ((unsigned __int16)Random(2) % 3u & 0xFFFF) <= 1 )
              break;
          }
          if ( ++v5 > 3 )
            goto _080361C2;
        }
        *(_BYTE *)(((unsigned int)(battle_get_per_side_status(v2024A60) << 24) >> 25) + 0x20160C8) = v4;
        dp01_build_cmdbuf_x21_a_bb(1u, 2, 0);
        return 1;
      }
    }
  }
  return 0;
}
