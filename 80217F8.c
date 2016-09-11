int sub_80217F8()
{
  signed int v0; // r10@1
  int v1; // r0@2
  void *v2; // r0@121
  signed int v3; // r12@7
  unsigned int v4; // r0@9
  int v5; // r4@14
  int v6; // r5@22
  signed int v7; // r4@47
  int v8; // r1@47
  signed __int16 v9; // r0@51
  signed __int16 *v10; // r1@51
  signed int v11; // r4@53
  _WORD *v12; // r2@54
  signed int v13; // r3@54
  signed int v14; // r4@78
  signed int v15; // r2@79
  _DWORD *v16; // r1@79
  int v17; // r3@89
  int v18; // r4@105
  int v19; // r0@120
  unsigned __int8 v20; // r0@120
  int v22; // [sp+4h] [bp-34h]@5
  int v23; // [sp+8h] [bp-30h]@4
  signed __int16 *v24; // [sp+Ch] [bp-2Ch]@4
  int v25; // [sp+10h] [bp-28h]@1
  int v26; // [sp+14h] [bp-24h]@1
  int v27; // [sp+34h] [bp-4h]@0

  v0 = 0;
  v25 = *(_BYTE *)(v2024C10 + 1);
  v26 = *(_BYTE *)(v2024C10 + 2);
  if ( *(_WORD *)(88 * v2024C07 + 0x2024AAE) == 175 )
    v1 = *(_BYTE *)(28 * v2024C07 + 0x2024DF7);
  else
    v1 = (unsigned __int8)itemid_get_x12(*(_WORD *)(88 * v2024C07 + 0x2024AAE));
  v23 = v1;
  v24 = (signed __int16 *)(2 * v2024C07 + 33644776);
  if ( v201601C )
    v22 = v201601C & 0x3F;
  else
    v22 = gBattleMoves[12 * v2024BE6 + 2];
  v3 = 0x2000000;
  do
  {
    v4 = *(_BYTE *)(v3 + 90124);
    if ( v4 <= 0x11 )
    {
      switch ( v4 )
      {
        case 0u:
          if ( *(_DWORD *)(88 * v2024C08 + 0x2024AD0) & 0x800000 )
          {
            if ( *(_WORD *)(88 * v2024C08 + 0x2024AA8) )
            {
              if ( v2024C07 != v2024C08 )
              {
                v5 = battle_side_get_owner(v2024C07);
                if ( v5 << 24 != battle_side_get_owner(v2024C08) << 24
                  && !(v2024C68 & 0x29)
                  && (*(_DWORD *)(16 * v2024C08 + 0x2024D2C) || *(_DWORD *)(16 * v2024C08 + 0x2024D30))
                  && gBattleMoves[12 * v2024BE6 + 1]
                  && (signed int)*(_BYTE *)(88 * v2024C08 + 0x2024A99) <= 11 )
                {
                  ++*(_BYTE *)(88 * v2024C08 + 0x2024A99);
                  b_movescr_stack_push_cursor();
                  v2024C10 = &gUnknown_081D9132;
                  v0 = 1;
                }
              }
            }
          }
          goto _08021E00;
        case 1u:
          v6 = *(_DWORD *)(88 * v2024C08 + 0x2024ACC);
          if ( v6 & 0x20
            && *(_WORD *)(88 * v2024C08 + 0x2024AA8)
            && v2024C07 != v2024C08
            && *(_DWORD *)(20 * v2024C08 + 0x2024D74)
            && !(v2024C68 & 0x29)
            && v22 == 10 )
          {
            *(_DWORD *)(88 * v2024C08 + 0x2024ACC) = v6 & 0xFFFFFFDF;
            v2024A60 = v2024C08;
            dp01_build_cmdbuf_x02_a_b_varargs(0, 40, 0, 4u, (char *)(88 * v2024C08 + 33704652));
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
            b_movescr_stack_push_cursor();
            v2024C10 = &gUnknown_081D955D;
            v0 = 1;
          }
          goto _08021E00;
        case 2u:
          if ( sub_8018324(7u, v2024C08, 0, 0, 0) << 24 )
            v0 = 1;
          goto _08021E00;
        case 3u:
          if ( sub_8018324(4u, v2024C08, 0, 0, 0) << 24 )
            v0 = 1;
          goto _08021E00;
        case 4u:
          if ( !(sub_8018324(5u, 0, 0, 0, 0) << 24) )
            goto _08021E00;
          v0 = 1;
          v3 = 0x2000000;
          break;
        case 5u:
          if ( sub_8018324(8u, v2024C07, 0, 0, 0) << 24 )
            v0 = 1;
          goto _08021E00;
        case 6u:
          if ( !(v2024C6C & 0x2000000) || v23 != 29 || v2024BE8 == 165 || *v24 && (unsigned __int16)*v24 != 0xFFFF )
            goto _08021BE0;
          if ( v2024BE8 == 226 && !(v2024C68 & 0x20) )
            goto _08022244;
          *v24 = v2024BE8;
_08021BE0:
          v7 = 0;
          v8 = (unsigned __int16)*v24;
          if ( *(_WORD *)(88 * v2024C07 + 0x2024A8C) != v8 )
          {
            do
              ++v7;
            while ( v7 <= 3 && *(_WORD *)(2 * v7 + 88 * v2024C07 + 0x2024A8C) != v8 );
          }
          if ( v7 != 4 )
            goto _08022244;
          v9 = 0;
          v10 = v24;
          goto _08021C22;
        case 7u:
          v11 = 0;
          if ( (signed int)v2024A68 > 0 )
          {
            v12 = (_WORD *)33644784;
            v13 = 33704576;
            do
            {
              if ( *v12 )
              {
                *(_WORD *)(v13 + 46) = *v12;
                *v12 = 0;
              }
              ++v12;
              v13 += 88;
              ++v11;
            }
            while ( v11 < v2024A68 );
          }
          goto _08022244;
        case 8u:
          if ( !(sub_801A02C(3u, 0, 0) << 24) )
            goto _08021E00;
          v0 = 1;
          v3 = 0x2000000;
          break;
        case 9u:
          if ( sub_801A02C(4u, 0, 0) << 24 )
            v0 = 1;
          goto _08021E00;
        case 0xAu:
          if ( *(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x400C0 && v2024C6C & 0x80 )
          {
            v2024A60 = v2024C07;
            dp01_build_cmdbuf_x33_a_33_33(0, 1);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
          }
          goto _08021E00;
        case 0xBu:
          if ( v2024C68 & 0x29 || !(*(_DWORD *)(4 * v2024C07 + 0x2024C98) & 0x400C0) || sub_8015660(v2024C07) << 24 )
          {
            v2024A60 = v2024C07;
            dp01_build_cmdbuf_x33_a_33_33(0, 0);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
            *(_DWORD *)(4 * v2024C07 + 0x2024C98) &= 0xFFFBFF3F;
            *(_BYTE *)(20 * v2024C07 + 0x2024D68) |= 4u;
          }
          goto _08021E00;
        case 0xCu:
          if ( !(*(_BYTE *)(20 * v2024C08 + 0x2024D68) & 4)
            && v2024C08 < (unsigned int)v2024A68
            && !(*(_DWORD *)(4 * v2024C08 + 0x2024C98) & 0x400C0) )
          {
            v2024A60 = v2024C08;
            dp01_build_cmdbuf_x33_a_33_33(0, 0);
            dp01_battle_side_mark_buffer_for_execution(v2024A60);
            *(_DWORD *)(4 * v2024C08 + 0x2024C98) &= 0xFFFBFF3F;
          }
_08021E00:
          ++v201600C;
          v3 = 0x2000000;
          break;
        case 0xDu:
          v14 = 0;
          if ( (signed int)v2024A68 > 0 )
          {
            v15 = 33705128;
            v16 = (_DWORD *)33704656;
            do
            {
              if ( !*(_BYTE *)(v15 + 10) )
                *v16 &= 0xFEFFFFFF;
              v15 += 28;
              v16 += 22;
              ++v14;
            }
            while ( v14 < v2024A68 );
          }
          goto _08022244;
        case 0xEu:
          if ( v2024C6C & 0x1000 )
          {
            v2024A60 = v2024C07;
            v2024C07 = v2024C08;
            v2024C08 = v2024A60;
            v2024C6C &= 0xFFFFEFFF;
          }
          if ( gBattleMoves[12 * v2024BE8] != 127 || v2024C68 & 0x29 )
            *(_WORD *)(2 * v2024C07 + 0x2024C2C) = v2024BE8;
          v17 = gBitTable[v2024C07];
          if ( v2024C0C & (unsigned __int8)v17
            || *(_BYTE *)(v3 + 90278) & (unsigned __int8)v17
            || gBattleMoves[12 * v2024BE8] == 127 )
          {
            goto _08022244;
          }
          if ( v2024C6C & 0x2000000 )
          {
            *(_WORD *)(2 * v2024C07 + 0x2024C34) = v2024BE8;
            *(_WORD *)(2 * v2024C07 + 0x2024C4C) = v2024BE6;
          }
          else
          {
            *(_WORD *)(2 * v2024C07 + 0x2024C34) = -1;
            *(_WORD *)(2 * v2024C07 + 0x2024C4C) = -1;
          }
          if ( !(v2024C6C & (gBitTable[v2024C08] << 28)) )
            *(_BYTE *)(v2024C08 + 0x2024C5C) = v2024C07;
          if ( !(v2024C6C & 0x2000000) || v2024C68 & 0x29 )
          {
            v10 = (signed __int16 *)(2 * v2024C08 + 33705020);
            v9 = -1;
            goto _08021C22;
          }
          if ( v2024BE8 == 0xFFFF )
          {
            *(_WORD *)(2 * v2024C08 + 0x2024C3C) = -1;
          }
          else
          {
            *(_WORD *)(2 * v2024C08 + 0x2024C3C) = v2024BE6;
            if ( *(_BYTE *)(v3 + 90140) )
            {
              v10 = (signed __int16 *)(2 * v2024C08 + 33705028);
              v9 = *(_BYTE *)(v3 + 90140) & 0x3F;
_08021C22:
              *v10 = v9;
              goto _08022244;
            }
            *(_WORD *)(2 * v2024C08 + 0x2024C44) = gBattleMoves[12 * v2024BE6 + 2];
          }
_08022244:
          ++*(_BYTE *)(v3 + 90124);
          break;
        case 0xFu:
          v18 = gBitTable[v2024C07];
          if ( v2024C0C & (unsigned __int8)v18 || *(_BYTE *)(v3 + 90278) & (unsigned __int8)v18 )
            goto _08022244;
          if ( !(gBattleMoves[12 * v2024BE8 + 8] & 0x10) || !(v2024C6C & 0x2000000) )
            goto _0802215C;
          if ( v2024C07 != v2024C08 )
          {
            if ( v2024C6C & (gBitTable[v2024C08] << 28) || v2024C68 & 0x29 )
            {
_0802215C:
              if ( v2024C07 != v2024C08 )
              {
                *(_BYTE *)(2 * v2024C08 + 90284 + v3) = 0;
                *(_BYTE *)(2 * v2024C08 + 90285 + v3) = 0;
                *(_BYTE *)(4 * v2024C08 + 2 * ((unsigned int)v2024C07 >> 1) + 90368 + v3) = 0;
                *(_BYTE *)(4 * v2024C08 + 2 * ((unsigned int)v2024C07 >> 1) + 90369 + v3) = 0;
              }
            }
            else
            {
              *(_BYTE *)(2 * v2024C08 + 90284 + v3) = v2024BE8;
              *(_BYTE *)(2 * v2024C08 + 90285 + v3) = v2024BE9;
              *(_BYTE *)(4 * v2024C08 + 2 * ((unsigned int)v2024C07 >> 1) + 90368 + v3) = v2024BE8;
              *(_BYTE *)(4 * v2024C08 + 2 * ((unsigned int)v2024C07 >> 1) + 90369 + v3) = v2024BE9;
            }
          }
          goto _08022244;
        case 0x10u:
          if ( v2024C6C & 0x80000
            || !(v20239F8 & 1)
            || *(_BYTE *)(16 * v2024C07 + 0x2024D29) & 4
            || gBattleMoves[12 * v2024BE6 + 6] != 8
            || v2024C6C & 0x200 )
          {
            goto _08022244;
          }
          v19 = battle_get_per_side_status(v2024C08);
          v20 = battle_get_side_with_given_state((v19 ^ 2) & 0xFF);
          if ( *(_WORD *)(88 * v20 + 0x2024AA8) )
          {
            v2024C08 = v20;
            v2024C6C |= 0x200u;
            v201600C = 0;
            sub_8020B54();
            b_movescr_stack_push((int)*(&gUnknown_081D6BBC + gBattleMoves[12 * v2024BE6]));
            v2 = &gUnknown_081D9B2D;
            goto _0802229C;
          }
          v2024C6C |= 0x200u;
          v3 = 0x2000000;
          goto _08022244;
        default:
          break;
      }
    }
    if ( v25 == 1 && !v0 )
      *(_BYTE *)(v3 + 90124) = 17;
    if ( v25 == 2 && v26 == *(_BYTE *)(v3 + 90124) )
      *(_BYTE *)(v3 + 90124) = 17;
  }
  while ( *(_BYTE *)(v3 + 90124) != 17 && !v0 );
  if ( *(_BYTE *)(v3 + 90124) == 17 && !v0 )
  {
    v2 = (void *)(v2024C10 + 3);
_0802229C:
    v2024C10 = v2;
  }
  return v27;
}
