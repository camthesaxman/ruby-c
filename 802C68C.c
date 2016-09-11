int sub_802C68C()
{
  signed int v0; // r8@1
  int v1; // r6@1
  _WORD *v2; // r1@2
  char v3; // r4@3
  char v4; // r0@8
  _BYTE *v5; // r1@15
  signed int v6; // r0@15
  int v7; // r2@20
  char *v8; // r1@22
  char v9; // r0@22
  signed int v10; // r0@24
  int *v11; // r0@27
  int (__fastcall *v12)(int); // r1@27
  _BYTE *v13; // r1@33
  char v14; // r0@33
  int v15; // r2@35
  int v16; // r2@42
  int v17; // r0@45
  int v18; // r0@45
  char *v19; // r0@50
  int v21; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v1 = (v2024A60 << 9) + 33700452;
  if ( word_300179E & 1 )
  {
    audio_play(5);
    v2 = (_WORD *)(v1 + 2 * *(_BYTE *)(v2024A60 + 0x2024E64));
    if ( *v2 == 174 )
    {
      v3 = 0;
      if ( *(_BYTE *)(v1 + 18) != 7 )
        v3 = ((-(*(_BYTE *)(v1 + 19) ^ 7) | *(_BYTE *)(v1 + 19) ^ 7) >> 31) & 0x10;
    }
    else
    {
      v3 = gBattleMoves[12 * *v2 + 6];
    }
    if ( v3 & 0x10 )
    {
      byte_3004344 = v2024A60;
    }
    else
    {
      v4 = battle_get_per_side_status(v2024A60);
      byte_3004344 = battle_get_side_with_given_state(v4 & 1 ^ 1);
    }
    if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A61) )
    {
      if ( !(v3 & 0x7D) )
        v0 = 1;
      v5 = (_BYTE *)(v1 + 8 + *(_BYTE *)(v2024A60 + 0x2024E64));
      v6 = *v5;
      if ( !*v5 )
        goto _0802C7B8;
      if ( !(v3 & 0x12) && (unsigned __int8)sub_803C348(0) <= 1u )
      {
        byte_3004344 = sub_803C434(v2024A60);
        v0 = 0;
      }
    }
    else if ( v3 & 2 && !*(_BYTE *)((v2024A60 << 9) + 0x2023A62) )
    {
      v0 = 1;
    }
    v6 = v0;
    if ( !v0 )
    {
_0802C7B8:
      sub_814A7FC(v6);
      v7 = *(_BYTE *)(v2024A60 + 0x2024E64) | ((unsigned __int8)byte_3004344 << 8);
_0802C888:
      dp01_build_cmdbuf_x21_a_bb(1u, 10, v7);
      dp01_tbl1_exec_completed();
      return v21;
    }
    dword_3004330[v2024A60] = (int)sub_802C2EC;
    if ( v3 & 0x12 )
    {
      v8 = &byte_3004344;
      v9 = v2024A60;
    }
    else
    {
      if ( v2024C0C & *(int *)((char *)gBitTable + (4 * battle_get_side_with_given_state(1) & 0x3FF)) )
        v10 = 3;
      else
        v10 = 1;
      v9 = battle_get_side_with_given_state(v10);
      v8 = &byte_3004344;
    }
    *v8 = v9;
    v11 = &dword_2020020[17 * *(_BYTE *)((unsigned __int8)byte_3004344 + 0x2024BE0)];
    v12 = sub_8010520;
_0802CA36:
    *v11 = (int)v12;
    return v21;
  }
  if ( word_300179E & 2 )
  {
    sub_814A7FC(word_300179E & 2);
    audio_play(5);
    word_30042A4 = 0;
    word_30042A0 = 320;
    LOWORD(v7) = -1;
    goto _0802C888;
  }
  if ( word_300179E & 0x20 )
  {
    if ( !(*(_BYTE *)(v2024A60 + 0x2024E64) & 1) )
      return v21;
    nullsub_7(*(_BYTE *)(v2024A60 + 0x2024E64));
    v13 = (_BYTE *)(v2024A60 + 33705572);
    v14 = *(_BYTE *)(v2024A60 + 0x2024E64) ^ 1;
_0802C976:
    *v13 = v14;
    audio_play(5);
    v17 = sub_802E3B4(*(_BYTE *)(v2024A60 + 0x2024E64), 0);
    v18 = sub_802E220(v17);
    sub_802E2D4(v18);
    return v21;
  }
  if ( word_300179E & 0x10 )
  {
    v15 = *(_BYTE *)(v2024A60 + 0x2024E64);
    if ( !(v15 & 1) && (v15 ^ 1u) < (unsigned __int8)byte_3004348 )
    {
      nullsub_7(*(_BYTE *)(v2024A60 + 0x2024E64));
      v13 = (_BYTE *)(v2024A60 + 33705572);
      v14 = *(_BYTE *)(v2024A60 + 0x2024E64) ^ 1;
      goto _0802C976;
    }
  }
  else
  {
    if ( word_300179E & 0x40 )
    {
      if ( !(*(_BYTE *)(v2024A60 + 0x2024E64) & 2) )
        return v21;
      nullsub_7(*(_BYTE *)(v2024A60 + 0x2024E64));
      v13 = (_BYTE *)(v2024A60 + 33705572);
      v14 = *(_BYTE *)(v2024A60 + 0x2024E64) ^ 2;
      goto _0802C976;
    }
    if ( word_300179E & 0x80 )
    {
      v16 = *(_BYTE *)(v2024A60 + 0x2024E64);
      if ( !(v16 & 2) && (v16 ^ 2u) < (unsigned __int8)byte_3004348 )
      {
        nullsub_7(*(_BYTE *)(v2024A60 + 0x2024E64));
        v13 = (_BYTE *)(v2024A60 + 33705572);
        v14 = *(_BYTE *)(v2024A60 + 0x2024E64) ^ 2;
        goto _0802C976;
      }
    }
    else if ( word_300179E & 4 && (unsigned __int8)byte_3004348 > 1u && !(v20239F8 & 2) )
    {
      sub_802E12C(*(_BYTE *)(v2024A60 + 0x2024E64), &gUnknown_081FAE80);
      if ( *(_BYTE *)(v2024A60 + 0x2024E64) )
      {
        v19 = &byte_3004344;
        byte_3004344 = 0;
      }
      else
      {
        byte_3004344 = 1;
        v19 = &byte_3004344;
      }
      sub_802E3B4((unsigned __int8)*v19, 27);
      FillWindowRect((int)&unk_3004210, 4118, 0x17u, 0x37u, 0x1Cu, 0x3Au);
      InitWindow((int)&unk_3004210, (int)&gUnknown_08400D89, 656, 23, 55);
      sub_8002F44((int)&unk_3004210);
      v11 = &dword_3004330[v2024A60];
      v12 = (int (__fastcall *)(int))sub_802CA60;
      goto _0802CA36;
    }
  }
  return v21;
}
