int __fastcall sub_803E1B0(int a1, unsigned __int16 a2, unsigned __int8 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r0@3
  unsigned __int8 v8; // r0@7
  signed int v9; // r1@7
  int v10; // r4@7
  int v11; // r1@10
  int v12; // r0@15
  _BYTE *v14; // r6@27
  unsigned int v15; // r3@39
  _BYTE *v16; // r6@39
  unsigned int v17; // r3@49
  _BYTE *v18; // r6@49
  _BYTE *v19; // r6@59
  int v20; // r4@64
  int v21; // r1@85
  unsigned int v22; // r10@88
  char v23; // r0@89
  int v24; // r5@89
  unsigned __int16 v25; // r4@89
  char v26; // r0@89
  int v27; // r0@91
  unsigned __int16 v28; // r0@91
  unsigned __int8 v29; // r0@91
  int v30; // r4@91
  int v31; // r0@91
  unsigned int v32; // r5@96
  unsigned int v33; // r1@97
  int v34; // r0@98
  unsigned int v35; // r1@98
  int v36; // r4@99
  unsigned int v37; // r0@106
  unsigned __int8 v38; // r0@109
  int v39; // r0@109
  int v40; // r1@116
  unsigned int v41; // r1@116
  int v42; // r4@121
  signed int v43; // r0@123
  int v44; // r4@126
  int v45; // r0@128
  unsigned int v46; // r0@128
  char v47; // r5@136
  signed int v48; // r5@142
  unsigned __int16 v49; // r4@143
  char v50; // r0@143
  unsigned __int8 v51; // r0@143
  unsigned __int16 v52; // r4@144
  char v53; // r0@144
  unsigned __int8 v54; // r0@144
  unsigned __int16 v55; // r4@145
  char v56; // r0@145
  int v57; // r6@141
  int v58; // r5@141
  unsigned __int16 v59; // r4@141
  char v60; // r0@141
  unsigned __int8 v61; // r0@141
  int v62; // r1@156
  unsigned __int16 v63; // r4@156
  char v64; // r0@156
  unsigned __int8 v65; // r0@156
  unsigned __int16 v66; // r4@157
  char v67; // r0@157
  unsigned int v68; // r10@168
  unsigned int v69; // r5@172
  int v70; // r4@173
  unsigned int v71; // r1@173
  int v72; // r2@173
  int v73; // r0@174
  unsigned int v74; // r1@174
  int v75; // r4@175
  char v76; // r0@180
  int v77; // r5@181
  unsigned __int16 v78; // r4@181
  char v79; // r0@181
  int v80; // r4@181
  unsigned __int16 v81; // r0@181
  int v82; // r4@181
  int v83; // r0@181
  int v84; // r5@185
  signed int v85; // r2@187
  int v86; // r4@192
  int v87; // r5@192
  int v88; // r1@192
  int v89; // r0@206
  unsigned int v90; // [sp+0h] [bp-5Ch]@64
  int v91; // [sp+4h] [bp-58h]@185
  int v92; // [sp+8h] [bp-54h]@1
  int v93; // [sp+Ch] [bp-50h]@1
  int v94; // [sp+10h] [bp-4Ch]@1
  int v95; // [sp+14h] [bp-48h]@1
  int v96; // [sp+18h] [bp-44h]@7
  int v97; // [sp+1Ch] [bp-40h]@1
  int v98; // [sp+20h] [bp-3Ch]@21
  int v99; // [sp+24h] [bp-38h]@1
  unsigned int i; // [sp+28h] [bp-34h]@89
  int v101; // [sp+2Ch] [bp-30h]@1
  int v102; // [sp+30h] [bp-2Ch]@6
  int v103; // [sp+34h] [bp-28h]@1
  int v104; // [sp+38h] [bp-24h]@142

  v5 = a1;
  v92 = a2;
  v93 = a3;
  v94 = a4;
  v95 = a5;
  v97 = 1;
  v99 = 6;
  v101 = 0;
  v103 = 4;
  v6 = (unsigned __int16)GetMonData(a1, 12, 0);
  if ( v6 == 175 )
  {
    if ( byte_3001BAD & 2 )
      v7 = *(_BYTE *)(28 * v2024E6C + 0x2024DF7);
    else
      v7 = v2028DBC;
  }
  else
  {
    v7 = (unsigned __int8)itemid_get_x12(v6);
  }
  v102 = v7;
  v2024C0B = v2024E6C;
  if ( byte_3001BAD & 2 )
  {
    v2024A60 = v2024E6C;
    v8 = battle_side_get_owner(v2024E6C);
    v9 = (-v8 | (unsigned int)v8) >> 31;
    v96 = v9;
    v10 = v92 - 13;
    if ( v9 < v2024A68 )
    {
      if ( *(_WORD *)(2 * v9 + 0x2024A6A) == (unsigned __int16)v93 )
      {
        v103 = v96;
      }
      else
      {
        while ( 1 )
        {
          v11 = v96 + 2;
          v96 = v11;
          if ( v11 >= v2024A68 )
            break;
          if ( *(_WORD *)(2 * v11 + 0x2024A6A) == (unsigned __int16)v93 )
          {
            v103 = (unsigned __int8)v96;
            break;
          }
        }
      }
    }
  }
  else
  {
    v2024A60 = 0;
    v103 = 4;
    v10 = v92 - 13;
  }
  if ( (unsigned __int16)v10 > 0xA5u )
    return 1;
  v12 = (int)*(&gItemEffectTable + v10);
  if ( v12 )
  {
    if ( v92 != 175 )
      goto _0803E372;
  }
  else if ( v92 != 175 )
  {
    return 1;
  }
  if ( !(byte_3001BAD & 2) )
  {
    v98 = 33721770;
    goto _0803E374;
  }
  v12 = 28 * v2024A60 + 33705464;
_0803E372:
  v98 = v12;
_0803E374:
  v96 = 0;
  do
  {
    if ( (unsigned int)v96 <= 5 )
    {
      switch ( v96 )
      {
        case 0:
          v14 = (_BYTE *)(v98 + v96);
          if ( *(_BYTE *)(v98 + v96) & 0x80
            && byte_3001BAD & 2
            && v103 != 4
            && *(_DWORD *)(88 * v103 + 0x2024AD0) & 0xF0000 )
          {
            *(_DWORD *)(88 * v103 + 0x2024AD0) &= 0xFFF0FFFF;
            v97 = 0;
          }
          if ( *v14 & 0x30 && !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x100000) )
          {
            *(_DWORD *)(88 * v2024A60 + 0x2024AD0) |= 0x100000u;
            v97 = 0;
          }
          if ( !(*v14 & 0xF) || (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A99) > 11 )
            goto def_803E38A;
          *(_BYTE *)(88 * v2024A60 + 0x2024A99) += *v14 & 0xF;
          if ( (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A99) > 12 )
            *(_BYTE *)(88 * v2024A60 + 0x2024A99) = 12;
          goto _0803E74E;
        case 1:
          v15 = (unsigned __int8)(*(_BYTE *)(v98 + v96) & 0xF0) << 24;
          v16 = (_BYTE *)(v98 + v96);
          if ( v15 && (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A9A) <= 11 )
          {
            *(_BYTE *)(88 * v2024A60 + 0x2024A9A) += v15 >> 28;
            if ( (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A9A) > 12 )
              *(_BYTE *)(88 * v2024A60 + 0x2024A9A) = 12;
            v97 = 0;
          }
          if ( *v16 & 0xF && (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A9B) <= 11 )
          {
            *(_BYTE *)(88 * v2024A60 + 0x2024A9B) += *v16 & 0xF;
            if ( (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A9B) > 12 )
              *(_BYTE *)(88 * v2024A60 + 0x2024A9B) = 12;
            v97 = 0;
          }
          goto def_803E38A;
        case 2:
          v17 = (unsigned __int8)(*(_BYTE *)(v98 + v96) & 0xF0) << 24;
          v18 = (_BYTE *)(v98 + v96);
          if ( v17 && (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A9E) <= 11 )
          {
            *(_BYTE *)(88 * v2024A60 + 0x2024A9E) += v17 >> 28;
            if ( (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A9E) > 12 )
              *(_BYTE *)(88 * v2024A60 + 0x2024A9E) = 12;
            v97 = 0;
          }
          if ( *v18 & 0xF && (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A9C) <= 11 )
          {
            *(_BYTE *)(88 * v2024A60 + 0x2024A9C) += *v18 & 0xF;
            if ( (signed int)*(_BYTE *)(88 * v2024A60 + 0x2024A9C) > 12 )
              *(_BYTE *)(88 * v2024A60 + 0x2024A9C) = 12;
            v97 = 0;
          }
          goto def_803E38A;
        case 3:
          v19 = (_BYTE *)(v98 + v96);
          if ( *(_BYTE *)(v98 + v96) & 0x80
            && !*(_BYTE *)(12 * (unsigned __int8)battle_side_get_owner(v2024A60) + 0x2024C82) )
          {
            *(_BYTE *)(12 * (unsigned __int8)battle_side_get_owner(v2024A60) + 0x2024C82) = 5;
            v97 = 0;
          }
          if ( *v19 & 0x40 && GetMonData(v5, 56, 0) != 100 )
          {
            v20 = GetMonData(v5, 56, 0);
            v90 = *(&gExperienceTables[101 * *((_BYTE *)&gBaseStats + 28 * GetMonData(v5, 11, 0) + 19)] + v20 + 1);
            SetMonData(v5, 25, (int)&v90);
            CalculateMonStats(v5);
            v97 = 0;
          }
          if ( *v19 & 0x20 && !(HealStatusConditions(v5, v93, 7, v103) << 24) )
          {
            if ( v103 != 4 )
              *(_DWORD *)(88 * v103 + 0x2024AD0) &= 0xF7FFFFFF;
            v97 = 0;
          }
          if ( *v19 & 0x10 && !(HealStatusConditions(v5, v93, 3976, v103) << 24) )
            v97 = 0;
          if ( *v19 & 8 && !(HealStatusConditions(v5, v93, 16, v103) << 24) )
            v97 = 0;
          if ( *v19 & 4 && !(HealStatusConditions(v5, v93, 32, v103) << 24) )
            v97 = 0;
          if ( *v19 & 2 && !(HealStatusConditions(v5, v93, 64, v103) << 24) )
            v97 = 0;
          if ( *v19 & 1 )
          {
            if ( byte_3001BAD & 2 )
            {
              if ( v103 != 4 )
              {
                v21 = *(_DWORD *)(88 * v103 + 0x2024AD0);
                if ( v21 & 7 )
                {
                  *(_DWORD *)(88 * v103 + 0x2024AD0) = v21 & 0xFFFFFFF8;
_0803E74E:
                  v97 = 0;
                }
              }
            }
          }
          goto def_803E38A;
        case 4:
          v22 = *(_BYTE *)(v98 + v96);
          if ( *(_BYTE *)(v98 + v96) & 0x20 )
          {
            v22 = *(_BYTE *)(v98 + v96) & 0xDF;
            v23 = GetMonData(v5, 21, 0);
            v90 = (unsigned int)(unsigned __int8)(v23 & gUnknown_08208238[v94]) >> 2 * v94;
            v24 = v94 + 13;
            v25 = GetMonData(v5, v94 + 13, 0);
            v26 = GetMonData(v5, 21, 0);
            LOBYTE(i) = CalcPPWithPPUps(v25, v26, v94);
            i = (unsigned __int8)i;
            if ( v90 <= 2 && i > 4 )
            {
              v27 = GetMonData(v5, 21, 0);
              v90 = v27 + gUnknown_08208240[v94];
              SetMonData(v5, 21, (int)&v90);
              v28 = GetMonData(v5, v24, 0);
              v29 = CalcPPWithPPUps(v28, v90, v94);
              v90 = v29 - i;
              v30 = v94 + 17;
              v31 = GetMonData(v5, v94 + 17, 0);
              v90 += v31;
              SetMonData(v5, v30, (int)&v90);
              v97 = 0;
            }
          }
          i = 0;
          if ( !v22 )
            goto def_803E38A;
          break;
        case 5:
          v68 = *(_BYTE *)(v98 + v96);
          for ( i = 0; v68; v68 >>= 1 )
          {
            if ( v68 & 1 && i <= 7 )
            {
              switch ( i )
              {
                case 0u:
                case 1u:
                case 2u:
                case 3u:
                  v69 = sub_8040020(v5) & 0xFFFF;
                  if ( v69 > 0x1FD )
                    return 1;
                  v70 = i + 2;
                  v71 = GetMonData(v5, gUnknown_082082F2[i + 2], 0);
                  v90 = v71;
                  v72 = v70;
                  if ( v71 <= 0x63 )
                  {
                    v73 = *(_BYTE *)(v98 + v99);
                    v74 = v71 + v73;
                    if ( v74 <= 0x64 )
                      v75 = *(_BYTE *)(v98 + v99);
                    else
                      v75 = v73 + 100 - v74;
                    if ( v69 + v75 > 0x1FE )
                      v75 = v75 + 510 - (v69 + v75);
                    v90 += v75;
                    SetMonData(v5, gUnknown_082082F2[v72], (int)&v90);
                    CalculateMonStats(v5);
                    v97 = 0;
                    goto _0803F130;
                  }
                  break;
                case 4u:
                  v76 = GetMonData(v5, 21, 0);
                  v90 = (unsigned int)(unsigned __int8)(v76 & gUnknown_08208238[v94]) >> 2 * v94;
                  if ( v90 <= 2 )
                  {
                    v77 = v94 + 13;
                    v78 = GetMonData(v5, v94 + 13, 0);
                    v79 = GetMonData(v5, 21, 0);
                    v80 = (unsigned __int8)CalcPPWithPPUps(v78, v79, v94);
                    v90 = GetMonData(v5, 21, 0);
                    v90 &= gUnknown_0820823C[v94];
                    v90 += 3 * gUnknown_08208240[v94];
                    SetMonData(v5, 21, (int)&v90);
                    v81 = GetMonData(v5, v77, 0);
                    v90 = (unsigned __int8)CalcPPWithPPUps(v81, v90, v94) - v80;
                    v82 = v94 + 17;
                    v83 = GetMonData(v5, v94 + 17, 0);
                    v90 += v83;
                    SetMonData(v5, v82, (int)&v90);
                    v97 = 0;
                  }
                  break;
                case 5u:
                  if ( (unsigned int)GetMonData(v5, 32, 0) > 0x63 || v97 || v101 )
                    goto _0803F130;
                  v101 = *(_BYTE *)(v98 + v99);
                  v84 = GetMonData(v5, 32, 0);
                  v91 = v84;
                  if ( (char)v101 <= 0 || v102 != 27 )
                    goto _0803F0D0;
                  v91 = v84 + 150 * (char)v101 / 100;
                  v85 = v101 << 24;
                  goto _0803F0DC;
                case 6u:
                  if ( (unsigned int)GetMonData(v5, 32, 0) <= 0x63
                    || (unsigned int)GetMonData(v5, 32, 0) > 0xC7
                    || v97
                    || v101 )
                  {
                    goto _0803F130;
                  }
                  v101 = *(_BYTE *)(v98 + v99);
                  v86 = GetMonData(v5, 32, 0);
                  v91 = v86;
                  v87 = v101 << 24;
                  v88 = (char)v101;
                  if ( (char)v101 > 0 && v102 == 27 )
                    goto _0803F0BE;
                  v85 = v101 << 24;
                  goto _0803F0D4;
                case 7u:
                  if ( (unsigned int)GetMonData(v5, 32, 0) > 0xC7 && !v97 && !v101 )
                  {
                    v101 = *(_BYTE *)(v98 + v99);
                    v86 = GetMonData(v5, 32, 0);
                    v91 = v86;
                    v87 = v101 << 24;
                    v88 = (char)v101;
                    if ( (char)v101 <= 0 || v102 != 27 )
                    {
_0803F0D0:
                      v85 = v101 << 24;
_0803F0D4:
                      v91 += v85 >> 24;
                    }
                    else
                    {
_0803F0BE:
                      v91 = v86 + 150 * v88 / 100;
                      v85 = v87;
                    }
_0803F0DC:
                    if ( v85 > 0 )
                    {
                      if ( GetMonData(v5, 38, 0) == 11 )
                        ++v91;
                      v89 = GetMonData(v5, 35, 0);
                      if ( v89 == (unsigned __int8)sav1_map_get_name(v89) )
                        ++v91;
                    }
                    if ( v91 < 0 )
                      v91 = 0;
                    if ( v91 > 255 )
                      v91 = 255;
                    SetMonData(v5, 32, (int)&v91);
                  }
_0803F130:
                  v99 = (v99 + 1) & 0xFF;
                  break;
                default:
                  break;
              }
            }
            ++i;
          }
          goto def_803E38A;
        default:
          goto def_803E38A;
      }
      do
      {
        if ( v22 & 1 && i <= 7 )
        {
          switch ( i )
          {
            case 0u:
            case 1u:
              v32 = sub_8040020(v5) & 0xFFFF;
              if ( v32 > 0x1FD )
                return 1;
              v33 = GetMonData(v5, gUnknown_082082F2[i], 0);
              v90 = v33;
              if ( v33 <= 0x63 )
              {
                v34 = *(_BYTE *)(v98 + v99);
                v35 = v33 + v34;
                if ( v35 <= 0x64 )
                  v36 = *(_BYTE *)(v98 + v99);
                else
                  v36 = v34 + 100 - v35;
                if ( v32 + v36 > 0x1FE )
                  v36 = v36 + 510 - (v32 + v36);
                v90 += v36;
                SetMonData(v5, gUnknown_082082F2[i], (int)&v90);
                CalculateMonStats(v5);
                v99 = (v99 + 1) & 0xFF;
                v97 = 0;
              }
              break;
            case 2u:
              if ( v22 & 0x10 )
              {
                if ( GetMonData(v5, 57, 0) )
                {
                  v37 = (v99 + 1) << 24;
                  goto _0803EC9E;
                }
                if ( byte_3001BAD & 2 )
                {
                  if ( v103 == 4 )
                  {
                    v2024C0C &= ~(unsigned __int8)gBitTable[v2024A60 ^ 2];
                    v39 = v2024A60;
                  }
                  else
                  {
                    v2024C0C &= ~LOBYTE(gBitTable[v103]);
                    v38 = pokemon_order_func(*(_BYTE *)(2 * v103 + 0x2024A6A));
                    battle_data_fill(v103, v38);
                    v39 = v2024A60;
                  }
                  if ( !(battle_side_get_owner(v39) << 24) && (unsigned __int8)byte_30042E4 <= 0xFEu )
                    ++byte_30042E4;
                }
              }
              else if ( !GetMonData(v5, 57, 0) )
              {
                v37 = (v99 + 1) << 24;
                goto _0803EC9E;
              }
              v40 = v99;
              v99 = (v99 + 1) & 0xFF;
              v41 = *(_BYTE *)(v98 + v40);
              v90 = v41;
              if ( v41 == 254 )
              {
                v90 = (unsigned int)GetMonData(v5, 58, 0) >> 1;
                if ( v90 )
                  goto _0803EA6C;
                v43 = 1;
                goto _0803EA6A;
              }
              if ( v41 <= 0xFE )
              {
                if ( v41 != 253 )
                  goto _0803EA6C;
                v43 = v20160FA;
_0803EA6A:
                v90 = v43;
                goto _0803EA6C;
              }
              if ( v41 == 255 )
              {
                v42 = GetMonData(v5, 58, 0);
                v90 = v42 - GetMonData(v5, 57, 0);
              }
_0803EA6C:
              v44 = GetMonData(v5, 58, 0);
              if ( v44 != GetMonData(v5, 57, 0) )
              {
                if ( v95 )
                {
                  v2024BEC = -v90;
                }
                else
                {
                  v45 = GetMonData(v5, 57, 0);
                  v90 += v45;
                  v46 = GetMonData(v5, 58, 0);
                  if ( v90 > v46 )
                    v90 = GetMonData(v5, 58, 0);
                  SetMonData(v5, 57, (int)&v90);
                  if ( byte_3001BAD & 2 )
                  {
                    if ( v103 != 4 )
                    {
                      *(_WORD *)(88 * v103 + 0x2024AA8) = v90;
                      if ( !(v22 & 0x10) && !(battle_side_get_owner(v2024A60) << 24) )
                      {
                        if ( (unsigned __int8)byte_30042E3 <= 0xFEu )
                          ++byte_30042E3;
                        v47 = v2024A60;
                        v2024A60 = v103;
                        dp01_build_cmdbuf_x00_a_b_0(0, 0, 0);
                        dp01_battle_side_mark_buffer_for_execution(v2024A60);
                        v2024A60 = v47;
                      }
                    }
                  }
                }
                v97 = 0;
              }
              v22 &= 0xEFu;
              break;
            case 3u:
              if ( v22 & 2 )
              {
                v57 = v94 + 17;
                v90 = GetMonData(v5, v94 + 17, 0);
                v58 = v94 + 13;
                v59 = GetMonData(v5, v94 + 13, 0);
                v60 = GetMonData(v5, 21, 0);
                v61 = CalcPPWithPPUps(v59, v60, v94);
                if ( v90 != v61 )
                {
                  v62 = v99;
                  v99 = (v99 + 1) & 0xFF;
                  v90 += *(_BYTE *)(v98 + v62);
                  v63 = GetMonData(v5, v58, 0);
                  v64 = GetMonData(v5, 21, 0);
                  v65 = CalcPPWithPPUps(v63, v64, v94);
                  if ( v90 > v65 )
                  {
                    v66 = GetMonData(v5, v58, 0);
                    v67 = GetMonData(v5, 21, 0);
                    v90 = CalcPPWithPPUps(v66, v67, v94) & 0xFF;
                  }
                  SetMonData(v5, v57, (int)&v90);
                  if ( byte_3001BAD & 2
                    && v103 != 4
                    && !(*(_DWORD *)(88 * v103 + 0x2024AD0) & 0x200000)
                    && !(((unsigned int)*(_BYTE *)(28 * v103 + 0x2024CC0) >> 4) & gBitTable[v94]) )
                  {
                    *(_BYTE *)(v94 + 88 * v103 + 33704612) = v90;
                  }
                  v97 = 0;
                }
              }
              else
              {
                v48 = 0;
                v104 = v99 + 1;
                do
                {
                  v90 = GetMonData(v5, v48 + 17, 0);
                  v49 = GetMonData(v5, v48 + 13, 0);
                  v50 = GetMonData(v5, 21, 0);
                  v51 = CalcPPWithPPUps(v49, v50, v48);
                  if ( v90 != v51 )
                  {
                    v90 += *(_BYTE *)(v98 + v99);
                    v52 = GetMonData(v5, v48 + 13, 0);
                    v53 = GetMonData(v5, 21, 0);
                    v54 = CalcPPWithPPUps(v52, v53, v48);
                    if ( v90 > v54 )
                    {
                      v55 = GetMonData(v5, v48 + 13, 0);
                      v56 = GetMonData(v5, 21, 0);
                      v90 = CalcPPWithPPUps(v55, v56, v48) & 0xFF;
                    }
                    SetMonData(v5, v48 + 17, (int)&v90);
                    if ( byte_3001BAD & 2
                      && v103 != 4
                      && !(*(_DWORD *)(88 * v103 + 0x2024AD0) & 0x200000)
                      && !(((unsigned int)*(_BYTE *)(28 * v103 + 0x2024CC0) >> 4) & gBitTable[v48]) )
                    {
                      *(_BYTE *)(v48 + 88 * v103 + 33704612) = v90;
                    }
                    v97 = 0;
                  }
                  ++v48;
                }
                while ( v48 <= 3 );
                v37 = v104 << 24;
_0803EC9E:
                v99 = v37 >> 24;
              }
              break;
            case 7u:
              if ( !(unsigned __int16)GetEvolutionTargetSpecies(v5, 2) )
                break;
              sub_8111924(v5);
              return 0;
            default:
              break;
          }
        }
        ++i;
        v22 >>= 1;
      }
      while ( v22 );
    }
def_803E38A:
    ++v96;
  }
  while ( v96 <= 5 );
  return v97;
}
