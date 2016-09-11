unsigned int sub_8015DFC()
{
  int v0; // r9@1
  signed int v1; // r12@1
  unsigned int v2; // r0@9
  signed int i; // r5@11
  int j; // r5@13
  int k; // r4@14
  unsigned __int8 *v6; // r6@22
  int v7; // r4@23
  int v8; // r0@24
  unsigned __int8 v9; // r0@26
  unsigned __int8 *v10; // r7@30
  int v11; // r4@31
  int v12; // r0@32
  unsigned __int8 v13; // r0@34
  unsigned __int8 *v14; // r7@38
  int v15; // r4@39
  int v16; // r0@40
  unsigned __int8 v17; // r0@42
  unsigned __int8 *v18; // r5@47
  int v19; // r4@48
  int v20; // r0@49
  unsigned __int8 v21; // r0@51
  int v22; // r4@56
  int v23; // r0@58
  unsigned __int8 v24; // r0@61
  int v25; // r0@67
  char v26; // r1@69
  void *v27; // r0@74
  int v28; // r0@77
  void *v29; // r0@78
  void **v30; // r3@80
  int v31; // r0@83
  void *v32; // r0@84
  int v33; // r0@89
  void *v34; // r0@90

  v0 = 0;
  v2024C07 = 0;
  v1 = 0x2000000;
  if ( v2024A68 > 0u && v2024C0C & 1 )
  {
    do
      ++v2024C07;
    while ( v2024C07 < (unsigned int)v2024A68 && v2024C0C & gBitTable[v2024C07] );
  }
  v2024C08 = 0;
  if ( v2024A68 && v2024C0C & 1 )
  {
    do
      ++v2024C08;
    while ( v2024C08 < (unsigned int)v2024A68 && v2024C0C & gBitTable[v2024C08] );
  }
  do
  {
    v2 = *(_BYTE *)(v1 + 90126);
    if ( v2 <= 0xA )
    {
      switch ( v2 )
      {
        case 0u:
          for ( i = 0; i < v2024A68; ++i )
            *(_BYTE *)(i + 33704570) = i;
          for ( j = 0; j < v2024A68 - 1; ++j )
          {
            for ( k = j + 1; k < v2024A68; ++k )
            {
              if ( b_first_side(*(_BYTE *)(j + 33704570), *(_BYTE *)(k + 33704570), 0) << 24 )
                sub_8012FBC((unsigned __int8)j, (unsigned __int8)k);
            }
          }
          ++v201600E;
          v20160FC = 0;
          v1 = 0x2000000;
          goto _08015F74;
        case 1u:
_08015F74:
          if ( (unsigned int)*(_BYTE *)(v1 + 90364) > 1 )
            goto _08016236;
          v6 = (unsigned __int8 *)(v1 + 90364);
          while ( 1 )
          {
            v7 = *v6;
            v2024C07 = v7;
            v2024A60 = v7;
            if ( *(_WORD *)(2 * v7 + 0x2024C7A) & 1 )
            {
              v8 = *(_BYTE *)(12 * v7 + 0x2024C80) - 1;
              *(_BYTE *)(12 * v7 + 0x2024C80) = v8;
              if ( !(v8 << 24) )
              {
                *(_WORD *)(2 * v7 + 0x2024C7A) &= 0xFFFEu;
                b_call_bc_move_exec(&gUnknown_081D9030);
                byte_30041C0[0] = -3;
                byte_30041C1 = 2;
                byte_30041C2 = 115;
                byte_30041C3 = 0;
                byte_30041C4 = -1;
                v0 = (v0 + 1) & 0xFF;
              }
            }
            v9 = *v6 + 1;
            *v6 = v9;
            v1 = 0x2000000;
            if ( v0 )
              return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
            if ( v9 > 1u )
              goto _08016236;
          }
        case 2u:
          if ( (unsigned int)*(_BYTE *)(v1 + 90364) > 1 )
            goto _08016182;
          v10 = (unsigned __int8 *)(v1 + 90364);
          while ( 1 )
          {
            v11 = *v10;
            v2024C07 = v11;
            v2024A60 = v11;
            if ( *(_WORD *)(2 * v11 + 0x2024C7A) & 2 )
            {
              v12 = *(_BYTE *)(12 * v11 + 0x2024C81) - 1;
              *(_BYTE *)(12 * v11 + 0x2024C81) = v12;
              if ( !(v12 << 24) )
              {
                *(_WORD *)(2 * v11 + 0x2024C7A) &= 0xFFFDu;
                b_call_bc_move_exec(&gUnknown_081D9030);
                v2024D23 = v11;
                byte_30041C0[0] = -3;
                byte_30041C1 = 2;
                byte_30041C2 = 113;
                byte_30041C3 = 0;
                byte_30041C4 = -1;
                v0 = (v0 + 1) & 0xFF;
              }
            }
            v13 = *v10 + 1;
            *v10 = v13;
            v1 = 0x2000000;
            if ( v0 )
              return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
            if ( v13 > 1u )
              goto _08016182;
          }
        case 3u:
          if ( (unsigned int)*(_BYTE *)(v1 + 90364) > 1 )
            goto _08016182;
          v14 = (unsigned __int8 *)(v1 + 90364);
          do
          {
            v15 = *v14;
            v2024C07 = v15;
            v2024A60 = v15;
            if ( *(_BYTE *)(12 * v15 + 0x2024C82) )
            {
              v16 = *(_BYTE *)(12 * v15 + 0x2024C82) - 1;
              *(_BYTE *)(12 * v15 + 0x2024C82) = v16;
              if ( !(v16 << 24) )
              {
                *(_WORD *)(2 * v15 + 0x2024C7A) &= 0xFEFFu;
                b_call_bc_move_exec(&gUnknown_081D9030);
                v2024D23 = v15;
                byte_30041C0[0] = -3;
                byte_30041C1 = 2;
                byte_30041C2 = 54;
                byte_30041C3 = 0;
                byte_30041C4 = -1;
                v0 = (v0 + 1) & 0xFF;
              }
            }
            v17 = *v14 + 1;
            *v14 = v17;
            v1 = 0x2000000;
            if ( v0 )
              return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
          }
          while ( v17 <= 1u );
_08016182:
          if ( v0 )
            return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
          ++*(_BYTE *)(v1 + 90126);
          *(_BYTE *)(v1 + 90364) = 0;
          break;
        case 4u:
          if ( (unsigned int)*(_BYTE *)(v1 + 90364) > 1 )
            goto _08016236;
          v18 = (unsigned __int8 *)(v1 + 90364);
          do
          {
            v19 = *v18;
            v2024C07 = v19;
            v2024A60 = v19;
            if ( *(_WORD *)(2 * v19 + 0x2024C7A) & 0x20 )
            {
              v20 = *(_BYTE *)(12 * v19 + 0x2024C87) - 1;
              *(_BYTE *)(12 * v19 + 0x2024C87) = v20;
              if ( !(v20 << 24) )
              {
                *(_WORD *)(2 * v19 + 0x2024C7A) &= 0xFFDFu;
                b_call_bc_move_exec(&gUnknown_081D9041);
                v0 = (v0 + 1) & 0xFF;
              }
            }
            v21 = *v18 + 1;
            *v18 = v21;
            v1 = 0x2000000;
            if ( v0 )
              return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
          }
          while ( v21 <= 1u );
_08016236:
          if ( v0 )
            return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
          ++*(_BYTE *)(v1 + 90126);
          *(_BYTE *)(v1 + 90364) = 0;
          break;
        case 5u:
          if ( *(_BYTE *)(v1 + 90364) >= (unsigned int)v2024A68 )
            goto _080162E8;
          v22 = v1 + 90364;
          do
          {
            v2024A60 = *(_BYTE *)(*(_BYTE *)v22 + 0x2024A7A);
            if ( *(_BYTE *)(v2024A60 + 0x2024DDC) )
            {
              v23 = *(_BYTE *)(v2024A60 + 0x2024DDC) - 1;
              *(_BYTE *)(v2024A60 + 0x2024DDC) = v23;
              if ( !(v23 << 24) )
              {
                if ( *(_WORD *)(88 * v2024A60 + 0x2024AA8) )
                {
                  v2024C08 = v2024A60;
                  b_call_bc_move_exec(&gUnknown_081D939A);
                  v0 = (v0 + 1) & 0xFF;
                }
              }
            }
            v24 = *(_BYTE *)v22 + 1;
            *(_BYTE *)v22 = v24;
            v1 = 0x2000000;
            if ( v0 )
              return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
          }
          while ( v24 < (unsigned int)v2024A68 );
_080162E8:
          if ( v0 )
            return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
          ++*(_BYTE *)(v1 + 90126);
          break;
        case 6u:
          if ( !(v2024DB8 & 7) )
            goto _080164FE;
          if ( v2024DB8 & 4 )
          {
            v26 = v2024DB8 & 2;
            if ( v2024DB8 & 2 )
              goto _0801638A;
          }
          else
          {
            v25 = v2024DE4 - 1;
            --v2024DE4;
            if ( !(v25 << 24) )
            {
              v2024DB8 &= 0xFFFCu;
              v2024D23 = 2;
              goto _0801639C;
            }
            v26 = v2024DB8 & 2;
            if ( v2024DB8 & 2 )
            {
_0801638A:
              v2024D23 = 1;
              goto _0801639C;
            }
          }
          v2024D23 = v26;
_0801639C:
          v27 = &gUnknown_081D8F62;
_080164EA:
          b_call_bc_move_exec(v27);
          v0 = (v0 + 1) & 0xFF;
_080164FE:
          ++v201600E;
          v1 = 0x2000000;
          break;
        case 7u:
          if ( !(v2024DB8 & 0x18) )
            goto _080164FE;
          if ( v2024DB8 & 0x10 || (v28 = v2024DE4 - 1, --v2024DE4, v28 << 24) )
          {
            v29 = &gUnknown_081D8F7D;
          }
          else
          {
            v2024DB8 &= 0xFFF7u;
            v29 = &gUnknown_081D8FFF;
          }
          v2024C10 = v29;
          v30 = (void **)33704976;
          v20160A4 = 12;
          v2024D23 = 0;
          goto _080164E8;
        case 8u:
          if ( v2024DB8 & 0x60 )
          {
            if ( v2024DB8 & 0x40 || (v31 = v2024DE4 - 1, --v2024DE4, v31 << 24) )
            {
              v32 = &gUnknown_081D9008;
            }
            else
            {
              v2024DB8 &= 0xFFDFu;
              v32 = &gUnknown_081D9016;
            }
            v2024C10 = v32;
            b_call_bc_move_exec(v32);
            v0 = (v0 + 1) & 0xFF;
          }
          goto _080164FE;
        case 9u:
          if ( !(v2024DB8 & 0x80) )
            goto _080164FE;
          v33 = v2024DE4 - 1;
          --v2024DE4;
          if ( v33 << 24 )
          {
            v34 = &gUnknown_081D8F7D;
          }
          else
          {
            v2024DB8 &= 0xFF7Fu;
            v34 = &gUnknown_081D8FFF;
          }
          v2024C10 = v34;
          v30 = (void **)33704976;
          v20160A4 = 13;
          v2024D23 = 1;
_080164E8:
          v27 = *v30;
          goto _080164EA;
        case 0xAu:
          v0 = (v0 + 1) & 0xFF;
          break;
        default:
          break;
      }
    }
  }
  while ( !v0 );
  return (-(dword_30042D4 ^ (unsigned int)sub_8011E8C) | dword_30042D4 ^ (unsigned int)sub_8011E8C) >> 31;
}
