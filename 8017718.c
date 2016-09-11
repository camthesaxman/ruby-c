signed int sub_8017718()
{
  signed int v0; // r9@1
  signed int v1; // r8@1
  unsigned int v2; // r0@3
  unsigned int v3; // r3@9
  int v4; // r1@11
  signed int v5; // r1@18
  int v6; // r0@19
  signed int v7; // r0@25
  int v8; // r1@29
  int v9; // r1@32
  void *v10; // r0@33
  int v11; // r0@44
  void *v12; // r0@48
  signed int v13; // r7@50
  int v14; // r0@51
  unsigned int v15; // r1@57
  int v16; // r0@58
  void *v17; // r0@65
  int v18; // r3@73

  v0 = 0;
  v1 = 0x2000000;
  do
  {
    v2 = *(_BYTE *)(v1 + 90343);
    if ( v2 <= 0xE )
    {
      switch ( v2 )
      {
        case 0u:
          *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xFDFFFFFF;
          *(_DWORD *)(4 * v2024C07 + 0x2024C98) &= 0xFFFFBFFF;
          goto _08017F94;
        case 1u:
          if ( !(*(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 7) )
            goto _08017D96;
          if ( sub_8025A44(v2024C07) << 24 )
          {
            *(_DWORD *)(88 * v2024C07 + 0x2024ACC) &= 0xFFFFFFF8;
            *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xF7FFFFFF;
            b_movescr_stack_push_cursor();
            v2024D23 = 1;
            v2024C10 = &gUnknown_081D94FB;
            v0 = 2;
          }
          else
          {
            v3 = 1;
            if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA0) == 48 )
              v3 = 2;
            v4 = *(_DWORD *)(88 * v2024C07 + 0x2024ACC);
            if ( (*(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 7u) >= v3 )
              *(_DWORD *)(88 * v2024C07 + 0x2024ACC) = v4 - v3;
            else
              *(_DWORD *)(88 * v2024C07 + 0x2024ACC) = v4 & 0xFFFFFFF8;
            if ( *(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 7 )
            {
              if ( v2024BE6 != 173 && v2024BE6 != 214 )
              {
                v2024C10 = &gUnknown_081D94EE;
                v2024C6C |= 0x80000u;
                v0 = 2;
              }
            }
            else
            {
              *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xF7FFFFFF;
              b_movescr_stack_push_cursor();
              v2024D23 = 0;
              v2024C10 = &gUnknown_081D94FB;
              v5 = 2;
_08017D8E:
              v0 = v5;
            }
          }
          goto _08017D96;
        case 2u:
          v6 = *(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 0x20;
          if ( !v6 )
            goto _08017F94;
          if ( (unsigned __int16)Random(v6) % 5u )
          {
            if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE6) == 125 )
            {
_08017D96:
              ++v20160E7;
              v1 = 0x2000000;
              break;
            }
            v2024C10 = &gUnknown_081D9545;
            v2024C6C |= 0x200u;
          }
          else
          {
            *(_DWORD *)(88 * v2024C07 + 0x2024ACC) &= 0xFFFFFFDF;
            b_movescr_stack_push_cursor();
            v2024C10 = &gUnknown_081D9552;
            v2024D23 = 0;
          }
          v7 = 2;
_08017E3C:
          v0 = v7;
          v1 = 0x2000000;
          goto _08017F94;
        case 3u:
          if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA0) == 54 && *(_BYTE *)(28 * v2024C07 + 0x2024CC0) << 31 )
          {
            b_cancel_multi_turn_move_maybe(v2024C07);
            v2024C6C |= 0x80000u;
            v2024D23 = 0;
            v2024C10 = &gUnknown_081D9977;
            v2024C68 |= 1u;
            v0 = 1;
          }
          goto _08017D96;
        case 4u:
          v8 = *(_DWORD *)(88 * v2024C07 + 0x2024AD0);
          if ( v8 & 0x400000 )
          {
            *(_DWORD *)(88 * v2024C07 + 0x2024AD0) = v8 & 0xFFBFFFFF;
            *(_BYTE *)(28 * v2024C07 + 0x2024CC1) = 0;
            b_cancel_multi_turn_move_maybe(v2024C07);
            v2024C10 = &gUnknown_081D7956;
            v2024C6C |= 0x80000u;
            v0 = 1;
          }
          goto _08017D96;
        case 5u:
          v9 = *(_DWORD *)(88 * v2024C07 + 0x2024AD0);
          if ( !(v9 & 8) )
            goto _08017D96;
          *(_DWORD *)(88 * v2024C07 + 0x2024AD0) = v9 & 0xFFFFFFF7;
          *(_BYTE *)(16 * v2024C07 + 0x2024D2A) |= 4u;
          b_cancel_multi_turn_move_maybe(v2024C07);
          v10 = &gUnknown_081D9573;
          goto _08017D7E;
        case 6u:
          if ( *(_WORD *)(28 * v2024C07 + 0x2024CAC) == v2024BE6 && *(_WORD *)(28 * v2024C07 + 0x2024CAC) )
          {
            *(_BYTE *)(16 * v2024C07 + 0x2024D29) |= 0x80u;
            v2016003 = v2024C07;
            b_cancel_multi_turn_move_maybe(v2024C07);
            v2024C10 = &gUnknown_081D9139;
            v2024C6C |= 0x80000u;
            v0 = 1;
          }
          goto _08017D96;
        case 7u:
          if ( *(_BYTE *)(28 * v2024C07 + 0x2024CBB) << 28 && !*((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 1) )
          {
            *(_BYTE *)(16 * v2024C07 + 0x2024D2A) |= 1u;
            b_cancel_multi_turn_move_maybe(v2024C07);
            v2024C10 = &gUnknown_081D938F;
            v2024C6C |= 0x80000u;
            v0 = 1;
          }
          goto _08017D96;
        case 8u:
          if ( !(sub_8015D5C(v2024C07, v2024BE6) << 24) )
            goto _08017D96;
          *(_BYTE *)(16 * v2024C07 + 0x2024D29) |= 0x20u;
          b_cancel_multi_turn_move_maybe(v2024C07);
          v10 = &gUnknown_081D9459;
          goto _08017D7E;
        case 9u:
          if ( !(*(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 7) )
            goto _08017F94;
          v11 = --*(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 7;
          if ( v11 )
          {
            if ( Random(v11) & 1 )
            {
              v2024D23 = 0;
              b_movescr_stack_push_cursor();
            }
            else
            {
              v2024D23 = 1;
              v2024C08 = v2024C07;
              v2024BEC = sub_803BA2C(88 * v2024C07 + 33704576);
              *(_BYTE *)(16 * v2024C07 + 0x2024D29) |= 1u;
              v2024C6C |= 0x80000u;
            }
            v12 = &gUnknown_081D9595;
          }
          else
          {
            b_movescr_stack_push_cursor();
            v12 = &gUnknown_081D95D4;
          }
          v2024C10 = v12;
          v13 = 1;
          goto _08017F8E;
        case 0xAu:
          v14 = *(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 0x40;
          if ( !v14 || (Random(*(_DWORD *)(88 * v2024C07 + 0x2024ACC) & 0x40) << 16) & 0x30000 )
            goto _08017D96;
          *(_BYTE *)(16 * v2024C07 + 0x2024D28) |= 0x80u;
          b_cancel_multi_turn_move_maybe(v2024C07);
          v10 = &gUnknown_081D9566;
_08017D7E:
          v2024C10 = v10;
          v2024C6C |= 0x80000u;
          v5 = 1;
          goto _08017D8E;
        case 0xBu:
          v15 = *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0xF0000;
          if ( !v15 )
            goto _08017F94;
          v16 = sub_804114C(v15 >> 16);
          v2016003 = v16;
          if ( Random(v16) & 1 )
          {
            b_movescr_stack_push_cursor();
          }
          else
          {
            b_movescr_stack_push((int)&gUnknown_081D9608);
            v2024C6C |= 0x80000u;
            *(_BYTE *)(16 * v2024C07 + 0x2024D29) |= 0x40u;
            b_cancel_multi_turn_move_maybe(v2024C07);
          }
          v2024C10 = &gUnknown_081D95FB;
          v7 = 1;
          goto _08017E3C;
        case 0xCu:
          if ( !(*(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x300) )
            goto _08017F94;
          *(_DWORD *)(88 * v2024C07 + 0x2024AD0) -= 256;
          if ( *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x300 )
          {
            v17 = &gUnknown_081D90A7;
_08017F38:
            v2024C10 = v17;
            goto _08017F3A;
          }
          *(_DWORD *)(88 * v2024C07 + 0x2024AD0) &= 0xFFFFEFFF;
          if ( !*(_DWORD *)(4 * v2024C07 + 0x2024BF4) )
          {
            v17 = &gUnknown_081D90F1;
            goto _08017F38;
          }
          v2024BE6 = 117;
          v2016090 = 2 * *(_DWORD *)(4 * v2024C07 + 0x2024BF4);
          v2024C08 = *(_BYTE *)(v2024C07 + 0x2024C74);
          if ( v2024C0C & gBitTable[v2024C08] )
            v2024C08 = sub_801B5C0(117, 1);
          v2024C10 = &gUnknown_081D90B2;
          v1 = 0x2000000;
_08017F3A:
          v0 = 1;
_08017F94:
          ++*(_BYTE *)(v1 + 90343);
          break;
        case 0xDu:
          v18 = *(_DWORD *)(88 * v2024C07 + 0x2024ACC);
          if ( v18 & 0x20 )
          {
            if ( *((_BYTE *)&gBattleMoves + 12 * v2024BE6) == 125 )
            {
              *(_DWORD *)(88 * v2024C07 + 0x2024ACC) = v18 & 0xFFFFFFDF;
              b_movescr_stack_push_cursor();
              v2024C10 = &gUnknown_081D9552;
              v2024D23 = 1;
            }
            v13 = 2;
_08017F8E:
            v0 = v13;
            v1 = 0x2000000;
          }
          goto _08017F94;
        default:
          break;
      }
    }
  }
  while ( *(_BYTE *)(v1 + 90343) != 14 && !v0 );
  if ( v0 == 2 )
  {
    v2024A60 = v2024C07;
    dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024C07 + 33704652));
    dp01_battle_side_mark_buffer_for_execution(v2024A60);
  }
  return v0;
}
