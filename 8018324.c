int __fastcall sub_8018324(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int16 a5)
{
  unsigned int v5; // r10@1
  int v6; // r6@1
  int v7; // r8@1
  int v8; // r9@1
  int v9; // r1@4
  char *v10; // r0@4
  int v11; // r7@6
  int v12; // r1@9
  char *v13; // r0@9
  int v14; // r5@11
  int v15; // r3@16
  int v16; // r4@19
  unsigned int v17; // r0@41
  char v18; // r1@44
  _BYTE *v19; // r3@58
  char v20; // r0@59
  char v21; // r1@59
  unsigned __int8 v22; // r0@37
  unsigned int v23; // r6@65
  int v24; // r4@103
  __int16 *v25; // r2@105
  int v26; // r0@106
  void *v27; // r0@122
  signed int v28; // r2@124
  void *v29; // r0@128
  void *v30; // r0@135
  void *v31; // r0@139
  int v32; // r0@177
  int v33; // r0@202
  int v34; // r4@215
  char *v35; // r0@224
  _BYTE *v36; // r1@224
  int *v37; // r2@245
  int v38; // r0@245
  int v39; // r0@246
  signed int v40; // r1@246
  int v41; // r4@269
  _DWORD *v42; // r2@270
  _BYTE *v43; // r3@270
  int v44; // r4@276
  int v45; // r5@280
  int v46; // r6@280
  int v47; // r7@280
  char v48; // r0@285
  char v49; // r0@288
  _DWORD *v50; // r2@302
  _BYTE *v51; // r3@302
  int v52; // r5@308
  int v53; // r4@308
  unsigned __int8 v54; // r0@309
  int v55; // r3@309
  int v56; // r5@314
  int v57; // r4@314
  unsigned __int8 v58; // r0@315
  int v59; // r3@315
  int v60; // r4@322
  int v61; // r4@324
  int v62; // r3@325
  int v63; // r4@329
  int v64; // r3@330
  int v65; // r3@334
  int v66; // r4@338
  int v67; // r3@339
  int v68; // r4@344
  int v69; // r3@345
  int v70; // r5@350
  signed int i; // r4@350
  int v72; // r5@356
  signed int j; // r4@356
  signed int v74; // r4@364
  _BYTE *v75; // r1@365
  unsigned int v77; // [sp+4h] [bp-44h]@1
  int v78; // [sp+8h] [bp-40h]@11
  int v79; // [sp+Ch] [bp-3Ch]@11
  int v80; // [sp+10h] [bp-38h]@11
  int v81; // [sp+14h] [bp-34h]@11
  _BYTE *v82; // [sp+1Ch] [bp-2Ch]@277
  int v83; // [sp+20h] [bp-28h]@277

  v77 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = 0;
  if ( v2024C07 >= (unsigned int)v2024A68 )
    v2024C07 = a2;
  if ( battle_side_get_owner(v2024C07) << 24 )
  {
    v9 = 100 * *(_WORD *)(2 * v2024C07 + 0x2024A6A);
    v10 = (char *)&unk_30045C0;
  }
  else
  {
    v9 = 100 * *(_WORD *)(2 * v2024C07 + 0x2024A6A);
    v10 = (char *)&unk_3004360;
  }
  v11 = (int)&v10[v9];
  if ( v2024C08 >= (unsigned int)v2024A68 )
    v2024C08 = v5;
  if ( battle_side_get_owner(v2024C08) << 24 )
  {
    v12 = 100 * *(_WORD *)(2 * v2024C08 + 0x2024A6A);
    v13 = (char *)&unk_30045C0;
  }
  else
  {
    v12 = 100 * *(_WORD *)(2 * v2024C08 + 0x2024A6A);
    v13 = (char *)&unk_3004360;
  }
  v14 = (int)&v13[v12];
  v78 = (unsigned __int16)GetMonData(v11, 11);
  v80 = GetMonData(v11, 0);
  v79 = (unsigned __int16)GetMonData(v14, 11);
  v81 = GetMonData(v14, 0);
  if ( v20239F8 & 0x80 )
    return v8;
  if ( v7 )
    v2024C06 = v7;
  else
    v2024C06 = *(_BYTE *)(88 * v5 + 0x2024AA0);
  if ( a5 )
    v15 = a5;
  else
    v15 = v2024BE6;
  if ( v201601C )
    v16 = v201601C & 0x3F;
  else
    v16 = *((_BYTE *)&gBattleMoves + 12 * v15 + 2);
  if ( v77 > 0x13 )
    goto def_8018D06;
  switch ( v77 )
  {
    case 0u:
      if ( v2024C07 >= (unsigned int)v2024A68 )
        v2024C07 = v5;
      if ( v2024C06 == 45 )
      {
        if ( v2024DB8 & 0x10 )
          goto def_8018D06;
        v2024DB8 = 24;
        b_push_move_exec(&gUnknown_081D9744);
        v2016003 = v5;
      }
      else
      {
        if ( (signed int)v2024C06 <= 45 )
        {
          if ( v2024C06 != 13 )
          {
            if ( (signed int)v2024C06 > 13 )
            {
              if ( v2024C06 == 22 )
              {
                v19 = (_BYTE *)(20 * v5 + 33705320);
                if ( *(_BYTE *)(20 * v5 + 0x2024D68) & 8 )
                  goto def_8018D06;
                *(_DWORD *)(4 * v5 + 0x2024C98) |= 0x80000u;
                v20 = *(_BYTE *)(20 * v5 + 0x2024D68);
                v21 = 8;
              }
              else
              {
                if ( v2024C06 != 36 )
                  goto def_8018D06;
                v19 = (_BYTE *)(20 * v5 + 33705320);
                if ( *(_BYTE *)(20 * v5 + 0x2024D68) & 0x10 )
                  goto def_8018D06;
                *(_DWORD *)(4 * v5 + 0x2024C98) |= 0x100000u;
                v20 = *(_BYTE *)(20 * v5 + 0x2024D68);
                v21 = 16;
              }
              *v19 = v20 | v21;
              goto def_8018D06;
            }
            if ( v2024C06 == 2 && !(v2024DB8 & 4) )
            {
              v2024DB8 = 5;
              b_push_move_exec(&gUnknown_081D9704);
              v2016003 = v5;
              goto _08019F22;
            }
def_8018D06:
            if ( v8 )
            {
_08019F7C:
              if ( v77 <= 0xB && v2024C06 != 255 )
                sub_81074C4(v5, v2024C06);
            }
            return v8;
          }
_080187DC:
          v23 = 0;
          if ( v2024A68 > 0u )
          {
            while ( 1 )
            {
              v8 = (unsigned __int8)castform_switch(v23);
              if ( v8 )
                break;
              v23 = (v23 + 1) & 0xFF;
              if ( v23 >= v2024A68 )
                goto def_8018D06;
            }
            b_push_move_exec(&gUnknown_081D977D);
            v2016003 = v23;
            v201609B = v8 - 1;
          }
          goto def_8018D06;
        }
        if ( v2024C06 != 70 )
        {
          if ( (signed int)v2024C06 <= 70 )
          {
            if ( v2024C06 != 59 )
              goto def_8018D06;
            v22 = castform_switch(v5);
            v8 = v22;
            if ( v22 )
            {
              b_push_move_exec(&gUnknown_081D977D);
              v2016003 = v5;
              v201609B = v8 - 1;
              goto def_8018D06;
            }
            return v8;
          }
          if ( v2024C06 != 77 )
          {
            if ( v2024C06 != 255 )
              goto def_8018D06;
            v17 = (unsigned __int8)weather_get_current() - 3;
            if ( v17 <= 0xA )
            {
              switch ( v17 )
              {
                case 0u:
                case 2u:
                case 0xAu:
                  if ( !(v2024DB8 & 7) )
                  {
                    v2024DB8 = 5;
                    v18 = 10;
                    goto _08018638;
                  }
                  break;
                case 5u:
                  if ( !(v2024DB8 & 0x18) )
                  {
                    v2024DB8 = 24;
                    v18 = 12;
                    goto _08018638;
                  }
                  break;
                case 9u:
                  if ( !(v2024DB8 & 0x60) )
                  {
                    v2024DB8 = 96;
                    v18 = 11;
_08018638:
                    v20160A4 = v18;
                    v2016003 = v5;
                    v8 = 1;
                  }
                  break;
                default:
                  break;
              }
            }
            if ( v8 )
            {
              v2024D23 = weather_get_current();
              b_push_move_exec(&gUnknown_081D901D);
              goto def_8018D06;
            }
            return v8;
          }
          goto _080187DC;
        }
        if ( v2024DB8 & 0x40 )
          goto def_8018D06;
        v2024DB8 = 96;
        b_push_move_exec(&gUnknown_081D97FE);
        v2016003 = v5;
      }
_08019F22:
      v8 = 1;
      goto def_8018D06;
    case 1u:
      if ( !*(_WORD *)(88 * v5 + 0x2024AA8) )
        goto def_8018D06;
      v2024C07 = v5;
      if ( v2024C06 == 44 )
      {
        if ( (unsigned __int8)sub_8018324(19, 0, 13, 0)
          || sub_8018324(19, 0, 77, 0) << 24
          || !(v2024DB8 & 7)
          || *(_WORD *)(88 * v5 + 0x2024AAC) <= (unsigned int)*(_WORD *)(88 * v5 + 0x2024AA8) )
        {
          goto def_8018D06;
        }
        v2024C06 = 44;
        b_push_move_exec(&gUnknown_081D9730);
        v2024BEC = (unsigned int)*(_WORD *)(88 * v5 + 0x2024AAC) >> 4;
        if ( !v2024BEC )
          v2024BEC = 1;
        v2024BEC = -v2024BEC;
        goto _08019F22;
      }
      if ( (signed int)v2024C06 > 44 )
      {
        if ( v2024C06 == 54 )
        {
          *(_BYTE *)(28 * v2024C07 + 0x2024CC0) = *(_BYTE *)(28 * v2024C07 + 0x2024CC0) & 0xFE | *(_BYTE *)(28 * v2024C07 + 0x2024CC0) & 1 ^ 1;
          goto def_8018D06;
        }
        if ( v2024C06 == 61
          && *(_BYTE *)(88 * v5 + 0x2024ACC)
          && !((unsigned __int16)Random(*(_BYTE *)(88 * v5 + 0x2024ACC)) % 3u & 0xFFFF) )
        {
          if ( *(_DWORD *)(88 * v5 + 0x2024ACC) & 0x88 )
            StringCopy(byte_30041C0, &gStatusConditionString_PoisonJpn);
          if ( *(_DWORD *)(88 * v5 + 0x2024ACC) & 7 )
            StringCopy(byte_30041C0, &gStatusConditionString_SleepJpn);
          if ( *(_DWORD *)(88 * v5 + 0x2024ACC) & 0x40 )
            StringCopy(byte_30041C0, &gStatusConditionString_ParalysisJpn);
          if ( *(_DWORD *)(88 * v5 + 0x2024ACC) & 0x10 )
            StringCopy(byte_30041C0, &gStatusConditionString_BurnJpn);
          if ( *(_DWORD *)(88 * v5 + 0x2024ACC) & 0x20 )
            StringCopy(byte_30041C0, &gStatusConditionString_IceJpn);
          *(_DWORD *)(88 * v5 + 0x2024ACC) = 0;
          v2024A60 = v5;
          v2016003 = v5;
          b_push_move_exec(&gUnknown_081D9758);
          dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v5 + 33704652));
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
          goto _08019F22;
        }
      }
      else if ( v2024C06 == 3
             && (signed int)*(_BYTE *)(88 * v5 + 0x2024A9B) <= 11
             && *(_BYTE *)(28 * v5 + 0x2024CBE) != 2 )
      {
        ++*(_BYTE *)(88 * v5 + 0x2024A9B);
        v20160A4 = 17;
        v20160A5 = 0;
        b_push_move_exec(&gUnknown_081D9718);
        v2016003 = v5;
        goto _08019F22;
      }
      goto def_8018D06;
    case 2u:
      if ( v2024C06 != 43 )
        goto def_8018D06;
      v24 = 0;
      if ( (unsigned __int16)gUnknown_081FA724[0] == 0xFFFF )
        goto def_8018D06;
      if ( (unsigned __int16)gUnknown_081FA724[0] == v15 )
        goto _08018A76;
      v25 = gUnknown_081FA724;
      while ( 1 )
      {
        ++v25;
        ++v24;
        v26 = (unsigned __int16)*v25;
        if ( v26 == 0xFFFF )
          goto def_8018D06;
        if ( v26 == v15 )
        {
_08018A76:
          if ( (unsigned __int16)gUnknown_081FA724[v24] == 0xFFFF )
            goto def_8018D06;
          if ( *(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0x1000 )
            v2024C6C |= 0x800u;
          v2024C10 = &gUnknown_081D98F3;
          v8 = 1;
          goto _08019F7C;
        }
      }
    case 3u:
      if ( !v15 )
        goto def_8018D06;
      if ( v2024C06 == 11 )
      {
        if ( v16 == 11 && *((_BYTE *)&gBattleMoves + 12 * v15 + 1) )
        {
          if ( *(_BYTE *)(16 * v2024C07 + 0x2024D2A) & 8 )
            v29 = &gUnknown_081D9843;
          else
            v29 = &gUnknown_081D9842;
          v2024C10 = v29;
          v8 = 1;
        }
      }
      else if ( (signed int)v2024C06 > 11 )
      {
        if ( v2024C06 == 18 && v16 == 10 && !(*(_DWORD *)(88 * v5 + 0x2024ACC) & 0x20) )
        {
          if ( *(_DWORD *)(4 * v5 + 0x2017100) & 1 )
          {
            v2024D23 = 1;
            if ( *(_BYTE *)(16 * v2024C07 + 0x2024D2A) & 8 )
              v31 = &gUnknown_081D987C;
            else
              v31 = &gUnknown_081D987B;
            v2024C10 = v31;
            v28 = 2;
            goto _08018C68;
          }
          v2024D23 = 0;
          if ( *(_BYTE *)(16 * v2024C07 + 0x2024D2A) & 8 )
            v30 = &gUnknown_081D987C;
          else
            v30 = &gUnknown_081D987B;
          v2024C10 = v30;
          *(_DWORD *)(4 * v5 + 0x2017100) |= 1u;
          v8 = 2;
        }
      }
      else if ( v2024C06 == 10 && v16 == 13 && *((_BYTE *)&gBattleMoves + 12 * v15 + 1) )
      {
        if ( *(_BYTE *)(16 * v2024C07 + 0x2024D2A) & 8 )
          v27 = &gUnknown_081D9843;
        else
          v27 = &gUnknown_081D9842;
        v2024C10 = v27;
        v28 = 1;
_08018C68:
        v8 = v28;
        goto _08018C6A;
      }
_08018C6A:
      if ( v8 == 1 )
      {
        if ( *(_WORD *)(88 * v5 + 0x2024AAC) == *(_WORD *)(88 * v5 + 0x2024AA8) )
        {
          if ( *(_BYTE *)(16 * v2024C07 + 0x2024D2A) & 8 )
            v2024C10 = &gUnknown_081D9866;
          else
            v2024C10 = &gUnknown_081D9865;
        }
        else
        {
          v2024BEC = (unsigned int)*(_WORD *)(88 * v5 + 0x2024AAC) >> 2;
          if ( !v2024BEC )
            v2024BEC = 1;
          v2024BEC = -v2024BEC;
        }
      }
      goto def_8018D06;
    case 4u:
      if ( (unsigned int)v2024C06 - 9 <= 0x2F )
      {
        switch ( v2024C06 )
        {
          case 0x10u:
            if ( !(v2024C68 & 0x29)
              && v15 != 165
              && *((_BYTE *)&gBattleMoves + 12 * v15 + 1)
              && (*(_DWORD *)(20 * v2024C08 + 0x2024D70) || *(_DWORD *)(20 * v2024C08 + 0x2024D74))
              && *(_BYTE *)(88 * v5 + 0x2024AA1) != v16
              && *(_BYTE *)(88 * v5 + 0x2024AA2) != v16
              && *(_WORD *)(88 * v5 + 0x2024AA8) )
            {
              *(_BYTE *)(88 * v5 + 0x2024AA1) = v16;
              *(_BYTE *)(88 * v5 + 0x2024AA2) = v16;
              byte_30041C0[0] = -3;
              byte_30041C1 = 3;
              byte_30041C2 = v16;
              byte_30041C3 = -1;
              b_movescr_stack_push_cursor();
              v2024C10 = &gUnknown_081D9921;
              goto _08019F22;
            }
            break;
          case 0x18u:
            if ( !(v2024C68 & 0x29)
              && *(_WORD *)(88 * v2024C07 + 0x2024AA8)
              && !(*(_BYTE *)(16 * v2024C07 + 0x2024D29) << 31)
              && (*(_DWORD *)(20 * v2024C08 + 0x2024D70) || *(_DWORD *)(20 * v2024C08 + 0x2024D74))
              && *((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1 )
            {
              v2024BEC = (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AAC) >> 4;
              if ( !v2024BEC )
                v2024BEC = 1;
              b_movescr_stack_push_cursor();
              v2024C10 = &gUnknown_081D9928;
              goto _08019F22;
            }
            break;
          case 0x1Bu:
            if ( !(v2024C68 & 0x29)
              && *(_WORD *)(88 * v2024C07 + 0x2024AA8)
              && !(*(_BYTE *)(16 * v2024C07 + 0x2024D29) << 31)
              && (*(_DWORD *)(20 * v2024C08 + 0x2024D70) || *(_DWORD *)(20 * v2024C08 + 0x2024D74)) )
            {
              if ( *((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1 )
              {
                v32 = (unsigned __int16)Random(*((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1) % 0xAu << 16;
                if ( !v32 )
                {
                  do
                  {
                    v32 = Random(v32) & 3;
                    v2024D21 = v32;
                  }
                  while ( !v32 );
                  if ( v2024D21 == 3 )
                    v2024D21 = 5;
                  v2024D21 += 64;
                  b_movescr_stack_push_cursor();
                  v2024C10 = &gUnknown_081D9950;
                  v2024C6C |= 0x2000u;
                  goto _08019F22;
                }
              }
            }
            break;
          case 0x26u:
            if ( !(v2024C68 & 0x29)
              && *(_WORD *)(88 * v2024C07 + 0x2024AA8)
              && !(*(_BYTE *)(16 * v2024C07 + 0x2024D29) << 31)
              && (*(_DWORD *)(20 * v2024C08 + 0x2024D70) || *(_DWORD *)(20 * v2024C08 + 0x2024D74))
              && *((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1
              && !((unsigned __int16)Random(*((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1) % 3u << 16) )
            {
              v2024D21 = 66;
              b_movescr_stack_push_cursor();
              v2024C10 = &gUnknown_081D9950;
              v2024C6C |= 0x2000u;
              goto _08019F22;
            }
            break;
          case 9u:
            if ( !(v2024C68 & 0x29)
              && *(_WORD *)(88 * v2024C07 + 0x2024AA8)
              && !(*(_BYTE *)(16 * v2024C07 + 0x2024D29) << 31)
              && (*(_DWORD *)(20 * v2024C08 + 0x2024D70) || *(_DWORD *)(20 * v2024C08 + 0x2024D74))
              && *((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1
              && !((unsigned __int16)Random(*((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1) % 3u << 16) )
            {
              v2024D21 = 69;
              b_movescr_stack_push_cursor();
              v2024C10 = &gUnknown_081D9950;
              v2024C6C |= 0x2000u;
              goto _08019F22;
            }
            break;
          case 0x31u:
            if ( !(v2024C68 & 0x29) )
            {
              if ( *(_WORD *)(88 * v2024C07 + 0x2024AA8) )
              {
                if ( !(*(_BYTE *)(16 * v2024C07 + 0x2024D29) << 31) )
                {
                  if ( *((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1 )
                  {
                    v33 = *(_DWORD *)(20 * v2024C08 + 0x2024D70);
                    if ( v33 || (v33 = *(_DWORD *)(20 * v2024C08 + 0x2024D74)) != 0 )
                    {
                      if ( !((unsigned __int16)Random(v33) % 3u << 16) )
                      {
                        v2024D21 = 67;
                        b_movescr_stack_push_cursor();
                        v2024C10 = &gUnknown_081D9950;
                        v2024C6C |= 0x2000u;
                        goto _08019F22;
                      }
                    }
                  }
                }
              }
            }
            break;
          case 0x38u:
            if ( !(v2024C68 & 0x29)
              && *(_WORD *)(88 * v2024C07 + 0x2024AA8)
              && !(*(_BYTE *)(16 * v2024C07 + 0x2024D29) << 31)
              && *((_BYTE *)&gBattleMoves + 12 * v15 + 8) & 1
              && (*(_DWORD *)(20 * v2024C08 + 0x2024D70) || *(_DWORD *)(20 * v2024C08 + 0x2024D74)) )
            {
              if ( *(_WORD *)(88 * v2024C08 + 0x2024AA8) )
              {
                if ( !((unsigned __int16)Random(*(_WORD *)(88 * v2024C08 + 0x2024AA8)) % 3u << 16)
                  && *(_BYTE *)(88 * v2024C07 + 0x2024AA0) != 12 )
                {
                  v34 = GetGenderFromSpeciesAndPersonality(v78, v80);
                  if ( v34 << 24 != GetGenderFromSpeciesAndPersonality(v79, v81) << 24
                    && !(*(_DWORD *)(88 * v2024C07 + 0x2024AD0) & 0xF0000)
                    && (GetGenderFromSpeciesAndPersonality(v78, v80) & 0xFF) != 255
                    && (GetGenderFromSpeciesAndPersonality(v79, v81) & 0xFF) != 255 )
                  {
                    *(_DWORD *)(88 * v2024C07 + 0x2024AD0) |= gBitTable[v2024C08] << 16;
                    b_movescr_stack_push_cursor();
                    v2024C10 = &gUnknown_081D9943;
                    goto _08019F22;
                  }
                }
              }
            }
            break;
          default:
            goto def_8018D06;
        }
      }
      goto def_8018D06;
    case 5u:
      v5 = 0;
      if ( v2024A68 <= 0u )
        goto def_8018D06;
      while ( 1 )
      {
        if ( (unsigned int)*(_BYTE *)(88 * v5 + 0x2024AA0) - 7 <= 0x41 )
        {
          switch ( *(_BYTE *)(88 * v5 + 0x2024AA0) )
          {
            case 0x11:
              if ( !(*(_DWORD *)(88 * v5 + 0x2024ACC) & 0xF88) )
                break;
              v35 = byte_30041C0;
              v36 = &gStatusConditionString_PoisonJpn;
              goto _0801969C;
            case 0x14:
              if ( !(*(_DWORD *)(88 * v5 + 0x2024AD0) & 7) )
                break;
              StringCopy(byte_30041C0, &gStatusConditionString_ConfusionJpn);
              v8 = 2;
              goto _080196DC;
            case 7:
              if ( !(*(_DWORD *)(88 * v5 + 0x2024ACC) & 0x40) )
                break;
              v35 = byte_30041C0;
              v36 = &gStatusConditionString_ParalysisJpn;
              goto _0801969C;
            case 0xF:
            case 0x48:
              if ( !(*(_DWORD *)(88 * v5 + 0x2024ACC) & 7) )
                break;
              *(_DWORD *)(88 * v5 + 0x2024AD0) &= 0xF7FFFFFF;
              StringCopy(byte_30041C0, &gStatusConditionString_SleepJpn);
              v8 = 1;
              goto _080196DC;
            case 0x29:
              if ( !(*(_DWORD *)(88 * v5 + 0x2024ACC) & 0x10) )
                break;
              StringCopy(byte_30041C0, &gStatusConditionString_BurnJpn);
              v8 = 1;
              goto _080196DC;
            case 0x28:
              if ( !(*(_DWORD *)(88 * v5 + 0x2024ACC) & 0x20) )
                break;
              v35 = byte_30041C0;
              v36 = &gStatusConditionString_IceJpn;
_0801969C:
              StringCopy(v35, v36);
              v8 = 1;
              goto _080196DC;
            case 0xC:
              if ( *(_DWORD *)(88 * v5 + 0x2024AD0) & 0xF0000 )
              {
                StringCopy(byte_30041C0, &gStatusConditionString_LoveJpn);
                v8 = 3;
              }
              break;
            default:
              break;
          }
        }
        if ( v8 )
          break;
        v5 = (v5 + 1) & 0xFF;
        if ( v5 >= v2024A68 )
          goto def_8018D06;
      }
_080196DC:
      if ( v8 == 2 )
      {
        v37 = (int *)(88 * v5 + 33704656);
        v39 = *(_DWORD *)(88 * v5 + 0x2024AD0);
        v40 = -8;
_08019738:
        v38 = v39 & v40;
        goto _0801973A;
      }
      if ( v8 > 2 )
      {
        if ( v8 != 3 )
          goto _0801973C;
        v37 = (int *)(88 * v5 + 33704656);
        v39 = *(_DWORD *)(88 * v5 + 0x2024AD0);
        v40 = -983041;
        goto _08019738;
      }
      if ( v8 != 1 )
        goto _0801973C;
      v37 = (int *)(88 * v5 + 33704652);
      v38 = 0;
_0801973A:
      *v37 = v38;
_0801973C:
      b_movescr_stack_push_cursor();
      v2024C10 = &gUnknown_081D9956;
      v2016003 = v5;
      v2024A60 = v5;
      dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * (unsigned __int8)v5 + 33704652));
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      return v8;
    case 6u:
      v5 = 0;
      if ( v2024A68 <= 0u )
        goto def_8018D06;
      while ( 1 )
      {
        if ( *(_BYTE *)(88 * v5 + 0x2024AA0) == 59 )
        {
          v8 = (unsigned __int8)castform_switch(v5);
          if ( v8 )
            break;
        }
        v5 = (v5 + 1) & 0xFF;
        if ( v5 >= v2024A68 )
          goto def_8018D06;
      }
      b_push_move_exec(&gUnknown_081D977D);
      v2016003 = v5;
      v201609B = v8 - 1;
      return v8;
    case 7u:
      if ( v2024C06 != 28 || !(v2024C6C & 0x4000) )
        goto def_8018D06;
      v2024C6C &= 0xFFFFBFFF;
      v20160CA &= 0x3Fu;
      if ( v20160CA == 6 )
        v20160CA = 2;
      v2024D21 = v20160CA + 64;
      v2016003 = v2024C08;
      b_movescr_stack_push_cursor();
      v2024C10 = &gUnknown_081D9953;
      v2024C6C |= 0x2000u;
      goto _08019F22;
    case 8u:
      if ( v2024C06 != 28 || !(v2024C6C & 0x4000) )
        goto def_8018D06;
      v2024C6C &= 0xFFFFBFFF;
      v20160CA &= 0x3Fu;
      if ( v20160CA == 6 )
        v20160CA = 2;
      v2024D21 = v20160CA;
      v2016003 = v2024C07;
      b_movescr_stack_push_cursor();
      v2024C10 = &gUnknown_081D9953;
      v2024C6C |= 0x2000u;
      goto _08019F22;
    case 9u:
      v41 = 0;
      if ( (signed int)v2024A68 <= 0 )
        goto def_8018D06;
      v42 = (_DWORD *)33705112;
      v43 = (_BYTE *)33704608;
      while ( *v43 != 22 || !(*v42 & 0x80000) )
      {
        ++v42;
        v43 += 88;
        if ( ++v41 >= v2024A68 )
          goto def_8018D06;
      }
      v2024C06 = 22;
      *v42 &= 0xFFF7FFFF;
      b_push_move_exec(&gUnknown_081D978C);
      goto _08019F1A;
    case 0xBu:
      v44 = 0;
      if ( (signed int)v2024A68 <= 0 )
        goto def_8018D06;
      v82 = (_BYTE *)33704608;
      v83 = 0;
      while ( 2 )
      {
        if ( *v82 != 36 || !(*(_DWORD *)(v83 + 33705112) & 0x100000) )
          goto _08019AF6;
        v45 = (battle_get_per_side_status((unsigned __int8)v44) ^ 1) & 1;
        v46 = (unsigned __int8)battle_get_side_with_given_state(v45);
        v47 = (unsigned __int8)battle_get_side_with_given_state(v45 + 2);
        if ( v20239F8 & 1 )
        {
          if ( *(_BYTE *)(88 * v46 + 0x2024AA0) )
          {
            if ( *(_WORD *)(88 * v46 + 0x2024AA8)
              && *(_BYTE *)(88 * v47 + 0x2024AA0)
              && *(_WORD *)(88 * v47 + 0x2024AA8) )
            {
              v48 = Random(*(_WORD *)(88 * v47 + 0x2024AA8));
              v2024A60 = battle_get_side_with_given_state(v45 | 2 * (v48 & 1));
              *v82 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
              v2024C06 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
_08019AE4:
              v8 = (v8 + 1) & 0xFF;
              goto _08019AEE;
            }
            if ( *(_BYTE *)(88 * v46 + 0x2024AA0) && *(_WORD *)(88 * v46 + 0x2024AA8) )
            {
              v2024A60 = v46;
              *(_BYTE *)(88 * v44 + 0x2024AA0) = *(_BYTE *)(88 * (unsigned __int8)v46 + 0x2024AA0);
              v49 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
_08019AE0:
              v2024C06 = v49;
              goto _08019AE4;
            }
          }
          if ( *(_BYTE *)(88 * v47 + 0x2024AA0) && *(_WORD *)(88 * v47 + 0x2024AA8) )
          {
            v2024A60 = v47;
            *(_BYTE *)(88 * v44 + 0x2024AA0) = *(_BYTE *)(88 * (unsigned __int8)v47 + 0x2024AA0);
            v49 = *(_BYTE *)(88 * v2024A60 + 0x2024AA0);
            goto _08019AE0;
          }
        }
        else
        {
          v2024A60 = v46;
          if ( *(_BYTE *)(88 * v46 + 0x2024AA0) && *(_WORD *)(88 * v46 + 0x2024AA8) )
          {
            *v82 = *(_BYTE *)(88 * v46 + 0x2024AA0);
            v49 = *(_BYTE *)(88 * v46 + 0x2024AA0);
            goto _08019AE0;
          }
        }
_08019AEE:
        if ( !v8 )
        {
_08019AF6:
          v82 += 88;
          v83 += 4;
          if ( ++v44 >= v2024A68 )
            goto def_8018D06;
          continue;
        }
        break;
      }
      b_push_move_exec(&gUnknown_081D9726);
      *(_DWORD *)(v83 + 33705112) &= 0xFFEFFFFF;
      v2016003 = v44;
      byte_30041C0[0] = -3;
      byte_30041C1 = 4;
      byte_30041C2 = v2024A60;
      byte_30041C3 = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
      byte_30041C4 = -1;
      byte_3004290[0] = -3;
      byte_3004291 = 9;
      byte_3004292 = v2024C06;
      byte_3004293 = -1;
      goto def_8018D06;
    case 0xAu:
      v41 = 0;
      if ( (signed int)v2024A68 <= 0 )
        goto def_8018D06;
      v50 = (_DWORD *)33705112;
      v51 = (_BYTE *)33704608;
      while ( *v51 != 22 || !(*v50 & 0x80000) )
      {
        ++v50;
        v51 += 88;
        if ( ++v41 >= v2024A68 )
          goto def_8018D06;
      }
      v2024C06 = 22;
      *v50 &= 0xFFF7FFFF;
      b_movescr_stack_push_cursor();
      v2024C10 = &gUnknown_081D9795;
_08019F1A:
      v20160DD = v41;
      goto _08019F22;
    case 0xCu:
      v52 = (unsigned __int8)battle_side_get_owner(v5);
      v53 = 0;
      if ( (signed int)v2024A68 > 0 )
      {
        do
        {
          v54 = battle_side_get_owner((unsigned __int8)v53);
          v55 = v53 + 1;
          if ( v54 != v52 && *(_BYTE *)(88 * v53 + 0x2024AA0) == v6 )
          {
            v2024C06 = v6;
            v8 = (unsigned __int8)v55;
          }
          ++v53;
        }
        while ( v55 < v2024A68 );
      }
      goto def_8018D06;
    case 0xDu:
      v56 = (unsigned __int8)battle_side_get_owner(v5);
      v57 = 0;
      if ( (signed int)v2024A68 > 0 )
      {
        do
        {
          v58 = battle_side_get_owner((unsigned __int8)v57);
          v59 = v57 + 1;
          if ( v58 == v56 && *(_BYTE *)(88 * v57 + 0x2024AA0) == v6 )
          {
            v2024C06 = v6;
            v8 = (unsigned __int8)v59;
          }
          ++v57;
        }
        while ( v59 < v2024A68 );
      }
      goto def_8018D06;
    case 0xEu:
      if ( v2024C06 == 253 )
      {
        v61 = 0;
        if ( (signed int)v2024A68 > 0 )
        {
          do
          {
            v62 = v61 + 1;
            if ( *(_DWORD *)(4 * v61 + 0x2024C98) & 0x10000 )
              v8 = (unsigned __int8)v62;
            ++v61;
          }
          while ( v62 < v2024A68 );
        }
      }
      else if ( v2024C06 == 254 )
      {
        v63 = 0;
        if ( (signed int)v2024A68 > 0 )
        {
          do
          {
            v64 = v63 + 1;
            if ( *(_DWORD *)(4 * v63 + 0x2024C98) & 0x20000 )
              v8 = (unsigned __int8)v64;
            ++v63;
          }
          while ( v64 < v2024A68 );
        }
      }
      else
      {
        v60 = 0;
        if ( (signed int)v2024A68 > 0 )
        {
          do
          {
            v65 = v60 + 1;
            if ( *(_BYTE *)(88 * v60 + 0x2024AA0) == v6 )
            {
              v2024C06 = v6;
              v8 = (unsigned __int8)v65;
            }
            ++v60;
          }
          while ( v65 < v2024A68 );
        }
      }
      goto def_8018D06;
    case 0x13u:
      v66 = 0;
      if ( (signed int)v2024A68 > 0 )
      {
        do
        {
          v67 = v66 + 1;
          if ( *(_BYTE *)(88 * v66 + 0x2024AA0) == v6 && *(_WORD *)(88 * v66 + 0x2024AA8) )
          {
            v2024C06 = v6;
            v8 = (unsigned __int8)v67;
          }
          ++v66;
        }
        while ( v67 < v2024A68 );
      }
      goto def_8018D06;
    case 0xFu:
      v68 = 0;
      if ( (signed int)v2024A68 > 0 )
      {
        do
        {
          v69 = v68 + 1;
          if ( *(_BYTE *)(88 * v68 + 0x2024AA0) == v6 && v68 != v5 )
          {
            v2024C06 = v6;
            v8 = (unsigned __int8)v69;
          }
          ++v68;
        }
        while ( v69 < v2024A68 );
      }
      goto def_8018D06;
    case 0x10u:
      v70 = (unsigned __int8)battle_side_get_owner(v5);
      for ( i = 0; i < v2024A68; ++i )
      {
        if ( (unsigned __int8)battle_side_get_owner((unsigned __int8)i) != v70 && *(_BYTE *)(88 * i + 0x2024AA0) == v6 )
        {
          v2024C06 = v6;
          v8 = (v8 + 1) & 0xFF;
        }
      }
      goto def_8018D06;
    case 0x11u:
      v72 = (unsigned __int8)battle_side_get_owner(v5);
      for ( j = 0; j < v2024A68; ++j )
      {
        if ( (unsigned __int8)battle_side_get_owner((unsigned __int8)j) == v72 && *(_BYTE *)(88 * j + 0x2024AA0) == v6 )
        {
          v2024C06 = v6;
          v8 = (v8 + 1) & 0xFF;
        }
      }
      goto def_8018D06;
    case 0x12u:
      v74 = 0;
      if ( (signed int)v2024A68 > 0 )
      {
        v75 = (_BYTE *)33704608;
        do
        {
          if ( *v75 == v6 && v74 != v5 )
          {
            v2024C06 = v6;
            v8 = (v8 + 1) & 0xFF;
          }
          v75 += 88;
          ++v74;
        }
        while ( v74 < v2024A68 );
      }
      goto def_8018D06;
    default:
      goto def_8018D06;
  }
}
