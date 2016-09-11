int sub_8020004()
{
  signed int v0; // r6@1
  int v1; // r8@1
  signed int v2; // r5@7
  signed int v3; // r7@7
  int v4; // r0@12
  int v5; // r4@13
  int v6; // r2@18
  signed int v7; // r4@19
  int v8; // r0@19
  int v9; // r0@23
  int v10; // r0@28
  int v11; // r4@29
  int v12; // r2@32
  signed __int16 v13; // r7@52
  int v14; // r0@72
  int v16; // [sp+1Ch] [bp-4h]@0

  v0 = 0;
  v2024C09 = sub_8015150(*(_BYTE *)(v2024C10 + 1));
  v1 = *(_BYTE *)(((v2024C09 & 2u) << 24 >> 25) + 0x2024DEA);
  if ( v201600F <= 6u )
  {
    switch ( v201600F )
    {
      case 0u:
        if ( (unsigned __int8)battle_side_get_owner(v2024C09) != 1 || v20239F8 & 0x982 )
        {
          v201600F = 6;
        }
        else
        {
          ++v201600F;
          v2016113 |= LOBYTE(gBitTable[*(_WORD *)(2 * v2024C09 + 0x2024A6A)]);
        }
        return v16;
      case 1u:
        v2 = 0;
        v3 = 0;
        do
        {
          if ( GetMonData((char *)&unk_3004360 + 100 * v3, 11) && GetMonData((char *)&unk_3004360 + 100 * v3, 57) )
          {
            if ( gBitTable[v3] & v1 )
              ++v2;
            v4 = (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v3, 12);
            if ( v4 == 175 )
              v5 = v2028DBC;
            else
              v5 = itemid_get_x12(v4) & 0xFF;
            if ( v5 == 25 )
              ++v0;
          }
          ++v3;
        }
        while ( v3 <= 5 );
        v6 = *((_BYTE *)&gBaseStats + 28 * *(_WORD *)(88 * v2024C09 + 0x2024A80) + 9);
        if ( v0 )
        {
          v7 = (unsigned int)(*(_BYTE *)(88 * v2024C09 + 0x2024AAA) * v6 / 7 << 16) >> 17;
          v8 = v7 / v2;
          v201605C = v7 / v2;
          if ( !(v8 << 16) )
            v201605C = 1;
          v2024DEE = v7 / v0;
          if ( !(v7 / v0 << 16) )
            v2024DEE = 1;
        }
        else
        {
          v9 = (*(_BYTE *)(88 * v2024C09 + 0x2024AAA) * v6 / 7 & 0xFFFF) / v2;
          v201605C = v9;
          if ( !(v9 << 16) )
            v201605C = 1;
          v2024DEE = 0;
        }
        ++v201600F;
        v2016018 = 0;
        v201605F = v1;
        goto _08020216;
      case 2u:
_08020216:
        if ( v2024A64 )
          return v16;
        v10 = (unsigned __int16)GetMonData((char *)&unk_3004360 + 100 * v2016018, 12);
        if ( v10 == 175 )
          v11 = v2028DBC;
        else
          v11 = itemid_get_x12(v10) & 0xFF;
        if ( v11 != 25 )
        {
          v12 = v201605F & 1;
          if ( !(v201605F & 1) )
          {
            v201605F >>= 1;
_080202C8:
            v201600F = 5;
            v2024BEC = v12;
            return v16;
          }
        }
        if ( GetMonData((char *)&unk_3004360 + 100 * v2016018, 56) == 100 )
        {
          v12 = 0;
          v201605F >>= 1;
          goto _080202C8;
        }
        if ( !(v20239F8 & 8) && v2024AA8 && !v201601B )
        {
          sub_80325B8();
          sub_8075474(353);
          ++v201601B;
        }
        if ( GetMonData((char *)&unk_3004360 + 100 * v2016018, 57) )
        {
          if ( v201605F & 1 )
            v2024BEC = v201605C;
          else
            v2024BEC = 0;
          if ( v11 == 25 )
            v2024BEC += v2024DEE;
          if ( v11 == 40 )
            v2024BEC = 150 * v2024BEC / 100;
          if ( v20239F8 & 8 )
            v2024BEC = 150 * v2024BEC / 100;
          if ( sub_8040AA4((char *)&unk_3004360 + 100 * v2016018) << 24 )
          {
            v2024BEC = 150 * v2024BEC / 100;
            v13 = 330;
          }
          else
          {
            v13 = 329;
          }
          if ( v20239F8 & 1 )
          {
            if ( v2024A6E == v2016018 && !(v2024C0C & 4) || v2024C0C & 1 )
              v20160A2 = 2;
            else
              v20160A2 = 0;
          }
          else
          {
            v20160A2 = 0;
          }
          byte_30041C0[0] = -3;
          byte_30041C1 = 4;
          LOBYTE(word_30041C2) = v20160A2;
          HIBYTE(word_30041C2) = v2016018;
          byte_30041C4 = -1;
          byte_3004290[0] = -3;
          byte_3004291 = 0;
          word_3004292 = v13;
          byte_3004294 = -1;
          byte_30042B0[0] = -3;
          byte_30042B1 = 1;
          byte_30042B2 = 4;
          byte_30042B3 = 5;
          byte_30042B4 = v2024BEC;
          byte_30042B5 = (unsigned __int16)(v2024BEC & 0xFF00) >> 8;
          byte_30042B6 = (v2024BEC & 0xFF0000) >> 16;
          byte_30042B7 = v2024BEF;
          byte_30042B8 = -1;
          b_std_message(13, v20160A2);
          sub_803FE70((char *)&unk_3004360 + 100 * v2016018, *(_WORD *)(88 * v2024C09 + 0x2024A80));
        }
        v201605F >>= 1;
_08020618:
        ++v201600F;
        break;
      case 3u:
        if ( v2024A64 )
          return v16;
        *(_BYTE *)((v20160A2 << 9) + 0x2024260) = v2024A64;
        if ( GetMonData((char *)&unk_3004360 + 100 * v2016018, 57)
          && GetMonData((char *)&unk_3004360 + 100 * v2016018, 56) != 100 )
        {
          v2017180 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 58);
          v2017182 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 59);
          v2017184 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 60);
          v2017186 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 61);
          v2017188 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 62);
          v201718A = GetMonData((char *)&unk_3004360 + 100 * v2016018, 63);
          v2024A60 = v20160A2;
          dp01_build_cmdbuf_x19_a_bb(0, v2016018, v2024BEC);
          dp01_battle_side_mark_buffer_for_execution(v2024A60);
        }
        goto _08020618;
      case 4u:
        if ( !v2024A64 )
        {
          v2024A60 = v20160A2;
          if ( *(_BYTE *)((v20160A2 << 9) + 0x2024260) != 33 || *(_BYTE *)((v20160A2 << 9) + 0x2024261) != 11 )
          {
            v2024BEC = 0;
          }
          else
          {
            if ( v20239F8 & 8 )
            {
              v14 = *(_WORD *)(2 * v20160A2 + 0x2024A6A);
              if ( v14 == v2016018 )
                sub_80324F8((char *)&unk_3004360 + 100 * v14, v20160A2);
            }
            byte_30041C0[0] = -3;
            byte_30041C1 = 4;
            LOBYTE(word_30041C2) = v2024A60;
            HIBYTE(word_30041C2) = v2016018;
            byte_30041C4 = -1;
            byte_3004290[0] = -3;
            byte_3004291 = 1;
            LOBYTE(word_3004292) = 1;
            HIBYTE(word_3004292) = 3;
            byte_3004294 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 56);
            byte_3004295 = -1;
            b_movescr_stack_push_cursor();
            byte_3004324 |= gBitTable[v2016018];
            v2024C10 = &gUnknown_081D8EF3;
            v2024BEC = *(_BYTE *)((v2024A60 << 9) + 0x2024262) | (*(_BYTE *)((v2024A60 << 9) + 0x2024263) << 8);
            sub_803FCD4((char *)&unk_3004360 + 100 * v2016018, 0);
            if ( v2024A6A == v2016018 && v2024AA8 )
            {
              v2024AAA = GetMonData((char *)&unk_3004360 + 100 * v2016018, 56);
              v2024AA8 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 57);
              v2024AAC = GetMonData((char *)&unk_3004360 + 100 * v2016018, 58);
              v2024A82 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 59);
              v2024A84 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 60);
              v2024A86 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 61);
              v2024A86 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 61);
              v2024A88 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 62);
              v2024A8A = GetMonData((char *)&unk_3004360 + 100 * v2016018, 63);
            }
            if ( v2024A6E == v2016018 && v2024B58 && v20239F8 & 1 )
            {
              v2024B5A = GetMonData((char *)&unk_3004360 + 100 * v2016018, 56);
              v2024B58 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 57);
              v2024B5C = GetMonData((char *)&unk_3004360 + 100 * v2016018, 58);
              v2024B32 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 59);
              v2024B34 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 60);
              v2024B36 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 61);
              v2024B36 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 61);
              v2024B38 = GetMonData((char *)&unk_3004360 + 100 * v2016018, 62);
            }
          }
          v201600F = 5;
        }
        return v16;
      case 5u:
        if ( v2024BEC )
        {
          v201600F = 3;
        }
        else
        {
          ++v2016018;
          if ( v2016018 > 5u )
            v201600F = 6;
          else
            v201600F = 2;
        }
        return v16;
      case 6u:
        if ( !v2024A64 )
        {
          *(_WORD *)(88 * v2024C09 + 0x2024AAE) = v2024A64;
          *(_BYTE *)(88 * v2024C09 + 0x2024AA0) = 0;
          v2024C10 += 2;
        }
        return v16;
      default:
        return v16;
    }
  }
  return v16;
}
