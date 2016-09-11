int sub_8012324()
{
  unsigned int v0; // r1@1
  int v1; // r5@2
  unsigned int v2; // r0@2
  int v3; // r5@6
  int v4; // r1@12
  unsigned int v5; // r0@17
  signed int v6; // r4@23
  char *v7; // r5@23
  _DWORD *v8; // r0@27
  void *v9; // r1@27
  char v10; // r1@30
  char v11; // r2@30
  char v12; // r4@31
  signed int v13; // r4@42
  int v14; // r0@53
  _BYTE *v15; // r0@56
  _BYTE *v16; // r1@61
  unsigned int v17; // r0@63
  signed int v18; // r1@65
  int v19; // r1@72
  int v20; // r4@73
  unsigned int v21; // r3@73
  int v22; // r1@75
  _BYTE *v23; // r4@102
  int v25; // [sp+0h] [bp-3Ch]@30
  char v26; // [sp+4h] [bp-38h]@23
  int v27; // [sp+Ch] [bp-30h]@23
  char v28[8]; // [sp+10h] [bp-2Ch]@24
  __int16 v29; // [sp+14h] [bp-28h]@23
  char v30; // [sp+16h] [bp-26h]@23
  char v31; // [sp+17h] [bp-25h]@23
  int *v32; // [sp+18h] [bp-24h]@23
  int v33; // [sp+38h] [bp-4h]@111

  v0 = 0;
  v2024D22 = 0;
  v2024A60 = 0;
  while ( 1 )
  {
    if ( v0 >= v2024A68 )
    {
      if ( v2024D22 == v2024A68 )
        dword_30042D4 = (int)sub_80133C8;
      return v33;
    }
    v1 = (unsigned __int8)battle_get_per_side_status(v2024A60);
    v2 = *(_BYTE *)(v2024A60 + 0x2024D1E);
    if ( v2 <= 6 )
      break;
def_8012A6A:
    ++v2024A60;
    v0 = v2024A60;
  }
  switch ( v2 )
  {
    case 0u:
      *(_BYTE *)(v2024A60 + 0x2016068) = 6;
      if ( !(v20239F8 & 0x40) )
      {
        if ( v1 & 2 )
        {
          v3 = v1 ^ 2;
          if ( !(v20160A6 & *(int *)((char *)gBitTable + (4 * battle_get_side_with_given_state(v3) & 0x3FF)))
            && *(_BYTE *)((unsigned __int8)battle_get_side_with_given_state(v3) + 0x2024D1E) != 4 )
          {
            goto def_8012A6A;
          }
        }
      }
      if ( v20160A6 & gBitTable[v2024A60] )
      {
        *(_BYTE *)(v2024A60 + 0x2024C18) = 13;
        if ( v20239F8 & 0x40 )
          *(_BYTE *)(v2024A60 + 0x2024D1E) = 3;
        else
          *(_BYTE *)(v2024A60 + 0x2024D1E) = 4;
        goto def_8012A6A;
      }
      v4 = *(_DWORD *)(88 * v2024A60 + 0x2024AD0);
      if ( v4 & 0x1000 || v4 & 0x400000 )
      {
        *(_BYTE *)(v2024A60 + 0x2024C18) = 0;
        *(_BYTE *)(v2024A60 + 0x2024D1E) = 3;
        goto def_8012A6A;
      }
      dp01_build_cmdbuf_x12_a_bb(0, v2024C18, v2024261 | (unsigned __int16)(v2024262 << 8));
_08012E32:
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      v19 = v2024A60;
      goto _08012E3C;
    case 1u:
      if ( v2024A64 & (16 * gBitTable[v2024A60] | 0xF0000000 | gBitTable[v2024A60] | (gBitTable[v2024A60] << 8) | (gBitTable[v2024A60] << 12)) )
        goto def_8012A6A;
      *(_BYTE *)(v2024A60 + 0x2024C18) = *(_BYTE *)((v2024A60 << 9) + 0x2024261);
      v5 = *(_BYTE *)((v2024A60 << 9) + 0x2024261);
      if ( v5 > 0xC )
        goto def_801251C;
      break;
    case 2u:
      if ( v2024A64 & (16 * gBitTable[v2024A60] | 0xF0000000 | gBitTable[v2024A60] | (gBitTable[v2024A60] << 8) | (gBitTable[v2024A60] << 12)) )
        goto def_8012A6A;
      v17 = *(_BYTE *)(v2024A60 + 0x2024C18);
      if ( v17 > 9 )
        goto def_8012A6A;
      switch ( v17 )
      {
        case 0u:
          v18 = *(_BYTE *)((v2024A60 << 9) + 0x2024261);
          if ( v18 <= 9 && (signed int)*(_BYTE *)((v2024A60 << 9) + 0x2024261) >= 3 )
          {
            *(_BYTE *)(v2024A60 + 0x2024C18) = v18;
            return v33;
          }
          if ( (*(_BYTE *)((v2024A60 << 9) + 0x2024262) | (*(_BYTE *)((v2024A60 << 9) + 0x2024263) << 8)) == 0xFFFF )
          {
            v15 = (_BYTE *)(v2024A60 + 33705246);
            goto _08012BFE;
          }
          if ( sub_8015894() << 24 )
          {
            *(_BYTE *)(v2024A60 + 0x2024D1E) = 5;
            *(_BYTE *)(v2024A60 + 0x2016060) = 0;
            *(_BYTE *)((v2024A60 << 9) + 0x2024261) = 0;
            *(_BYTE *)(v2024A60 + 0x2016094) = 1;
            return v33;
          }
          *(_BYTE *)(v2024A60 + 0x201608C) = *(_BYTE *)((v2024A60 << 9) + 0x2024262);
          *(_WORD *)(2 * v2024A60 + 0x2024C60) = *(_WORD *)(2 * *(_BYTE *)(v2024A60 + 0x201608C)
                                                          + 88 * v2024A60
                                                          + 0x2024A8C);
          *(_BYTE *)(v2024A60 + 0x2016010) = *(_BYTE *)((v2024A60 << 9) + 0x2024263);
          v19 = v2024A60;
_08012E3C:
          v16 = (_BYTE *)(v19 + 33705246);
          break;
        case 1u:
          v20 = v2024A60;
          v21 = *(_BYTE *)((v2024A60 << 9) + 0x2024261) | (*(_BYTE *)((v2024A60 << 9) + 0x2024262) << 8);
          if ( !v21 )
            goto _08012F60;
          v2024C04 = v21;
          v19 = v2024A60;
          goto _08012E3C;
        case 2u:
          v22 = *(_BYTE *)((v2024A60 << 9) + 0x2024261);
          if ( v22 == 6 )
          {
            v15 = (_BYTE *)(v2024A60 + 33705246);
            goto _08012BFE;
          }
          *(_BYTE *)(v2024A60 + 0x2016068) = v22;
          if ( v20239F8 & 0x40 )
          {
            *(_BYTE *)(3 * v2024A60 + 0x201606C) &= 0xFu;
            *(_BYTE *)(3 * v2024A60 + 0x201606C) |= *(_BYTE *)((v2024A60 << 9) + 0x2024262) & 0xF0;
            *(_BYTE *)(3 * v2024A60 + 0x201606D) = *(_BYTE *)((v2024A60 << 9) + 0x2024263);
            *(_BYTE *)(3 * (v2024A60 ^ 2) + 0x201606C) &= 0xF0u;
            *(_BYTE *)(3 * (v2024A60 ^ 2) + 0x201606C) |= (unsigned __int8)(*(_BYTE *)((v2024A60 << 9) + 0x2024262) & 0xF0) >> 4;
            *(_BYTE *)(3 * (v2024A60 ^ 2) + 0x201606E) = *(_BYTE *)((v2024A60 << 9) + 0x2024263);
          }
          v19 = v2024A60;
          goto _08012E3C;
        case 3u:
          v2024C6C |= 0x8000u;
          v16 = (_BYTE *)(v2024A60 + 33705246);
          goto _08012E3E;
        case 4u:
          v16 = (_BYTE *)(v2024A60 + 33705246);
          goto _08012E3E;
        case 5u:
          v16 = (_BYTE *)(v2024A60 + 33705246);
          goto _08012E3E;
        case 6u:
          v20 = v2024A60;
          v21 = *(_BYTE *)((v2024A60 << 9) + 0x2024261) | (*(_BYTE *)((v2024A60 << 9) + 0x2024262) << 8);
          if ( !v21 )
            goto _08012F60;
          v16 = (_BYTE *)(v2024A60 + 33705246);
          goto _08012E3E;
        case 7u:
          v16 = (_BYTE *)(v2024A60 + 33705246);
          goto _08012E3E;
        case 8u:
          v2024C6C |= 0x8000u;
          v16 = (_BYTE *)(v2024A60 + 33705246);
          goto _08012E3E;
        case 9u:
          v16 = (_BYTE *)(v2024A60 + 33705246);
          goto _08012E3E;
        default:
          goto def_8012A6A;
      }
      goto _08012E3E;
    case 3u:
      if ( v2024A64 & (16 * gBitTable[v2024A60] | 0xF0000000 | gBitTable[v2024A60] | (gBitTable[v2024A60] << 8) | (gBitTable[v2024A60] << 12)) )
        goto def_8012A6A;
      if ( (v20239F8 & 0x41) != 1
        || v1 & 2
        || v20160A6 & *(int *)((char *)gBitTable + (4 * battle_get_side_with_given_state(v1 ^ 2) & 0x3FF)) )
      {
        sub_800D1D8(0, 0);
      }
      else
      {
        sub_800D1D8(0, 1);
      }
      goto _08012E32;
    case 4u:
      if ( !(v2024A64 & (16 * gBitTable[v2024A60] | 0xF0000000 | gBitTable[v2024A60] | (gBitTable[v2024A60] << 8) | (gBitTable[v2024A60] << 12))) )
        ++v2024D22;
      goto def_8012A6A;
    case 5u:
      if ( *(_BYTE *)(v2024A60 + 0x2016060) )
      {
        *(_BYTE *)(v2024A60 + 0x2024D1E) = *(_BYTE *)(v2024A60 + 0x2016094);
      }
      else
      {
        v2024C07 = v2024A60;
        v23 = *(_BYTE **)(4 * v2024A60 + 0x2024C1C);
        v2024C10 = *(_DWORD *)(4 * v2024A60 + 0x2024C1C);
        if ( !(v2024A64 & (16 * gBitTable[v2024A60] | 0xF0000000 | gBitTable[v2024A60] | (gBitTable[v2024A60] << 8) | (gBitTable[v2024A60] << 12))) )
          call_via_r0(*(&gUnknown_081FA73C + *v23));
        *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = v2024C10;
      }
      goto def_8012A6A;
    case 6u:
      v20 = v2024A60;
      v21 = v2024A64 & (16 * gBitTable[v2024A60] | 0xF0000000 | gBitTable[v2024A60] | (gBitTable[v2024A60] << 8) | (gBitTable[v2024A60] << 12));
      if ( !v21 )
_08012F60:
        *(_BYTE *)(v20 + 33705246) = v21;
      goto def_8012A6A;
    default:
      goto def_8012A6A;
  }
  switch ( *(_BYTE *)((v2024A60 << 9) + 0x2024261) )
  {
    case 0:
      if ( sub_8015C90() << 24 )
      {
        *(_BYTE *)(v2024A60 + 0x2024D1E) = 5;
        *(_BYTE *)(v2024A60 + 0x2016060) = 0;
        *(_BYTE *)(v2024A60 + 0x2016094) = 3;
        *(_BYTE *)(v2024A60 + 0x2016010) = *(_BYTE *)((v2024A60 << 9) + 0x2024263);
        return v33;
      }
      if ( *(_WORD *)(28 * v2024A60 + 0x2024CAE) )
      {
        *(_WORD *)(2 * v2024A60 + 0x2024C60) = *(_WORD *)(28 * v2024A60 + 0x2024CAE);
        *(_BYTE *)(v2024A60 + 0x2024D1E) = 3;
        return v33;
      }
      v29 = *(_WORD *)(88 * v2024A60 + 0x2024A80);
      v30 = *(_BYTE *)(88 * v2024A60 + 0x2024AA1);
      v31 = *(_BYTE *)(88 * v2024A60 + 0x2024AA2);
      v6 = 0;
      v32 = &v27;
      v7 = &v26;
      do
      {
        *(_WORD *)v7 = *(_WORD *)(2 * v6 + 88 * v2024A60 + 0x2024A8C);
        *((_BYTE *)v32 + v6) = *(_BYTE *)(v6 + 88 * v2024A60 + 33704612);
        v28[v6] = CalcPPWithPPUps(
                    *(_WORD *)(2 * v6 + 88 * v2024A60 + 0x2024A8C),
                    *(_BYTE *)(88 * v2024A60 + 0x2024ABB),
                    (unsigned __int8)v6);
        v7 += 2;
        ++v6;
      }
      while ( v6 <= 3 );
      sub_800CBA4(0, v20239F8 & 1, 0, (int)&v26);
_0801289E:
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
def_801251C:
      if ( (v20239F8 & 0xA) == 8 && *(_BYTE *)((v2024A60 << 9) + 0x2024261) == 3 )
      {
        b_call_bc_move_exec(&gUnknown_081D8E37);
        v15 = (_BYTE *)(v2024A60 + 33705246);
_08012BFE:
        *v15 = 0;
        goto def_8012A6A;
      }
      if ( !(sub_8012028() << 24) || *(_BYTE *)((v2024A60 << 9) + 0x2024261) != 3 )
      {
        v16 = (_BYTE *)(v2024A60 + 33705246);
_08012E3E:
        ++*v16;
        goto def_8012A6A;
      }
      v8 = (_DWORD *)(4 * v2024A60 + 33704988);
      v9 = &gUnknown_081D8E44;
_080129CC:
      *v8 = v9;
      *(_BYTE *)(v2024A60 + 0x2024D1E) = 5;
      *(_BYTE *)(v2024A60 + 0x2016060) = 0;
      *(_BYTE *)(v2024A60 + 0x2016094) = 0;
      return v33;
    case 1:
      if ( !(v20239F8 & 0x902) )
        goto _08012908;
      v8 = (_DWORD *)(4 * v2024A60 + 33704988);
      v9 = &gUnknown_081D9B29;
      goto _080129CC;
    case 2:
      *(_BYTE *)(v2024A60 + 0x2016064) = *(_WORD *)(2 * v2024A60 + 0x2024A6A);
      if ( *(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 0x400E000 || *(_DWORD *)(4 * v2024A60 + 0x2024C98) & 0x400 )
      {
        v25 = 3 * v2024A60 + 33644652;
        v10 = 2;
        v11 = 6;
        goto _0801286C;
      }
      v12 = sub_8018324(12, v2024A60, 23, 0);
      if ( v12
        || (v12 = sub_8018324(12, v2024A60, 71, 0)) != 0
        && *(_BYTE *)(88 * v2024A60 + 0x2024AA1) != 2
        && *(_BYTE *)(88 * v2024A60 + 0x2024AA2) != 2
        && *(_BYTE *)(88 * v2024A60 + 0x2024AA0) != 26
        || (v12 = sub_8018324(15, v2024A60, 42, 0)) != 0
        && (*(_BYTE *)(88 * v2024A60 + 0x2024AA1) == 8 || *(_BYTE *)(88 * v2024A60 + 0x2024AA2) == 8) )
      {
        dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f(0, 16 * (v12 - 1) | 4, 6, v2024C06, 3 * v2024A60 + 33644652);
        goto _0801289E;
      }
      if ( v2024A60 == 2 && v2024C18 == 2 )
      {
        v13 = 90216;
        goto _08012854;
      }
      if ( v2024A60 == 3 && v2024C19 == 2 )
      {
        v13 = 90217;
_08012854:
        v11 = *(_BYTE *)(v13 + 0x2000000);
        v25 = 3 * v2024A60 + 33644652;
        v10 = 0;
_0801286C:
        dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f(0, v10, v11, 0, v25);
        goto _0801289E;
      }
      dp01_build_cmdbuf_x16_a_b_c_ptr_d_e_f(0, 0, 6, 0, 3 * v2024A60 + 33644652);
      goto _0801289E;
    case 5:
      if ( !(sub_803DD20() << 24) )
        goto def_801251C;
      *(_DWORD *)(4 * v2024A60 + 0x2024C1C) = &gUnknown_081D8E4A;
      *(_BYTE *)(v2024A60 + 0x2024D1E) = 5;
      *(_BYTE *)(v2024A60 + 0x2016060) = 0;
      *(_BYTE *)(v2024A60 + 0x2016094) = 0;
      return v33;
    case 6:
_08012908:
      sub_800CBE0(0, 3 * v2024A60 + 33644652);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      goto def_801251C;
    case 0xC:
      *(_BYTE *)(v2024A60 + 0x2024D1E) = 6;
      v14 = battle_get_per_side_status(v2024A60);
      *(_BYTE *)((unsigned __int8)battle_get_side_with_given_state((v14 ^ 2) & 0xFF) + 0x2024D1E) = 0;
      dp01_build_cmdbuf_x32_32_32_32(0);
      dp01_battle_side_mark_buffer_for_execution(v2024A60);
      return v33;
    default:
      goto def_801251C;
  }
}
