int bx_battle_menu_t6_2()
{
  int v0; // r0@2
  int v1; // r0@2
  char v2; // r1@9
  int v3; // r0@17
  _BYTE *v4; // r1@17
  char v5; // r0@17
  char v6; // r2@17
  int v7; // r0@20
  int v8; // r0@23
  int v9; // r0@27
  int v11; // [sp+8h] [bp-4h]@0

  if ( word_300179E & 1 )
  {
    v0 = audio_play(5u);
    sub_814A7FC(v0);
    v1 = *(_BYTE *)(v2024A60 + 0x2024E60);
    if ( v1 == 1 )
    {
      v2 = 6;
    }
    else if ( v1 > 1 )
    {
      if ( v1 != 2 )
      {
        if ( v1 == 3 )
          v1 = dp01_build_cmdbuf_x21_a_bb(1u, 8, 0);
        goto _0812B540;
      }
      v2 = 7;
    }
    else
    {
      if ( *(_BYTE *)(v2024A60 + 0x2024E60) )
        goto _0812B540;
      v2 = 5;
    }
    v1 = dp01_build_cmdbuf_x21_a_bb(1u, v2, 0);
_0812B540:
    dp01_tbl6_exec_completed(v1);
    return v11;
  }
  if ( word_300179E & 0x20 )
  {
    if ( !(*(_BYTE *)(v2024A60 + 0x2024E60) & 1) )
      return v11;
    audio_play(5u);
    v3 = *(_BYTE *)(v2024A60 + 0x2024E60);
    nullsub_8();
    v4 = (_BYTE *)(v2024A60 + 33705568);
    v5 = *(_BYTE *)(v2024A60 + 0x2024E60);
    v6 = 1;
_0812B5F2:
    *v4 = v5 ^ v6;
    sub_802E3E4(*(_BYTE *)(v2024A60 + 0x2024E60));
    return v11;
  }
  if ( word_300179E & 0x10 )
  {
    if ( *(_BYTE *)(v2024A60 + 0x2024E60) & 1 )
      return v11;
    audio_play(5u);
    v7 = *(_BYTE *)(v2024A60 + 0x2024E60);
    nullsub_8();
    v4 = (_BYTE *)(v2024A60 + 33705568);
    v5 = *(_BYTE *)(v2024A60 + 0x2024E60);
    v6 = 1;
    goto _0812B5F2;
  }
  if ( word_300179E & 0x40 )
  {
    if ( !(*(_BYTE *)(v2024A60 + 0x2024E60) & 2) )
      return v11;
    audio_play(5u);
    v8 = *(_BYTE *)(v2024A60 + 0x2024E60);
    nullsub_8();
    v4 = (_BYTE *)(v2024A60 + 33705568);
    v5 = *(_BYTE *)(v2024A60 + 0x2024E60);
    v6 = 2;
    goto _0812B5F2;
  }
  if ( word_300179E & 0x80 && !(*(_BYTE *)(v2024A60 + 0x2024E60) & 2) )
  {
    audio_play(5u);
    v9 = *(_BYTE *)(v2024A60 + 0x2024E60);
    nullsub_8();
    *(_BYTE *)(v2024A60 + 0x2024E60) ^= 2u;
    sub_802E3E4(*(_BYTE *)(v2024A60 + 0x2024E60));
  }
  return v11;
}
