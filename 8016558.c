signed int sub_8016558()
{
  int v0; // r9@1
  _BYTE *v1; // r1@12
  int v2; // r1@22
  int v3; // r1@72
  int v4; // r1@88
  signed int v5; // r4@96
  char v6; // r3@101
  int v7; // r5@104
  int v8; // r1@107
  int v9; // r2@111
  signed int v10; // r1@113
  int v11; // r2@114
  int v12; // r1@115
  int v13; // r2@118
  int v14; // r0@124
  int v15; // r0@127
  char v16; // r0@127

  v0 = 0;
  v2024C6C |= 0x1000020u;
  while ( v2016001 < (unsigned int)v2024A68 && v2016000 <= 0x13u )
  {
    v2024C07 = *(_BYTE *)(v2016001 + 0x2024A7A);
    v2024A60 = v2024C07;
    if ( v2024C0C & gBitTable[v2024C07] )
    {
      ++v2016001;
    }
    else
    {
      if ( v2016000 <= 0x13u )
      {
        switch ( v2016000 )
        {
          case 0u:
            if ( *(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400
              && *(_WORD *)(88 * v2024A60 + 0x2024AA8) != *(_WORD *)(88 * v2024A60 + 0x2024AAC)
              && *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              v2024BEC = (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 4;
              if ( !v2024BEC )
                v2024BEC = 1;
              v2024BEC = -v2024BEC;
              b_call_bc_move_exec(&gUnknown_081D93D1);
              v0 = (v0 + 1) & 0xFF;
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 1u:
            if ( sub_8018324(1, v2024A60, 0, 0) << 24 )
              v0 = (v0 + 1) & 0xFF;
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 2u:
            if ( sub_801A02C(1, v2024A60, 0) << 24 )
              v0 = (v0 + 1) & 0xFF;
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 0x12u:
            if ( sub_801A02C(1, v2024A60, 1) << 24 )
              v0 = (v0 + 1) & 0xFF;
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 3u:
            v2 = *(_DWORD *)(4 * v2024A60 + 0x2024C98);
            if ( v2 & 4
              && *(_WORD *)(88 * (*(_DWORD *)(4 * v2024A60 + 0x2024C98) & 3) + 0x2024AA8)
              && *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              v2024C08 = v2 & 3;
              v2024BEC = (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 3;
              if ( !v2024BEC )
                v2024BEC = 1;
              v20160A4 = v2 & 3;
              v20160A5 = v2024C07;
              b_call_bc_move_exec(&gUnknown_081D904B);
              v0 = (v0 + 1) & 0xFF;
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 4u:
            if ( *(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 8 && *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              v2024BEC = (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 3;
              if ( !v2024BEC )
                v2024BEC = 1;
              b_call_bc_move_exec(&gUnknown_081D9518);
              v0 = (v0 + 1) & 0xFF;
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 5u:
            if ( *(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 0x80 && *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              v2024BEC = (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 4;
              if ( !v2024BEC )
                v2024BEC = 1;
              if ( (*(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 0xF00) != 3840 )
                *(_DWORD *)(88 * v2024A60 + 0x2024ACC) += 256;
              v2024BEC *= (*(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 0xF00u) >> 8;
              b_call_bc_move_exec(&gUnknown_081D9518);
              v0 = (v0 + 1) & 0xFF;
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 6u:
            if ( *(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 0x10 && *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              v2024BEC = (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 3;
              if ( !v2024BEC )
                v2024BEC = 1;
              b_call_bc_move_exec(&gUnknown_081D953A);
              v0 = (v0 + 1) & 0xFF;
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 7u:
            if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x8000000 && *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              v2024BEC = (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 2;
              if ( !v2024BEC )
                v2024BEC = 1;
              b_call_bc_move_exec(&gUnknown_081D9613);
              v0 = (v0 + 1) & 0xFF;
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 8u:
            if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x10000000 && *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              v2024BEC = (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 2;
              if ( !v2024BEC )
                v2024BEC = 1;
              b_call_bc_move_exec(&gUnknown_081D9624);
              v0 = (v0 + 1) & 0xFF;
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 9u:
            if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0xE000 && *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
            {
              *(_DWORD *)(88 * v2024A60 + 0x2024AD0) -= 0x2000;
              if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0xE000 )
              {
                v20160A4 = *(_BYTE *)(2 * v2024A60 + 0x2016004);
                v20160A5 = *(_BYTE *)(2 * v2024A60 + 0x2016005);
                byte_30041C0[0] = -3;
                byte_30041C1 = 2;
                byte_30041C2 = *(_BYTE *)(2 * v2024A60 + 0x2016004);
                byte_30041C3 = *(_BYTE *)(2 * v2024A60 + 0x2016005);
                byte_30041C4 = -1;
                v2024C10 = &gUnknown_081D95E2;
                v2024BEC = (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 4;
                if ( !v2024BEC )
                  v2024BEC = 1;
              }
              else
              {
                byte_30041C0[0] = -3;
                byte_30041C1 = 2;
                byte_30041C2 = *(_BYTE *)(2 * v2024A60 + 0x2016004);
                byte_30041C3 = *(_BYTE *)(2 * v2024A60 + 0x2016005);
                byte_30041C4 = -1;
                v2024C10 = &gUnknown_081D95F4;
              }
              b_call_bc_move_exec(v2024C10);
              v0 = (v0 + 1) & 0xFF;
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 0xAu:
            if ( !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x70) )
              goto _08016C82;
            v2024C07 = 0;
            if ( !v2024A68 )
              goto _08016BE0;
            break;
          case 0xBu:
            if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0xC00 )
            {
              *(_DWORD *)(88 * v2024A60 + 0x2024AD0) -= 1024;
              if ( sub_8015660(v2024A60) << 24 )
              {
                b_cancel_multi_turn_move_maybe(v2024A60);
              }
              else
              {
                v4 = *(_DWORD *)(88 * v2024A60 + 0x2024AD0);
                if ( !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0xC00) )
                {
                  if ( v4 & 0x1000 )
                  {
                    *(_DWORD *)(88 * v2024A60 + 0x2024AD0) = v4 & 0xFFFFEFFF;
                    if ( !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 7) )
                    {
                      v2024D21 = 71;
                      sub_801E3EC(1, 0);
                      if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 7 )
                        b_call_bc_move_exec(&gUnknown_081D9587);
                      v0 = (v0 + 1) & 0xFF;
                    }
                  }
                }
              }
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 0xCu:
            if ( *(_BYTE *)(28 * v2024A60 + 0x2024CB3) << 28 )
            {
              v5 = 0;
              if ( *(_WORD *)(28 * v2024A60 + 0x2024CAC) != *(_WORD *)(88 * v2024A60 + 0x2024A8C) )
              {
                do
                  ++v5;
                while ( v5 <= 3
                     && *(_WORD *)(28 * v2024A60 + 0x2024CAC) != *(_WORD *)(2 * v5 + 88 * v2024A60 + 0x2024A8C) );
              }
              if ( v5 == 4 )
              {
                *(_WORD *)(28 * v2024A60 + 0x2024CAC) = 0;
                *(_BYTE *)(28 * v2024A60 + 0x2024CB3) &= 0xF0u;
              }
              else
              {
                v6 = *(_BYTE *)(28 * v2024A60 + 0x2024CB3);
                *(_BYTE *)(28 * v2024A60 + 0x2024CB3) = v6 & 0xF0 | ((v6 & 0xF) - 1) & 0xF;
                if ( !(((v6 & 0xF) - 1) & 0xF) )
                {
                  *(_WORD *)(28 * v2024A60 + 0x2024CAC) = 0;
                  b_call_bc_move_exec(&gUnknown_081D9148);
                  v0 = (v0 + 1) & 0xFF;
                }
              }
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 0xDu:
            v7 = *(_BYTE *)(28 * v2024A60 + 0x2024CB6);
            if ( v7 << 28 )
            {
              if ( *(_WORD *)(2 * *(_BYTE *)(28 * v2024A60 + 0x2024CB4) + 88 * v2024A60 + 0x2024A8C) == *(_WORD *)(28 * v2024A60 + 0x2024CAE) )
              {
                v8 = ((v7 & 0xF) - 1) & 0xF;
                *(_BYTE *)(28 * v2024A60 + 0x2024CB6) = v7 & 0xF0 | v8;
                if ( !v8 || !*(_BYTE *)(88 * v2024A60 + *(_BYTE *)(28 * v2024A60 + 0x2024CB4) + 0x2024AA4) )
                {
                  *(_WORD *)(28 * v2024A60 + 0x2024CAE) = 0;
                  *(_BYTE *)(28 * v2024A60 + 0x2024CB6) &= 0xF0u;
                  b_call_bc_move_exec(&gUnknown_081D914F);
                  v0 = (v0 + 1) & 0xFF;
                }
              }
              else
              {
                *(_WORD *)(28 * v2024A60 + 0x2024CAE) = 0;
                *(_BYTE *)(28 * v2024A60 + 0x2024CB6) &= 0xF0u;
              }
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 0xEu:
            v9 = *(_DWORD *)(4 * v2024A60 + 0x2024C98);
            if ( v9 & 0x18 )
              *(_DWORD *)(4 * v2024A60 + 0x2024C98) = v9 - 8;
            v10 = 90112;
            goto _08017070;
          case 0xFu:
            v11 = *(_BYTE *)(28 * v2024A60 + 0x2024CBA);
            if ( v11 << 28 )
            {
              v12 = ((v11 & 0xF) - 1) & 0xF;
              *(_BYTE *)(28 * v2024A60 + 0x2024CBA) = v11 & 0xF0 | v12;
              if ( !v12 )
                *(_DWORD *)(4 * v2024A60 + 0x2024C98) &= 0xFFFFFDFF;
            }
            v10 = 90112;
            goto _08017070;
          case 0x10u:
            v13 = *(_BYTE *)(28 * v2024A60 + 0x2024CBB);
            if ( v13 << 28 )
              *(_BYTE *)(28 * v2024A60 + 0x2024CBB) = v13 & 0xF0 | ((v13 & 0xF) - 1) & 0xF;
            v10 = 90112;
            goto _08017070;
          case 0x11u:
            if ( *(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x1800 )
            {
              *(_DWORD *)(4 * v2024A60 + 0x2024C98) -= 2048;
              if ( !(*(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x1800) && !*(_BYTE *)(88 * v2024A60 + 0x2024ACC) )
              {
                v14 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
                if ( v14 != 72 && v14 != 15 && !(sub_8025A44(v2024A60) << 24) )
                {
                  v15 = b_cancel_multi_turn_move_maybe(v2024A60);
                  v16 = Random(v15);
                  *(_DWORD *)(88 * v2024A60 + 0x2024ACC) |= (v16 & 3) + 2;
                  dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024A60 + 33704652));
                  dp01_battle_side_mark_buffer_for_execution(v2024A60);
                  v2024C0A = v2024A60;
                  b_call_bc_move_exec(&gUnknown_081D964C);
                  v0 = (v0 + 1) & 0xFF;
                }
              }
            }
            v1 = (_BYTE *)33644544;
            goto _08017072;
          case 0x13u:
            v2016000 = 0;
            v10 = 90113;
_08017070:
            v1 = (_BYTE *)(v10 + 0x2000000);
            goto _08017072;
          default:
            goto def_80165E0;
        }
        while ( 1 )
        {
          v3 = v2024C07;
          if ( *(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 7 )
          {
            if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA0) != 43 )
              break;
          }
          ++v2024C07;
          if ( ((v3 + 1) & 0xFFu) >= v2024A68 )
            goto _08016BE0;
        }
        *(_DWORD *)(88 * v2024C07 + 0x2024ACC) &= 0xFFFFFFF8;
        *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xF7FFFFFF;
        v2024D23 = 1;
        b_call_bc_move_exec(&gUnknown_081D950F);
        v2024A60 = v2024C07;
        dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024C07 + 33704652));
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
_08016BE0:
        if ( v2024C07 != v2024A68 )
          return 2;
        v2024C07 = v2024A60;
        *(_DWORD *)(88 * v2024A60 + 0x2024AD0) -= 16;
        if ( (unsigned __int8)sub_8015660(v2024A60) )
        {
          b_cancel_multi_turn_move_maybe(v2024A60);
          v2024D23 = 1;
        }
        else if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x70 )
        {
          v2024D23 = 0;
          *(_DWORD *)(88 * v2024A60 + 0x2024AD0) |= 0x1000u;
        }
        else
        {
          v2024D23 = 1;
          b_cancel_multi_turn_move_maybe(v2024A60);
        }
        b_call_bc_move_exec(&gUnknown_081D957E);
        v0 = 1;
_08016C82:
        if ( v0 != 2 )
        {
          v1 = (_BYTE *)33644544;
_08017072:
          ++*v1;
        }
      }
def_80165E0:
      if ( v0 )
        return v0;
    }
  }
  v2024C6C &= 0xFEFFFFDF;
  return 0;
}
