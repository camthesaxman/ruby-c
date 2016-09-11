int sub_802C2EC()
{
  signed int v0; // r4@1
  int v1; // r1@11
  signed int v2; // r4@11
  char *i; // r0@11
  signed int v4; // r4@18
  signed int v5; // r0@18
  char *v6; // r0@28
  int v7; // r1@34
  int v8; // r4@34
  char *j; // r0@34
  signed int v10; // r4@41
  signed int v11; // r0@41
  int v13; // [sp+0h] [bp-10h]@1
  int v14; // [sp+Ch] [bp-4h]@55

  memcpy(&v13, &gUnknown_081FAE7C, 4);
  dp11b_obj_instanciate(byte_3004344, 1u, 15, 1);
  v0 = 0;
  if ( v2024A68 )
  {
    do
    {
      if ( v0 != (unsigned __int8)byte_3004344 )
        dp11b_obj_free(v0, 1);
      ++v0;
    }
    while ( v0 < v2024A68 );
  }
  if ( !(word_300179E & 1) )
  {
    if ( word_300179E & 2 )
    {
      audio_play(5);
      dword_2020020[17 * *(_BYTE *)((unsigned __int8)byte_3004344 + 0x2024BE0)] = (int)sub_8010574;
      dword_3004330[v2024A60] = (int)sub_802C68C;
      dp11b_obj_instanciate(v2024A60, 1u, 7, 1);
      dp11b_obj_instanciate(v2024A60, 0, 7, 1);
      dp11b_obj_free(byte_3004344, 1);
      return v14;
    }
    if ( word_300179E & 0x60 )
    {
      audio_play(5);
      dword_2020020[17 * *(_BYTE *)((unsigned __int8)byte_3004344 + 0x2024BE0)] = (int)sub_8010574;
      while ( 1 )
      {
        v1 = (unsigned __int8)battle_get_per_side_status((unsigned __int8)byte_3004344);
        v2 = 0;
        for ( i = (char *)&v13; v1 != (unsigned __int8)*i; i = (char *)&v13 + v2 )
        {
          if ( ++v2 > 3 )
            break;
        }
        do
        {
          if ( --v2 < 0 )
            v2 = 3;
          byte_3004344 = battle_get_side_with_given_state(*((_BYTE *)&v13 + v2));
        }
        while ( (unsigned __int8)byte_3004344 == v2024A68 );
        v4 = 0;
        v5 = (unsigned __int8)battle_get_per_side_status((unsigned __int8)byte_3004344);
        if ( v5 != 1 )
        {
          if ( v5 > 1 )
          {
            if ( v5 != 2 )
            {
              if ( v5 != 3 )
                goto _0802C500;
              goto _0802C4FE;
            }
          }
          else if ( v5 )
          {
            goto _0802C500;
          }
          if ( v2024A60 == (unsigned __int8)byte_3004344
            && !(gBattleMoves[12
                            * GetMonData(
                                (char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A),
                                *(_BYTE *)(v2024A60 + 0x2024E64) + 13)
                            + 6] & 2) )
          {
            goto _0802C500;
          }
        }
_0802C4FE:
        v4 = 1;
_0802C500:
        v6 = &byte_3004344;
        if ( v2024C0C & gBitTable[(unsigned __int8)byte_3004344] )
          v4 = 0;
        if ( v4 )
          goto _0802C640;
      }
    }
    if ( !(word_300179E & 0x90) )
      return v14;
    audio_play(5);
    dword_2020020[17 * *(_BYTE *)((unsigned __int8)byte_3004344 + 0x2024BE0)] = (int)sub_8010574;
    while ( 1 )
    {
      v7 = (unsigned __int8)battle_get_per_side_status((unsigned __int8)byte_3004344);
      v8 = 0;
      for ( j = (char *)&v13; v7 != (unsigned __int8)*j; j = (char *)&v13 + v8 )
      {
        if ( ++v8 > 3 )
          break;
      }
      do
      {
        if ( ++v8 > 3 )
          v8 = 0;
        byte_3004344 = battle_get_side_with_given_state(*((_BYTE *)&v13 + v8));
      }
      while ( (unsigned __int8)byte_3004344 == v2024A68 );
      v10 = 0;
      v11 = (unsigned __int8)battle_get_per_side_status((unsigned __int8)byte_3004344);
      if ( v11 != 1 )
      {
        if ( v11 > 1 )
        {
          if ( v11 != 2 )
          {
            if ( v11 != 3 )
              goto _0802C624;
            goto _0802C622;
          }
        }
        else if ( v11 )
        {
          goto _0802C624;
        }
        if ( v2024A60 == (unsigned __int8)byte_3004344
          && !(gBattleMoves[12
                          * GetMonData(
                              (char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A),
                              *(_BYTE *)(v2024A60 + 0x2024E64) + 13)
                          + 6] & 2) )
        {
          goto _0802C624;
        }
      }
_0802C622:
      v10 = 1;
_0802C624:
      v6 = &byte_3004344;
      if ( v2024C0C & gBitTable[(unsigned __int8)byte_3004344] )
        v10 = 0;
      if ( v10 )
      {
_0802C640:
        dword_2020020[17 * *(_BYTE *)((unsigned __int8)*v6 + 0x2024BE0)] = (int)sub_8010520;
        return v14;
      }
    }
  }
  sub_814A7FC(word_300179E & 1);
  audio_play(5);
  dword_2020020[17 * *(_BYTE *)((unsigned __int8)byte_3004344 + 0x2024BE0)] = (int)sub_8010574;
  dp01_build_cmdbuf_x21_a_bb(
    1u,
    10,
    *(_BYTE *)(v2024A60 + 0x2024E64) | (unsigned __int16)((unsigned __int8)byte_3004344 << 8));
  dp11b_obj_free(byte_3004344, 1);
  dp01_tbl1_exec_completed();
  return v14;
}
