int atk0C_datahpupdate()
{
  unsigned int v0; // r6@4
  int v1; // r1@9
  unsigned int v2; // r2@20
  unsigned int v3; // r3@21
  _BYTE *v4; // r0@26
  _BYTE *v5; // r1@26
  int v6; // r0@29
  int v7; // r1@29
  int v8; // r2@38
  int v9; // r0@39
  _BYTE *v10; // r2@39
  int v11; // r2@44
  int v12; // r0@45
  _BYTE *v13; // r2@45
  unsigned __int8 v14; // r0@7
  int v16; // [sp+14h] [bp-4h]@0

  if ( v2024A64 )
    return v16;
  if ( !v201601C || v201601C & 0x40 )
    v0 = gBattleMoves[12 * v2024BE6 + 2];
  else
    v0 = v201601C & 0x3F;
  if ( v2024C68 & 0x29 )
  {
    v14 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
    v2024A60 = v14;
    if ( !*(_DWORD *)(20 * v14 + 0x2024D6C) )
      *(_DWORD *)(20 * v14 + 0x2024D6C) = 0xFFFF;
    goto _0801DF26;
  }
  v2024A60 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  if ( !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x1000000)
    || (v1 = *(_BYTE *)(28 * v2024A60 + 0x2024CB2)) == 0
    || v2024C6C & 0x100 )
  {
    v2 = v2024C6C & 0xFFFFFEFF;
    v2024C6C &= 0xFFFFFEFF;
    if ( v2024BEC < 0 )
    {
      *(_WORD *)(88 * v2024A60 + 0x2024AA8) -= v2024BEC;
      v3 = *(_WORD *)(88 * v2024A60 + 0x2024AAC);
      if ( *(_WORD *)(88 * v2024A60 + 0x2024AA8) > v3 )
        *(_WORD *)(88 * v2024A60 + 0x2024AA8) = v3;
      goto _0801DEC6;
    }
    if ( v2 & 0x20 )
    {
      v2024C6C = v2 & 0xFFFFFFDF;
    }
    else
    {
      *(_DWORD *)(4 * v2024A60 + 0x2024BF4) += v2024BEC;
      if ( *(_BYTE *)(v2024C10 + 1) )
      {
        v4 = (_BYTE *)(v2024A60 + 33705076);
        v5 = (_BYTE *)33704968;
      }
      else
      {
        v4 = (_BYTE *)(v2024A60 + 33705076);
        v5 = (_BYTE *)33704967;
      }
      *v4 = *v5;
    }
    v6 = *(_WORD *)(88 * v2024A60 + 0x2024AA8);
    v7 = v2024BEC;
    if ( v6 <= v2024BEC )
    {
      v2024BF0 = *(_WORD *)(88 * v2024A60 + 0x2024AA8);
      *(_WORD *)(88 * v2024A60 + 0x2024AA8) = 0;
    }
    else
    {
      *(_WORD *)(88 * v2024A60 + 0x2024AA8) = v6 - v2024BEC;
      v2024BF0 = v7;
    }
    if ( !*(_DWORD *)(20 * v2024A60 + 0x2024D6C) && !(v2024C6C & 0x100000) )
      *(_DWORD *)(20 * v2024A60 + 0x2024D6C) = v2024BF0;
    if ( v0 <= 8 )
    {
      if ( !(v2024C6C & 0x100000) && v2024BE6 != 220 )
      {
        v8 = v2024BF0;
        *(_DWORD *)(16 * v2024A60 + 0x2024D2C) = v2024BF0;
        *(_DWORD *)(20 * v2024A60 + 0x2024D70) = v8;
        if ( *(_BYTE *)(v2024C10 + 1) )
        {
          v9 = 16 * v2024A60 + 33705256;
          v10 = (_BYTE *)33704968;
        }
        else
        {
          v9 = 16 * v2024A60 + 33705256;
          v10 = (_BYTE *)33704967;
        }
        *(_BYTE *)(v9 + 12) = *v10;
        *(_BYTE *)(20 * v2024A60 + 0x2024D78) = *v10;
        goto _0801DEC6;
      }
      if ( v0 <= 8 )
      {
_0801DEC6:
        v2024C6C &= 0xFFEFFFFF;
        dp01_build_cmdbuf_x02_a_b_varargs(0, 42, 0, 2u, (char *)(88 * v2024A60 + 33704616));
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
_0801DF26:
        v2024C10 += 2;
        return v16;
      }
    }
    if ( !(v2024C6C & 0x100000) )
    {
      v11 = v2024BF0;
      *(_DWORD *)(16 * v2024A60 + 0x2024D30) = v2024BF0;
      *(_DWORD *)(20 * v2024A60 + 0x2024D74) = v11;
      if ( *(_BYTE *)(v2024C10 + 1) )
      {
        v12 = 16 * v2024A60 + 33705256;
        v13 = (_BYTE *)33704968;
      }
      else
      {
        v12 = 16 * v2024A60 + 33705256;
        v13 = (_BYTE *)33704967;
      }
      *(_BYTE *)(v12 + 13) = *v13;
      *(_BYTE *)(20 * v2024A60 + 0x2024D79) = *v13;
    }
    goto _0801DEC6;
  }
  if ( v1 < v2024BEC )
  {
    if ( !*(_DWORD *)(20 * v2024A60 + 0x2024D6C) )
      *(_DWORD *)(20 * v2024A60 + 0x2024D6C) = v1;
    v2024BF0 = *(_BYTE *)(28 * v2024A60 + 0x2024CB2);
    *(_BYTE *)(28 * v2024A60 + 0x2024CB2) = 0;
  }
  else
  {
    if ( !*(_DWORD *)(20 * v2024A60 + 0x2024D6C) )
      *(_DWORD *)(20 * v2024A60 + 0x2024D6C) = v2024BEC;
    *(_BYTE *)(28 * v2024A60 + 0x2024CB2) -= v2024BEC;
    v2024BF0 = v2024BEC;
  }
  if ( *(_BYTE *)(28 * v2024A60 + 0x2024CB2) )
    goto _0801DF26;
  v2024C10 += 2;
  b_movescr_stack_push_cursor();
  v2024C10 = &gUnknown_081D99AB;
  return v16;
}
