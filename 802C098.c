int sub_802C098()
{
  unsigned int v0; // r5@1
  int v1; // r0@2
  signed int v2; // r0@2
  char v3; // r1@9
  _BYTE *v4; // r1@17
  char v5; // r0@17
  char v6; // r2@17
  int v7; // r0@36
  int v9; // [sp+14h] [bp-4h]@0

  v0 = *(_BYTE *)((v2024A60 << 9) + 0x2023A62) | (*(_BYTE *)((v2024A60 << 9) + 0x2023A63) << 8);
  dp11b_obj_instanciate(v2024A60, 1u, 7, 1);
  dp11b_obj_instanciate(v2024A60, 0, 7, 1);
  if ( word_300179E & 1 )
  {
    v1 = audio_play(5);
    sub_814A7FC(v1);
    v2 = *(_BYTE *)(v2024A60 + 0x2024E60);
    if ( v2 == 1 )
    {
      v3 = 1;
    }
    else if ( v2 > 1 )
    {
      if ( v2 != 2 )
      {
        if ( v2 == 3 )
          dp01_build_cmdbuf_x21_a_bb(1u, 3, 0);
        goto _0802C138;
      }
      v3 = 2;
    }
    else
    {
      if ( *(_BYTE *)(v2024A60 + 0x2024E60) )
        goto _0802C138;
      v3 = 0;
    }
    dp01_build_cmdbuf_x21_a_bb(1u, v3, 0);
_0802C138:
    dp01_tbl1_exec_completed();
    return v9;
  }
  if ( word_300179E & 0x20 )
  {
    if ( !(*(_BYTE *)(v2024A60 + 0x2024E60) & 1) )
      return v9;
    audio_play(5);
    nullsub_8(*(_BYTE *)(v2024A60 + 0x2024E60));
    v4 = (_BYTE *)(v2024A60 + 33705568);
    v5 = *(_BYTE *)(v2024A60 + 0x2024E60);
    v6 = 1;
_0802C200:
    *v4 = v5 ^ v6;
    sub_802E3E4(*(_BYTE *)(v2024A60 + 0x2024E60), 0);
    return v9;
  }
  if ( word_300179E & 0x10 )
  {
    if ( *(_BYTE *)(v2024A60 + 0x2024E60) & 1 )
      return v9;
    audio_play(5);
    nullsub_8(*(_BYTE *)(v2024A60 + 0x2024E60));
    v4 = (_BYTE *)(v2024A60 + 33705568);
    v5 = *(_BYTE *)(v2024A60 + 0x2024E60);
    v6 = 1;
    goto _0802C200;
  }
  if ( word_300179E & 0x40 )
  {
    if ( !(*(_BYTE *)(v2024A60 + 0x2024E60) & 2) )
      return v9;
    goto _0802C1E8;
  }
  if ( word_300179E & 0x80 )
  {
    if ( *(_BYTE *)(v2024A60 + 0x2024E60) & 2 )
      return v9;
_0802C1E8:
    audio_play(5);
    nullsub_8(*(_BYTE *)(v2024A60 + 0x2024E60));
    v4 = (_BYTE *)(v2024A60 + 33705568);
    v5 = *(_BYTE *)(v2024A60 + 0x2024E60);
    v6 = 2;
    goto _0802C200;
  }
  if ( word_300179E & 2 )
  {
    if ( v20239F8 & 1
      && (unsigned __int8)battle_get_per_side_status(v2024A60) == 2
      && !(v2024C0C & *(int *)((char *)gBitTable + (4 * battle_get_side_with_given_state(0) & 0x3FF)))
      && !(v20239F8 & 0x40) )
    {
      if ( *(_BYTE *)((v2024A60 << 9) + 0x2023A61) == 1 )
      {
        if ( v0 > 0xC )
          return v9;
        sub_80A9424(v0, 1);
      }
      audio_play(5);
      dp01_build_cmdbuf_x21_a_bb(1u, 12, 0);
      v7 = dp01_tbl1_exec_completed();
      sub_814A7FC(v7);
      return v9;
    }
  }
  else if ( word_300179E & 8 )
  {
    sub_804454C();
  }
  return v9;
}
