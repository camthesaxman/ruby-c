int __fastcall sub_801A02C(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  int v3; // r7@1
  int v4; // r6@1
  signed int v5; // r10@1
  int v6; // r5@2
  signed int v7; // r0@2
  signed int v8; // r9@4
  int v9; // r8@5
  int v10; // r0@5
  int v11; // r4@7
  _BYTE *v12; // r1@14
  signed int v13; // r10@14
  int v14; // r3@25
  int v15; // r1@25
  int v16; // r1@30
  char *v17; // r0@30
  int v18; // r4@32
  int v19; // r6@33
  int v20; // r1@33
  unsigned __int8 v21; // r0@37
  _BYTE *v22; // r1@41
  signed int v23; // r10@41
  int v24; // r2@51
  int v25; // r1@51
  int v26; // r2@58
  int v27; // r1@58
  int v28; // r0@60
  signed int v29; // r1@60
  int v30; // r2@67
  int v31; // r1@67
  int v32; // r2@75
  int v33; // r1@75
  int v34; // r2@82
  int v35; // r1@82
  int v36; // r2@92
  int v37; // r1@92
  char v38; // r0@101
  _BYTE *v39; // r1@126
  int v40; // r0@130
  unsigned int v41; // r0@131
  void *v42; // r0@140
  int v43; // r0@167
  unsigned int v44; // r7@171
  int v45; // r5@173
  int v46; // r1@177
  int v47; // r1@179
  int v48; // r1@181
  int v49; // r1@183
  void *v50; // r0@184
  int v51; // r1@185
  int v52; // r1@187
  int v53; // r1@189
  _BYTE *v54; // r1@207
  signed int v55; // r10@207
  int v56; // r0@223
  int v57; // r1@230
  int v58; // r0@235
  unsigned __int8 v60; // [sp+4h] [bp-48h]@1
  unsigned int v61; // [sp+8h] [bp-44h]@1
  int v62; // [sp+Ch] [bp-40h]@1
  int v63; // [sp+10h] [bp-3Ch]@7
  int v64; // [sp+14h] [bp-38h]@4
  int v65; // [sp+18h] [bp-34h]@54
  int v66; // [sp+1Ch] [bp-30h]@63
  int v67; // [sp+20h] [bp-2Ch]@71
  int v68; // [sp+24h] [bp-28h]@78
  int v69; // [sp+28h] [bp-24h]@88

  v61 = a1;
  v3 = a2;
  v4 = a3;
  v5 = 0;
  v62 = 0;
  v60 = 0;
  v2024C04 = *(_WORD *)(88 * a2 + 0x2024AAE);
  if ( v2024C04 == 175 )
  {
    v6 = *(_BYTE *)(28 * a2 + 0x2024DF7);
    v7 = *(_BYTE *)(28 * a2 + 0x2024E0A);
  }
  else
  {
    v6 = (unsigned __int8)itemid_get_x12(v2024C04);
    v7 = (unsigned __int8)itemid_get_quality(v2024C04);
  }
  v8 = v7;
  v64 = *(_WORD *)(88 * v2024C07 + 0x2024AAE);
  if ( v64 == 175 )
  {
    v9 = *(_BYTE *)(28 * v2024C07 + 0x2024DF7);
    v10 = *(_BYTE *)(28 * v2024C07 + 0x2024E0A);
  }
  else
  {
    v9 = (unsigned __int8)itemid_get_x12(v64);
    v10 = (unsigned __int8)itemid_get_quality(v64);
  }
  v63 = v10;
  v11 = *(_WORD *)(88 * v2024C08 + 0x2024AAE);
  if ( v11 != 175 )
  {
    itemid_get_x12(*(_WORD *)(88 * v2024C08 + 0x2024AAE));
    itemid_get_quality(v11);
  }
  if ( v61 <= 4 )
  {
    switch ( v61 )
    {
      case 0u:
        if ( v6 == 23 )
        {
          v12 = (_BYTE *)(88 * v3 + 33704600);
          v13 = 7;
          do
          {
            if ( (signed int)*v12 <= 5 )
            {
              *v12 = 6;
              v62 = 5;
            }
            ++v12;
            --v13;
          }
          while ( v13 >= 0 );
          if ( v62 )
          {
            v2016003 = v3;
            v2024C0B = v3;
            v2024C07 = v3;
            v2024A60 = v3;
            b_call_bc_move_exec((int)&gUnknown_081D9A5E);
          }
        }
        else if ( v6 == 32 )
        {
          v2016056 = 2;
        }
        break;
      case 1u:
        if ( *(_WORD *)(88 * v3 + 0x2024AA8) )
        {
          if ( (unsigned int)(v6 - 1) <= 0x2A )
          {
            switch ( v6 )
            {
              case 0:
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > (unsigned int)*(_WORD *)(88 * v3 + 0x2024AAC) >> 1 || v4 )
                  break;
                v2024BEC = v8;
                v14 = *(_WORD *)(88 * v3 + 0x2024AA8);
                v15 = *(_WORD *)(88 * v3 + 0x2024AAC);
                if ( v14 + v8 > v15 )
                  v2024BEC = v15 - v14;
                v2024BEC = -v2024BEC;
                b_call_bc_move_exec((int)&gUnknown_081D9A74);
                goto _0801A752;
              case 6:
                if ( v4 )
                  break;
                if ( battle_side_get_owner(v3) << 24 )
                {
                  v16 = 100 * *(_WORD *)(2 * v3 + 0x2024A6A);
                  v17 = (char *)&unk_30045C0;
                }
                else
                {
                  v16 = 100 * *(_WORD *)(2 * v3 + 0x2024A6A);
                  v17 = (char *)&unk_3004360;
                }
                v18 = (int)&v17[v16];
                v5 = 0;
                do
                {
                  v19 = (unsigned __int16)GetMonData(v18, v5 + 13);
                  v60 = GetMonData(v18, v5 + 17);
                  v20 = (unsigned __int8)GetMonData(v18, 21);
                  if ( v19 && !v60 )
                    break;
                  ++v5;
                }
                while ( v5 <= 3 );
                if ( v5 == 4 )
                  break;
                v21 = CalcPPWithPPUps(v19, v20, (unsigned __int8)v5);
                if ( v60 + v8 <= v21 )
                  v60 += v8;
                else
                  v60 = v21;
                byte_30041C0[0] = -3;
                byte_30041C1 = 2;
                word_30041C2 = v19;
                byte_30041C4 = -1;
                b_call_bc_move_exec((int)&gUnknown_081D9A91);
                dp01_build_cmdbuf_x02_a_b_varargs(0, v5 + 9, 0, 1u, (char *)&v60);
                dp01_battle_side_mark_buffer_for_execution(v2024A60);
                v62 = 3;
                goto _0801AD62;
              case 22:
                v22 = (_BYTE *)(88 * v3 + 33704600);
                v23 = 7;
                do
                {
                  if ( (signed int)*v22 <= 5 )
                  {
                    *v22 = 6;
                    v62 = 5;
                  }
                  ++v22;
                  --v23;
                }
                while ( v23 >= 0 );
                v5 = 8;
                if ( !v62 )
                  return v62;
                v2016003 = v3;
                v2024C0B = v3;
                v2024C07 = v3;
                v2024A60 = v3;
                b_call_bc_move_exec((int)&gUnknown_081D9A5E);
                break;
              case 42:
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) < (unsigned int)*(_WORD *)(88 * v3 + 0x2024AAC) && !v4 )
                {
                  v2024BEC = (unsigned int)*(_WORD *)(88 * v3 + 0x2024AAC) >> 4;
                  if ( !v2024BEC )
                    v2024BEC = 1;
                  v24 = *(_WORD *)(88 * v3 + 0x2024AA8);
                  v25 = *(_WORD *)(88 * v3 + 0x2024AAC);
                  if ( v24 + v2024BEC > v25 )
                    v2024BEC = v25 - v24;
                  v2024BEC = -v2024BEC;
                  b_call_bc_move_exec((int)&gUnknown_081D9AA1);
                  v62 = 4;
                  sub_81074F8(v3, v6);
                }
                break;
              case 9:
                v65 = 88 * v3;
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > (unsigned int)*(_WORD *)(88 * v3 + 0x2024AAC) >> 1 || v4 )
                  break;
                byte_30041C0[0] = -3;
                byte_30041C1 = 8;
                word_30041C2 = -256;
                v2024BEC = *(_WORD *)(88 * v3 + 0x2024AAC) / v8;
                if ( !v2024BEC )
                  v2024BEC = 1;
                v26 = *(_WORD *)(88 * v3 + 0x2024AA8);
                v27 = *(_WORD *)(88 * v3 + 0x2024AAC);
                if ( v26 + v2024BEC > v27 )
                  v2024BEC = v27 - v26;
                v2024BEC = -v2024BEC;
                v28 = *(_DWORD *)(v65 + 33704648);
                v29 = 0;
                goto _0801A532;
              case 10:
                v66 = 88 * v3;
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > (unsigned int)*(_WORD *)(88 * v3 + 0x2024AAC) >> 1 || v4 )
                  break;
                byte_30041C0[0] = -3;
                byte_30041C1 = 8;
                word_30041C2 = -255;
                v2024BEC = *(_WORD *)(88 * v3 + 0x2024AAC) / v8;
                if ( !v2024BEC )
                  v2024BEC = 1;
                v30 = *(_WORD *)(88 * v3 + 0x2024AA8);
                v31 = *(_WORD *)(88 * v3 + 0x2024AAC);
                if ( v30 + v2024BEC > v31 )
                  v2024BEC = v31 - v30;
                v2024BEC = -v2024BEC;
                if ( !(sub_8040A7C(*(_DWORD *)(v66 + 33704648), 1) & 0x80) )
                  goto _0801A6B8;
                goto _0801A6A4;
              case 11:
                v67 = 88 * v3;
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > (unsigned int)*(_WORD *)(88 * v3 + 0x2024AAC) >> 1 || v4 )
                  break;
                byte_30041C0[0] = -3;
                byte_30041C1 = 8;
                word_30041C2 = -254;
                v2024BEC = *(_WORD *)(88 * v3 + 0x2024AAC) / v8;
                if ( !v2024BEC )
                  v2024BEC = 1;
                v32 = *(_WORD *)(88 * v3 + 0x2024AA8);
                v33 = *(_WORD *)(88 * v3 + 0x2024AAC);
                if ( v32 + v2024BEC > v33 )
                  v2024BEC = v33 - v32;
                v2024BEC = -v2024BEC;
                v28 = *(_DWORD *)(v67 + 33704648);
                v29 = 2;
_0801A532:
                if ( !(sub_8040A7C(v28, v29) & 0x80) )
                  goto _0801A74C;
                goto _0801A738;
              case 12:
                v68 = 88 * v3;
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > (unsigned int)*(_WORD *)(88 * v3 + 0x2024AAC) >> 1 || v4 )
                  break;
                byte_30041C0[0] = -3;
                byte_30041C1 = 8;
                word_30041C2 = -253;
                v2024BEC = *(_WORD *)(88 * v3 + 0x2024AAC) / v8;
                if ( !v2024BEC )
                  v2024BEC = 1;
                v34 = *(_WORD *)(88 * v3 + 0x2024AA8);
                v35 = *(_WORD *)(88 * v3 + 0x2024AAC);
                if ( v34 + v2024BEC > v35 )
                  v2024BEC = v35 - v34;
                v2024BEC = -v2024BEC;
                if ( sub_8040A7C(*(_DWORD *)(v68 + 33704648), 3) & 0x80 )
_0801A6A4:
                  b_call_bc_move_exec((int)&gUnknown_081D9AD4);
                else
_0801A6B8:
                  b_call_bc_move_exec((int)&gUnknown_081D9A74);
                v62 = 4;
                goto _0801AD62;
              case 13:
                v69 = 88 * v3;
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > (unsigned int)*(_WORD *)(88 * v3 + 0x2024AAC) >> 1 || v4 )
                  break;
                byte_30041C0[0] = -3;
                byte_30041C1 = 8;
                word_30041C2 = -252;
                v2024BEC = *(_WORD *)(88 * v3 + 0x2024AAC) / v8;
                if ( !v2024BEC )
                  v2024BEC = 1;
                v36 = *(_WORD *)(88 * v3 + 0x2024AA8);
                v37 = *(_WORD *)(88 * v3 + 0x2024AAC);
                if ( v36 + v2024BEC > v37 )
                  v2024BEC = v37 - v36;
                v2024BEC = -v2024BEC;
                if ( sub_8040A7C(*(_DWORD *)(v69 + 33704648), 4) & 0x80 )
_0801A738:
                  b_call_bc_move_exec((int)&gUnknown_081D9AD4);
                else
_0801A74C:
                  b_call_bc_move_exec((int)&gUnknown_081D9A74);
_0801A752:
                v62 = 4;
                goto _0801AD62;
              case 14:
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > *(_WORD *)(88 * v3 + 0x2024AAC) / v8
                  || v4
                  || (signed int)*(_BYTE *)(88 * v3 + 0x2024A99) > 11 )
                {
                  break;
                }
                byte_30041C0[0] = -3;
                byte_30041C1 = 5;
                LOBYTE(word_30041C2) = 1;
                HIBYTE(word_30041C2) = -1;
                byte_3004290[0] = -3;
                byte_3004291 = 0;
                byte_3004292 = -46;
                byte_3004293 = 0;
                byte_3004294 = -1;
                v2024C0A = v3;
                v201601E = 17;
                v38 = 15;
                goto _0801A94C;
              case 15:
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > *(_WORD *)(88 * v3 + 0x2024AAC) / v8
                  || v4
                  || (signed int)*(_BYTE *)(88 * v3 + 0x2024A9A) > 11 )
                {
                  break;
                }
                byte_30041C0[0] = -3;
                byte_30041C1 = 5;
                LOBYTE(word_30041C2) = 2;
                HIBYTE(word_30041C2) = -1;
                v2024C0A = v3;
                v201601E = 18;
                v38 = 16;
                goto _0801A94C;
              case 16:
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > *(_WORD *)(88 * v3 + 0x2024AAC) / v8
                  || v4
                  || (signed int)*(_BYTE *)(88 * v3 + 0x2024A9B) > 11 )
                {
                  break;
                }
                byte_30041C0[0] = -3;
                byte_30041C1 = 5;
                LOBYTE(word_30041C2) = 3;
                HIBYTE(word_30041C2) = -1;
                v2024C0A = v3;
                v201601E = 19;
                v38 = 17;
                goto _0801A94C;
              case 17:
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > *(_WORD *)(88 * v3 + 0x2024AAC) / v8
                  || v4
                  || (signed int)*(_BYTE *)(88 * v3 + 0x2024A9C) > 11 )
                {
                  break;
                }
                byte_30041C0[0] = -3;
                byte_30041C1 = 5;
                LOBYTE(word_30041C2) = 4;
                HIBYTE(word_30041C2) = -1;
                v2024C0A = v3;
                v201601E = 20;
                v38 = 18;
                goto _0801A94C;
              case 18:
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > *(_WORD *)(88 * v3 + 0x2024AAC) / v8
                  || v4
                  || (signed int)*(_BYTE *)(88 * v3 + 0x2024A9D) > 11 )
                {
                  break;
                }
                byte_30041C0[0] = -3;
                byte_30041C1 = 5;
                LOBYTE(word_30041C2) = 5;
                HIBYTE(word_30041C2) = -1;
                v2024C0A = v3;
                v201601E = 21;
                v38 = 19;
_0801A94C:
                v20160A4 = v38;
                v20160A5 = v4;
                b_call_bc_move_exec((int)&gUnknown_081D9AFE);
                v62 = 5;
                goto _0801AD62;
              case 19:
                if ( *(_WORD *)(88 * v3 + 0x2024AA8) > *(_WORD *)(88 * v3 + 0x2024AAC) / v8
                  || v4
                  || *(_DWORD *)(88 * v3 + 0x2024AD0) & 0x100000 )
                {
                  break;
                }
                *(_DWORD *)(88 * v3 + 0x2024AD0) |= 0x100000u;
                b_call_bc_move_exec((int)&gUnknown_081D9B19);
                v62 = 2;
                goto _0801AD62;
              case 20:
                if ( v4 || *(_WORD *)(88 * v3 + 0x2024AA8) > *(_WORD *)(88 * v3 + 0x2024AAC) / v8 )
                  break;
                v5 = 0;
                if ( (signed int)*(_BYTE *)(88 * v3 + 0x2024A99) > 11 )
                {
                  v39 = (_BYTE *)(88 * v3 + 33704601);
                  do
                  {
                    ++v39;
                    ++v5;
                  }
                  while ( v5 <= 4 && (signed int)*v39 > 11 );
                }
                if ( v5 == 5 )
                  break;
                v40 = 88 * v3;
                do
                {
                  v41 = (unsigned __int16)Random(v40) % 5u & 0xFFFF;
                  v5 = v41;
                  v40 = *(_BYTE *)(v41 + 88 * v3 + 1 + 33704600);
                }
                while ( v40 == 12 );
                byte_30041C0[0] = -3;
                byte_30041C1 = 5;
                LOBYTE(word_30041C2) = v5 + 1;
                HIBYTE(word_30041C2) = -1;
                byte_3004290[0] = -3;
                byte_3004291 = 0;
                byte_3004292 = -47;
                byte_3004293 = 0;
                byte_3004294 = 0;
                byte_3004295 = -46;
                byte_3004296 = 0;
                byte_3004297 = -1;
                v2024C0A = v3;
                v201601E = v5 + 33;
                v20160A4 = v5 + 39;
                v20160A5 = 0;
                b_call_bc_move_exec((int)&gUnknown_081D9AFE);
                v62 = 5;
                goto _0801AD62;
              case 1:
                if ( !(*(_DWORD *)(88 * v3 + 0x2024ACC) & 0x40) )
                  break;
                *(_DWORD *)(88 * v3 + 0x2024ACC) &= 0xFFFFFFBF;
                b_call_bc_move_exec((int)&gUnknown_081D99B6);
                v62 = 1;
                goto _0801AD62;
              case 3:
                if ( !(*(_DWORD *)(88 * v3 + 0x2024ACC) & 0x88) )
                  break;
                *(_DWORD *)(88 * v3 + 0x2024ACC) &= 0xFFFFF077;
                b_call_bc_move_exec((int)&gUnknown_081D99CE);
                v62 = 1;
                goto _0801AD62;
              case 4:
                if ( !(*(_DWORD *)(88 * v3 + 0x2024ACC) & 0x10) )
                  break;
                *(_DWORD *)(88 * v3 + 0x2024ACC) &= 0xFFFFFFEF;
                b_call_bc_move_exec((int)&gUnknown_081D99E6);
                v62 = 1;
                goto _0801AD62;
              case 5:
                if ( !(*(_DWORD *)(88 * v3 + 0x2024ACC) & 0x20) )
                  break;
                *(_DWORD *)(88 * v3 + 0x2024ACC) &= 0xFFFFFFDF;
                v42 = &gUnknown_081D99FE;
                goto _0801AD0E;
              case 2:
                if ( !(*(_DWORD *)(88 * v3 + 0x2024ACC) & 7) )
                  break;
                *(_DWORD *)(88 * v3 + 0x2024ACC) &= 0xFFFFFFF8;
                *(_DWORD *)(88 * v3 + 0x2024AD0) &= 0xF7FFFFFF;
                b_call_bc_move_exec((int)&gUnknown_081D9A16);
                v62 = 1;
                goto _0801AD62;
              case 7:
                if ( !(*(_DWORD *)(88 * v3 + 0x2024AD0) & 7) )
                  break;
                *(_DWORD *)(88 * v3 + 0x2024AD0) &= 0xFFFFFFF8;
                b_call_bc_move_exec((int)&gUnknown_081D9A2E);
                v62 = 2;
                goto _0801AD62;
              case 8:
                if ( !*(_BYTE *)(88 * v3 + 0x2024ACC) && !(*(_DWORD *)(88 * v3 + 0x2024AD0) & 7) )
                  break;
                v5 = 0;
                if ( *(_DWORD *)(88 * v3 + 0x2024ACC) & 0x88 )
                {
                  StringCopy(byte_30041C0, &gStatusConditionString_PoisonJpn);
                  v5 = 1;
                }
                if ( *(_DWORD *)(88 * v3 + 0x2024ACC) & 7 )
                {
                  *(_DWORD *)(88 * v3 + 0x2024AD0) &= 0xF7FFFFFF;
                  StringCopy(byte_30041C0, &gStatusConditionString_SleepJpn);
                  ++v5;
                }
                if ( *(_DWORD *)(88 * v3 + 0x2024ACC) & 0x40 )
                {
                  StringCopy(byte_30041C0, &gStatusConditionString_ParalysisJpn);
                  ++v5;
                }
                if ( *(_DWORD *)(88 * v3 + 0x2024ACC) & 0x10 )
                {
                  StringCopy(byte_30041C0, &gStatusConditionString_BurnJpn);
                  ++v5;
                }
                if ( *(_DWORD *)(88 * v3 + 0x2024ACC) & 0x20 )
                {
                  StringCopy(byte_30041C0, &gStatusConditionString_IceJpn);
                  ++v5;
                }
                if ( *(_DWORD *)(88 * v3 + 0x2024AD0) & 7 )
                {
                  StringCopy(byte_30041C0, &gStatusConditionString_ConfusionJpn);
                  ++v5;
                }
                v2024D23 = v5 > 1;
                *(_DWORD *)(88 * v3 + 0x2024ACC) = 0;
                *(_DWORD *)(88 * v3 + 0x2024AD0) &= 0xFFFFFFF8;
                v42 = &gUnknown_081D9A44;
_0801AD0E:
                b_call_bc_move_exec((int)v42);
                v62 = 1;
                goto _0801AD62;
              case 27:
                if ( *(_DWORD *)(88 * v3 + 0x2024AD0) & 0xF0000 )
                {
                  *(_DWORD *)(88 * v3 + 0x2024AD0) &= 0xFFF0FFFF;
                  StringCopy(byte_30041C0, &gStatusConditionString_LoveJpn);
                  b_call_bc_move_exec((int)&gUnknown_081D9A44);
                  v2024D23 = 0;
                  v62 = 2;
                }
                break;
              default:
                break;
            }
          }
          if ( v62 )
          {
_0801AD62:
            v2016003 = v3;
            v2024C0B = v3;
            v2024C07 = v3;
            v2024A60 = v3;
            if ( v62 == 1 )
            {
              v43 = 88 * v3;
              goto _0801B224;
            }
            if ( v62 == 3
              && !(*(_DWORD *)(88 * v3 + 0x2024AD0) & 0x200000)
              && !(((unsigned int)*(_BYTE *)(28 * v3 + 0x2024CC0) >> 4) & gBitTable[v5]) )
            {
              *(_BYTE *)(v5 + 88 * v3 + 33704612) = v60;
            }
          }
        }
        break;
      case 3u:
        v44 = 0;
        if ( v2024A68 > 0u )
        {
          while ( 1 )
          {
            v2024C04 = *(_WORD *)(88 * v44 + 0x2024AAE);
            if ( v2024C04 == 175 )
            {
              v45 = *(_BYTE *)(28 * v44 + 0x2024DF7);
            }
            else
            {
              v45 = (unsigned __int8)itemid_get_x12(v2024C04);
              itemid_get_quality(v2024C04);
            }
            if ( (unsigned int)(v45 - 2) <= 0x1A )
            {
              switch ( v45 )
              {
                case 0:
                  v46 = *(_DWORD *)(88 * v44 + 0x2024ACC);
                  if ( !(v46 & 0x40) )
                    break;
                  *(_DWORD *)(88 * v44 + 0x2024ACC) = v46 & 0xFFFFFFBF;
                  b_movescr_stack_push_cursor();
                  v2024C10 = &gUnknown_081D99BC;
                  v62 = 1;
                  goto _0801B20E;
                case 2:
                  v47 = *(_DWORD *)(88 * v44 + 0x2024ACC);
                  if ( !(v47 & 0x88) )
                    break;
                  *(_DWORD *)(88 * v44 + 0x2024ACC) = v47 & 0xFFFFF077;
                  b_movescr_stack_push_cursor();
                  v2024C10 = &gUnknown_081D99D4;
                  v62 = 1;
                  goto _0801B20E;
                case 3:
                  v48 = *(_DWORD *)(88 * v44 + 0x2024ACC);
                  if ( !(v48 & 0x10) )
                    break;
                  *(_DWORD *)(88 * v44 + 0x2024ACC) = v48 & 0xFFFFFFEF;
                  b_movescr_stack_push_cursor();
                  v2024C10 = &gUnknown_081D99EC;
                  v62 = 1;
                  goto _0801B20E;
                case 4:
                  v49 = *(_DWORD *)(88 * v44 + 0x2024ACC);
                  if ( !(v49 & 0x20) )
                    break;
                  *(_DWORD *)(88 * v44 + 0x2024ACC) = v49 & 0xFFFFFFDF;
                  b_movescr_stack_push_cursor();
                  v50 = &gUnknown_081D9A04;
                  goto _0801B168;
                case 1:
                  v51 = *(_DWORD *)(88 * v44 + 0x2024ACC);
                  if ( !(v51 & 7) )
                    break;
                  *(_DWORD *)(88 * v44 + 0x2024ACC) = v51 & 0xFFFFFFF8;
                  *(_DWORD *)(88 * v44 + 0x2024AD0) &= 0xF7FFFFFF;
                  b_movescr_stack_push_cursor();
                  v2024C10 = &gUnknown_081D9A1C;
                  v62 = 1;
                  goto _0801B20E;
                case 6:
                  v52 = *(_DWORD *)(88 * v44 + 0x2024AD0);
                  if ( !(v52 & 7) )
                    break;
                  *(_DWORD *)(88 * v44 + 0x2024AD0) = v52 & 0xFFFFFFF8;
                  b_movescr_stack_push_cursor();
                  v2024C10 = &gUnknown_081D9A34;
                  v62 = 2;
                  goto _0801B20E;
                case 26:
                  v53 = *(_DWORD *)(88 * v44 + 0x2024AD0);
                  if ( !(v53 & 0xF0000) )
                    break;
                  *(_DWORD *)(88 * v44 + 0x2024AD0) = v53 & 0xFFF0FFFF;
                  StringCopy(byte_30041C0, &gStatusConditionString_LoveJpn);
                  b_movescr_stack_push_cursor();
                  v2024D23 = 0;
                  v2024C10 = &gUnknown_081D9A4A;
                  v62 = 2;
                  goto _0801B20E;
                case 7:
                  if ( !*(_BYTE *)(88 * v44 + 0x2024ACC) && !(*(_DWORD *)(88 * v44 + 0x2024AD0) & 7) )
                    break;
                  if ( *(_DWORD *)(88 * v44 + 0x2024ACC) & 0x88 )
                    StringCopy(byte_30041C0, &gStatusConditionString_PoisonJpn);
                  if ( *(_DWORD *)(88 * v44 + 0x2024ACC) & 7 )
                  {
                    *(_DWORD *)(88 * v44 + 0x2024AD0) &= 0xF7FFFFFF;
                    StringCopy(byte_30041C0, &gStatusConditionString_SleepJpn);
                  }
                  if ( *(_DWORD *)(88 * v44 + 0x2024ACC) & 0x40 )
                    StringCopy(byte_30041C0, &gStatusConditionString_ParalysisJpn);
                  if ( *(_DWORD *)(88 * v44 + 0x2024ACC) & 0x10 )
                    StringCopy(byte_30041C0, &gStatusConditionString_BurnJpn);
                  if ( *(_DWORD *)(88 * v44 + 0x2024ACC) & 0x20 )
                    StringCopy(byte_30041C0, &gStatusConditionString_IceJpn);
                  if ( *(_DWORD *)(88 * v44 + 0x2024AD0) & 7 )
                    StringCopy(byte_30041C0, &gStatusConditionString_ConfusionJpn);
                  *(_DWORD *)(88 * v44 + 0x2024ACC) = 0;
                  *(_DWORD *)(88 * v44 + 0x2024AD0) &= 0xFFFFFFF8;
                  b_movescr_stack_push_cursor();
                  v2024D23 = 0;
                  v50 = &gUnknown_081D9A4A;
_0801B168:
                  v2024C10 = v50;
                  v62 = 1;
                  goto _0801B20E;
                case 21:
                  v54 = (_BYTE *)(88 * v44 + 33704600);
                  v55 = 7;
                  do
                  {
                    if ( (signed int)*v54 <= 5 )
                    {
                      *v54 = 6;
                      v62 = 5;
                    }
                    ++v54;
                    --v55;
                  }
                  while ( v55 >= 0 );
                  if ( !v62 )
                    goto _0801B254;
                  v2016003 = v44;
                  v2024C0B = v44;
                  b_movescr_stack_push_cursor();
                  v2024C10 = &gUnknown_081D9A64;
                  return v62;
                default:
                  break;
              }
            }
            if ( v62 )
              break;
_0801B254:
            v44 = (v44 + 1) & 0xFF;
            if ( v44 >= v2024A68 )
              return v62;
          }
_0801B20E:
          v2016003 = v44;
          v2024C0B = v44;
          v2024A60 = v44;
          v43 = 88 * (unsigned __int8)v44;
_0801B224:
          dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(v43 + 33704652));
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        break;
      case 4u:
        if ( v2024BEC )
        {
          if ( v9 == 30 )
          {
            if ( !(v2024C68 & 0x29) )
            {
              v56 = *(_DWORD *)(20 * v2024C08 + 0x2024D70);
              if ( v56 || (v56 = *(_DWORD *)(20 * v2024C08 + 0x2024D74)) != 0 )
              {
                if ( ((unsigned __int16)Random(v56) % 0x64u & 0xFFFF) < v8
                  && *((_BYTE *)&gBattleMoves + 12 * v2024BE6 + 8) & 0x20
                  && *(_WORD *)(88 * v2024C08 + 0x2024AA8) )
                {
                  v2024D21 = 8;
                  b_movescr_stack_push_cursor();
                  sub_801E3EC(0, 0);
                  b_movescr_stack_pop_cursor();
                }
              }
            }
          }
          else if ( v9 == 62 && !(v2024C68 & 0x29) )
          {
            v57 = *(_DWORD *)(20 * v2024C08 + 0x2024D6C);
            if ( v57 )
            {
              if ( v57 != 0xFFFF
                && v2024C07 != v2024C08
                && *(_WORD *)(88 * v2024C07 + 0x2024AA8) != *(_WORD *)(88 * v2024C07 + 0x2024AAC)
                && *(_WORD *)(88 * v2024C07 + 0x2024AA8) )
              {
                v2024C04 = v64;
                v2024C0B = v2024C07;
                v2016003 = v2024C07;
                v58 = *(_DWORD *)(20 * v2024C08 + 0x2024D6C) / v63;
                v2024BEC = -v58;
                if ( !v58 )
                  v2024BEC = -1;
                *(_DWORD *)(20 * v2024C08 + 0x2024D6C) = 0;
                b_movescr_stack_push_cursor();
                v2024C10 = &gUnknown_081D9AA7;
                v62 = (v62 + 1) & 0xFF;
              }
            }
          }
        }
        break;
      default:
        return v62;
    }
  }
  return v62;
}
