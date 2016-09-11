int __fastcall sub_801E3EC(unsigned __int8 a1, unsigned __int8 a2)
{
  int v2; // r4@1
  int v3; // r5@1
  signed int v4; // r10@1
  signed int v5; // r6@1
  _BYTE *v6; // r1@2
  unsigned int v7; // r0@18
  int v8; // r0@39
  void *v9; // r0@45
  int v10; // r1@46
  int v11; // r1@48
  int v12; // r0@49
  int v13; // r4@55
  int v14; // r0@56
  void *v15; // r0@71
  char v16; // r0@26
  int v17; // r1@99
  int v18; // r0@100
  int v19; // r0@108
  int v20; // r1@109
  int v21; // r0@109
  int v22; // r3@109
  int v23; // r0@110
  char *v24; // r0@118
  int *v25; // r2@128
  int v26; // r0@128
  int v27; // r1@128
  void *v28; // r0@136
  _WORD *v29; // r0@144
  char v30; // r0@144
  unsigned int v31; // r3@146
  int v32; // r1@146
  int v33; // r0@146
  char v34; // r0@153
  int *v35; // r2@169
  int v36; // r0@169
  signed int v37; // r1@169
  int v38; // r6@171
  __int16 v39; // r2@181
  _WORD *v40; // r0@195
  char v41; // r0@195
  unsigned __int8 v42; // r0@201
  signed int v44; // [sp+4h] [bp-24h]@1
  int v45; // [sp+24h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  v44 = 1;
  if ( v2024D21 & 0x40 )
  {
    v2024C0A = v2024C07;
    v2024D21 &= 0xBFu;
    v5 = 64;
    v6 = (_BYTE *)33704968;
  }
  else
  {
    v2024C0A = v2024C08;
    v6 = (_BYTE *)33704967;
  }
  v2016003 = *v6;
  if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 19 && !(v2024C6C & 0x2000) && !a1 && v2024D21 <= 9u
    || *(_WORD *)(2 * (battle_get_per_side_status(v2024C0A) & 1) + 0x2024C7A) & 0x20
    && !(v2024C6C & 0x2000)
    && !v2
    && v2024D21 <= 7u
    || !*(_WORD *)(88 * v2024C0A + 0x2024AA8) && v2024D21 != 11 && v2024D21 != 31
    || *(_DWORD *)(88 * v2024C0A + 0x2024AD0) & 0x1000000 && v5 != 64 )
  {
    goto _0801F5DC;
  }
  if ( v2024D21 <= 6u )
  {
    v7 = gUnknown_081FAB5C[v2024D21];
    if ( v7 == 16 )
    {
      if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) != 41 || v2 != 1 && v3 != 128 )
      {
        if ( (*(_BYTE *)(88 * v2024C0A + 0x2024AA1) == 10 || *(_BYTE *)(88 * v2024C0A + 0x2024AA2) == 10)
          && v2024C6C & 0x2000
          && (v2 == 1 || v3 == 128) )
        {
          b_movescr_stack_push(v2024C10 + 1);
          v15 = &BattleScript_1D98A5;
_0801E998:
          v2024C10 = v15;
          v2024D23 = 2;
          return v45;
        }
        if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA1) == 10
          || *(_BYTE *)(88 * v2024C0A + 0x2024AA2) == 10
          || *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 41
          || *(_DWORD *)(88 * v2024C0A + 0x2024ACC) )
        {
          goto _0801EA14;
        }
        goto _0801EA04;
      }
      v2024C06 = 41;
      sub_81074C4(v2024C0A, 41);
      b_movescr_stack_push(v2024C10 + 1);
      v9 = &BattleScript_1D98A5;
    }
    else
    {
      if ( v7 <= 0x10 )
      {
        if ( v7 != 7 )
        {
          if ( v7 != 8 )
            goto _0801EA14;
          if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 17 && (v2 == 1 || v3 == 128) )
          {
            v2024C06 = 17;
            sub_81074C4(v2024C0A, 17);
            b_movescr_stack_push(v2024C10 + 1);
            v9 = &BattleScript_1D98BD;
            goto _0801E664;
          }
          v11 = *(_BYTE *)(88 * v2024C0A + 0x2024AA1);
          if ( v11 != 3 && (v12 = *(_BYTE *)(88 * v2024C0A + 0x2024AA2), v12 != 3) && v11 != 8 && v12 != 8
            || !(v2024C6C & 0x2000)
            || v2 != 1 && v3 != 128 )
          {
            v13 = *(_BYTE *)(88 * v2024C0A + 0x2024AA1);
            if ( v13 == 3 )
              goto _0801EA14;
            v14 = *(_BYTE *)(88 * v2024C0A + 0x2024AA2);
            if ( v14 == 3
              || v13 == 8
              || v14 == 8
              || *(_DWORD *)(88 * v2024C0A + 0x2024ACC)
              || *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 17 )
            {
              goto _0801EA14;
            }
            goto _0801EA04;
          }
          goto _0801E98C;
        }
        if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 43 )
        {
          v2024A60 = v2024A68;
        }
        else
        {
          v2024A60 = 0;
          if ( v2024A68 && !(v2024AD0 & 0x70) )
          {
            do
              ++v2024A60;
            while ( v2024A60 < (unsigned int)v2024A68 && !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x70) );
          }
        }
        if ( *(_DWORD *)(88 * v2024C0A + 0x2024ACC) )
          goto _0801EA14;
        if ( v2024A60 != v2024A68 )
          goto _0801EA14;
        v8 = *(_BYTE *)(88 * v2024C0A + 0x2024AA0);
        if ( v8 == 72 || v8 == 15 )
          goto _0801EA14;
        b_cancel_multi_turn_move_maybe(v2024C0A);
_0801EA04:
        v4 = 1;
        goto _0801EA14;
      }
      if ( v7 != 64 )
      {
        if ( v7 <= 0x40 )
        {
          if ( v7 == 32 )
          {
            v16 = sub_8018324(0x13u, 0, 0xDu, 0, 0);
            if ( !v16 && !(sub_8018324(0x13u, 0, 0x4Du, 0, 0) << 24) && v2024DB8 & 0x60 )
              v44 = 0;
            if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA1) != 15
              && *(_BYTE *)(88 * v2024C0A + 0x2024AA2) != 15
              && !*(_DWORD *)(88 * v2024C0A + 0x2024ACC)
              && v44
              && *(_BYTE *)(88 * v2024C0A + 0x2024AA0) != 40 )
            {
              b_cancel_multi_turn_move_maybe(v2024C0A);
              v4 = 1;
            }
          }
          goto _0801EA14;
        }
        if ( v7 == 128 )
        {
          if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 17 && (v2 == 1 || v3 == 128) )
          {
            v2024C06 = 17;
            sub_81074C4(v2024C0A, 17);
            b_movescr_stack_push(v2024C10 + 1);
            v2024C10 = &BattleScript_1D98BD;
            v10 = v2024C6C;
            if ( !(v2024C6C & 0x2000) )
            {
_0801E94C:
              v2024D23 = 0;
              return v45;
            }
_0801E928:
            v2024D23 = 1;
            v2024C6C = v10 & 0xFFFFDFFF;
            return v45;
          }
          v17 = *(_BYTE *)(88 * v2024C0A + 0x2024AA1);
          if ( v17 == 3 || (v18 = *(_BYTE *)(88 * v2024C0A + 0x2024AA2), v18 == 3) || v17 == 8 || v18 == 8 )
          {
            if ( v2024C6C & 0x2000 && (v2 == 1 || v3 == 128) )
            {
_0801E98C:
              b_movescr_stack_push(v2024C10 + 1);
              v15 = &BattleScript_1D98BD;
              goto _0801E998;
            }
          }
          v19 = 88 * v2024C0A;
          if ( !*(_DWORD *)(88 * v2024C0A + 0x2024ACC) )
          {
            v20 = v19 + 33704576;
            v21 = v19 + 33704609;
            v22 = *(_BYTE *)v21;
            if ( v22 == 3 || (v23 = *(_BYTE *)(v21 + 1), v23 == 3) || v22 == 8 || v23 == 8 )
            {
              v2024C68 |= 8u;
              goto _0801EA14;
            }
            if ( *(_BYTE *)(v20 + 32) != 17 )
            {
              *(_DWORD *)(88 * v2024C0A + 0x2024ACC) &= 0xFFFFFFF7;
              goto _0801EA04;
            }
          }
        }
_0801EA14:
        if ( v4 == 1 )
        {
          b_movescr_stack_push(v2024C10 + 1);
          v24 = (char *)&gUnknown_081FAB5C[v2024D21];
          if ( *(_DWORD *)v24 == 7 )
            *(_DWORD *)(88 * v2024C0A + 0x2024ACC) |= (Random(v24) & 3) + 2;
          else
            *(_DWORD *)(88 * v2024C0A + 0x2024ACC) |= *(_DWORD *)v24;
          v2024C10 = *(&gUnknown_081FAC4C + v2024D21);
          v2024A60 = v2024C0A;
          dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024C0A + 33704652));
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
          if ( v2024C6C & 0x2000 )
          {
            v2024D23 = 1;
            v2024C6C &= 0xFFFFDFFF;
          }
          else
          {
            v2024D23 = 0;
          }
          if ( v2024D21 == 2 || v2024D21 == 6 || v2024D21 == 5 || v2024D21 == 3 )
          {
            v20160CA = v2024D21;
            v25 = (int *)33705068;
            v26 = v2024C6C;
            v27 = 0x4000;
_0801F4F2:
            *v25 = v26 | v27;
          }
          return v45;
        }
        if ( v4 )
          return v45;
_0801F5DC:
        ++v2024C10;
        return v45;
      }
      if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) != 7 )
      {
        if ( !*(_DWORD *)(88 * v2024C0A + 0x2024ACC) )
          v4 = 1;
        goto _0801EA14;
      }
      if ( v2 != 1 && v3 != 128 )
        goto _0801EA14;
      v2024C06 = *(_BYTE *)(88 * v2024C0A + 0x2024AA0);
      sub_81074C4(v2024C0A, 7);
      b_movescr_stack_push(v2024C10 + 1);
      v9 = &BattleScript_1D98B1;
    }
_0801E664:
    v2024C10 = v9;
    v10 = v2024C6C;
    if ( !(v2024C6C & 0x2000) )
      goto _0801E94C;
    goto _0801E928;
  }
  if ( *(_DWORD *)(88 * v2024C0A + 0x2024AD0) & gUnknown_081FAB5C[v2024D21] )
    goto _0801F5DC;
  if ( (unsigned int)v2024D21 - 7 <= 0x34 )
  {
    switch ( v2024D21 )
    {
      case 0u:
        if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 20 || *(_DWORD *)(88 * v2024C0A + 0x2024AD0) & 7 )
          goto _0801F5DC;
        *(_DWORD *)(88 * v2024C0A + 0x2024AD0) |= (((Random(0) << 16) & 0x30000u) >> 16) + 2;
        b_movescr_stack_push(v2024C10 + 1);
        v28 = *(&gUnknown_081FAC4C + v2024D21);
        goto _0801F5F8;
      case 1u:
        if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 39 )
        {
          if ( v2 == 1 || v3 == 128 )
          {
            v2024C06 = 39;
            sub_81074C4(v2024C0A, 39);
            v2024C10 = &gUnknown_081D98D7;
            return v45;
          }
        }
        else if ( (unsigned __int8)sub_801E3B4(v2024C0A) > (unsigned int)v2024A7E )
        {
          *(_DWORD *)(88 * v2024C0A + 0x2024AD0) |= gUnknown_081FAB5C[v2024D21];
        }
        goto _0801F5DC;
      case 3u:
        if ( *(_DWORD *)(88 * v2024C0A + 0x2024AD0) & 0x70 )
          goto _0801F5DC;
        *(_DWORD *)(88 * v2024C0A + 0x2024AD0) |= 0x1000u;
        v29 = (_WORD *)(2 * v2024C0A + 33705044);
        *v29 = v2024BE6;
        v30 = Random(v29);
        *(_DWORD *)(88 * v2024C0A + 0x2024AD0) |= 16 * ((v30 & 3) + 2);
        b_movescr_stack_push(v2024C10 + 1);
        v28 = *(&gUnknown_081FAC4C + v2024D21);
        goto _0801F5F8;
      case 4u:
        if ( !(battle_get_per_side_status(v2024C07) & 1) )
        {
          v31 = v2024D1A;
          v32 = *(_BYTE *)(88 * v2024C07 + 0x2024AAA);
          v33 = v2024D1A + 5 * v32;
          v2024D1A += 5 * v32;
          if ( v31 > (unsigned __int16)v33 )
            v2024D1A = -1;
        }
        b_movescr_stack_push(v2024C10 + 1);
        v28 = *(&gUnknown_081FAC4C + v2024D21);
        goto _0801F5F8;
      case 2u:
        if ( *(_DWORD *)(88 * v2024C0A + 0x2024ACC) )
          goto _0801F5DC;
        v2024D21 = (unsigned __int16)Random(0) % 3u + 3;
        sub_801E3EC(0, 0);
        return v45;
      case 5u:
        *(_DWORD *)(88 * v2024C0A + 0x2024AD0) |= 0x1000u;
        *(_WORD *)(2 * v2024C0A + 0x2024C54) = v2024BE6;
        *(_BYTE *)(16 * v2024C0A + 0x2024D29) |= 4u;
        goto _0801F5DC;
      case 6u:
        if ( *(_DWORD *)(88 * v2024C0A + 0x2024AD0) & 0xE000 )
          goto _0801F5DC;
        v34 = Random(57344);
        *(_DWORD *)(88 * v2024C0A + 0x2024AD0) |= ((v34 & 3) + 3) << 13;
        *(_BYTE *)(2 * v2024C0A + 0x2016004) = v2024BE6;
        *(_BYTE *)(2 * v2024C0A + 0x2016005) = v2024BE7;
        *(_BYTE *)(v2024C0A + 0x2016020) = v2024C07;
        b_movescr_stack_push(v2024C10 + 1);
        v2024C10 = *(&gUnknown_081FAC4C + v2024D21);
        v2024D23 = 0;
        if ( (unsigned __int16)gUnknown_0840164C[0] != v2024BE6 )
        {
          do
            ++v2024D23;
          while ( v2024D23 <= 4u && (unsigned __int16)gUnknown_0840164C[v2024D23] != v2024BE6 );
        }
        return v45;
      case 7u:
        v2024BEC = v2024BF0 / 4;
        if ( !(v2024BF0 / 4) )
          v2024BEC = 1;
        b_movescr_stack_push(v2024C10 + 1);
        v28 = *(&gUnknown_081FAC4C + v2024D21);
        goto _0801F5F8;
      case 8u:
      case 9u:
      case 0xAu:
      case 0xBu:
      case 0xCu:
      case 0xDu:
      case 0xEu:
        if ( sub_8025E20(16, (v2024D21 + 242) & 0xFF, v5, 0) & 0xFF )
          goto _0801F5DC;
        v20160A4 = v2024D21 & 0x3F;
        v20160A5 = 0;
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D71E5;
        goto _0801F5F8;
      case 0xFu:
      case 0x10u:
      case 0x11u:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
        if ( sub_8025E20(-112, (v2024D21 + 235) & 0xFF, v5, 0) & 0xFF )
          goto _0801F5DC;
        v20160A4 = v2024D21 & 0x3F;
        v20160A5 = 0;
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D7276;
        goto _0801F5F8;
      case 0x20u:
      case 0x21u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x25u:
      case 0x26u:
        if ( sub_8025E20(32, (v2024D21 + 218) & 0xFF, v5, 0) & 0xFF )
          goto _0801F5DC;
        v20160A4 = v2024D21 & 0x3F;
        v20160A5 = 0;
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D71E5;
        goto _0801F5F8;
      case 0x27u:
      case 0x28u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
        if ( sub_8025E20(-96, (v2024D21 + 211) & 0xFF, v5, 0) & 0xFF )
          goto _0801F5DC;
        v20160A4 = v2024D21 & 0x3F;
        v20160A5 = 0;
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D7276;
        goto _0801F5F8;
      case 0x16u:
        *(_DWORD *)(88 * v2024C0A + 0x2024AD0) |= 0x400000u;
        *(_BYTE *)(28 * v2024C0A + 0x2024CC1) = 2;
        *(_WORD *)(2 * v2024C0A + 0x2024C54) = v2024BE6;
        goto _0801F5DC;
      case 0x17u:
        v35 = (int *)(88 * v2024C07 + 33704656);
        v36 = *(_DWORD *)(88 * v2024C07 + 0x2024AD0);
        v37 = 0x800000;
        goto _0801F19A;
      case 0x18u:
        v38 = (unsigned __int8)battle_side_get_owner(v2024C07);
        if ( (unsigned __int8)battle_side_get_owner(v2024C07) != 1 )
          goto _0801F1D8;
        if ( v20239F8 & 0x902 )
          goto _0801F214;
        if ( v202FF5E != 1024 )
          goto _0801F5DC;
_0801F1D8:
        if ( !(v20239F8 & 0x902)
          && v202FF5E != 1024
          && *(_BYTE *)(v38 + 33705445) & gBitTable[*(_WORD *)(2 * v2024C07 + 0x2024A6A)] )
        {
          goto _0801F5DC;
        }
_0801F214:
        if ( *(_WORD *)(88 * v2024C08 + 0x2024AAE) && *(_BYTE *)(88 * v2024C08 + 0x2024AA0) == 60 )
        {
          v2024C10 = &gUnknown_081D9913;
          v2024C06 = *(_BYTE *)(88 * v2024C08 + 0x2024AA0);
          sub_81074C4(v2024C08, v2024C06);
          return v45;
        }
        if ( *(_WORD *)(88 * v2024C07 + 0x2024AAE) )
          goto _0801F5DC;
        v39 = *(_WORD *)(88 * v2024C08 + 0x2024AAE);
        if ( *(_WORD *)(88 * v2024C08 + 0x2024AAE) == 175 || !*(_WORD *)(88 * v2024C08 + 0x2024AAE) )
          goto _0801F5DC;
        *(_WORD *)(2 * v2024C07 + 0x20160F0) = v39;
        v2024C04 = v39;
        *(_WORD *)(88 * v2024C08 + 0x2024AAE) = 0;
        v2024A60 = v2024C07;
        dp01_build_cmdbuf_x02_a_b_varargs(0, 2, 0, 2u, (char *)0x2024C04);
        dp01_battle_side_mark_buffer_for_execution(v2024C07);
        v2024A60 = v2024C08;
        dp01_build_cmdbuf_x02_a_b_varargs(0, 2, 0, 2u, (char *)(88 * v2024C08 + 33704622));
        dp01_battle_side_mark_buffer_for_execution(v2024C08);
        b_movescr_stack_push(v2024C10 + 1);
        v2024C10 = &gUnknown_081D96F6;
        *(_BYTE *)(2 * v2024C08 + 0x20160E8) = 0;
        *(_BYTE *)(2 * v2024C08 + 0x20160E9) = 0;
        return v45;
      case 0x19u:
        *(_DWORD *)(88 * v2024C08 + 0x2024AD0) |= 0x4000000u;
        *(_BYTE *)(28 * v2024C08 + 0x2024CBC) = v2024C07;
        goto _0801F5DC;
      case 0x1Au:
        v35 = (int *)(88 * v2024C08 + 33704656);
        v36 = *(_DWORD *)(88 * v2024C08 + 0x2024AD0);
        v37 = 0x8000000;
_0801F19A:
        *v35 = v36 | v37;
        goto _0801F5DC;
      case 0x1Bu:
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D9224;
        goto _0801F5F8;
      case 0x1Cu:
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D92C0;
        goto _0801F5F8;
      case 0x1Du:
        if ( !(*(_DWORD *)(88 * v2024C08 + 0x2024ACC) & 0x40) )
          goto _0801F5DC;
        *(_DWORD *)(88 * v2024C08 + 0x2024ACC) &= 0xFFFFFFBF;
        v2024A60 = v2024C08;
        dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024C08 + 33704652));
        dp01_battle_side_mark_buffer_for_execution(v2024A60);
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D9635;
        goto _0801F5F8;
      case 0x1Eu:
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D93FA;
        goto _0801F5F8;
      case 0x1Fu:
        v2024BEC = v2024BF0 / 3;
        if ( !(v2024BF0 / 3) )
          v2024BEC = 1;
        b_movescr_stack_push(v2024C10 + 1);
        v28 = *(&gUnknown_081FAC4C + v2024D21);
        goto _0801F5F8;
      case 0x2Eu:
        if ( *(_DWORD *)(88 * v2024C0A + 0x2024AD0) & 0xC00 )
          goto _0801F5DC;
        *(_DWORD *)(88 * v2024C0A + 0x2024AD0) |= 0x1000u;
        v40 = (_WORD *)(2 * v2024C0A + 33705044);
        *v40 = v2024BE6;
        v41 = Random(v40);
        v25 = (int *)(88 * v2024C0A + 33704656);
        v27 = ((v41 & 1) + 2) << 10;
        v26 = *(_DWORD *)(88 * v2024C0A + 0x2024AD0);
        goto _0801F4F2;
      case 0x2Fu:
        if ( *(_BYTE *)(88 * v2024C0A + 0x2024AA0) == 60 )
        {
          if ( !*(_WORD *)(88 * v2024C0A + 0x2024AAE) )
            goto _0801F5DC;
          v2024C06 = *(_BYTE *)(88 * v2024C0A + 0x2024AA0);
          v2024C10 = &gUnknown_081D9913;
          sub_81074C4(v2024C0A, 60);
        }
        else
        {
          if ( !*(_WORD *)(88 * v2024C0A + 0x2024AAE) )
            goto _0801F5DC;
          v42 = battle_side_get_owner(v2024C0A);
          v2024C04 = *(_WORD *)(88 * v2024C0A + 0x2024AAE);
          *(_WORD *)(88 * v2024C0A + 0x2024AAE) = 0;
          *(_BYTE *)(v42 + 0x2024DE5) |= gBitTable[*(_WORD *)(2 * v2024C0A + 0x2024A6A)];
          b_movescr_stack_push(v2024C10 + 1);
          v2024C10 = &gUnknown_081D944B;
          *(_BYTE *)(2 * v2024C0A + 0x20160E8) = 0;
          *(_BYTE *)(2 * v2024C0A + 0x20160E9) = 0;
        }
        break;
      case 0x34u:
        b_movescr_stack_push(v2024C10 + 1);
        v28 = &gUnknown_081D94B0;
_0801F5F8:
        v2024C10 = v28;
        return v45;
      default:
        return v45;
    }
  }
  return v45;
}
