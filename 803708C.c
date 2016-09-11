signed int sub_803708C()
{
  signed int v0; // r8@1
  signed int v1; // r9@1
  signed int v2; // r9@7
  int v3; // r0@10
  int v4; // r10@10
  int v5; // r5@12
  char v6; // r0@14
  int v7; // r4@19
  unsigned int v8; // r2@20
  unsigned int v9; // r3@21
  int v10; // r1@28
  int v11; // r3@57
  int v13; // [sp+0h] [bp-28h]@1

  v13 = 0;
  v0 = 0;
  v1 = 0;
  do
  {
    if ( GetMonData((char *)&unk_30045C0 + 100 * v1, 57)
      && GetMonData((char *)&unk_30045C0 + 100 * v1, 65)
      && GetMonData((char *)&unk_30045C0 + 100 * v1, 65) != 412 )
    {
      v13 = (v13 + 1) & 0xFF;
    }
    ++v1;
  }
  while ( v1 <= 5 );
  v2 = 0;
  do
  {
    if ( !v2 || v13 <= v2016A2C - v2 + 1 )
    {
      v3 = *(_WORD *)(2 * v2 + 0x2016A24);
      v4 = *(_WORD *)(2 * v2 + 0x2016A24);
      if ( *(_WORD *)(2 * v2 + 0x2016A24) )
      {
        if ( *(&gItemEffectTable + v3 - 13) )
        {
          v5 = (int)*(&gItemEffectTable + v3 - 13);
          if ( v3 == 175 )
            v5 = 33721770;
          v6 = ai_identify_item_effect(v4, v5);
          *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160D8) = v6;
          if ( (unsigned int)*(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160D8) - 1 <= 5 )
          {
            switch ( *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160D8) )
            {
              case 1:
                if ( *(_WORD *)(88 * v2024A60 + 0x2024AA8) >= (unsigned int)*(_WORD *)(88 * v2024A60 + 0x2024AAC) >> 2
                  || !*(_WORD *)(88 * v2024A60 + 0x2024AA8) )
                {
                  break;
                }
                goto _08037450;
              case 2:
                v7 = sub_803F1DC(v4, 4, 4) & 0xFF;
                if ( !v7 )
                  break;
                v8 = *(_WORD *)(88 * v2024A60 + 0x2024AA8);
                if ( !*(_WORD *)(88 * v2024A60 + 0x2024AA8) )
                  break;
                v9 = *(_WORD *)(88 * v2024A60 + 0x2024AAC);
                if ( v8 >= v9 >> 2 && (signed int)(v9 - v8) <= *(_BYTE *)(v5 + v7) )
                  break;
                goto _08037496;
              case 3:
                *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) = 0;
                if ( *(_BYTE *)(v5 + 3) & 0x20 && *(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 7 )
                {
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 0x20u;
                  v0 = 1;
                }
                if ( *(_BYTE *)(v5 + 3) & 0x10 )
                {
                  v10 = *(_DWORD *)(88 * v2024A60 + 0x2024ACC);
                  if ( v10 & 8 || v10 & 0x80 )
                  {
                    *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 0x10u;
                    v0 = 1;
                  }
                }
                if ( *(_BYTE *)(v5 + 3) & 8 && *(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 0x10 )
                {
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 8u;
                  v0 = 1;
                }
                if ( *(_BYTE *)(v5 + 3) & 4 && *(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 0x20 )
                {
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 4u;
                  v0 = 1;
                }
                if ( *(_BYTE *)(v5 + 3) & 2 && *(_DWORD *)(88 * v2024A60 + 0x2024ACC) & 0x40 )
                {
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 2u;
                  v0 = 1;
                }
                if ( !(*(_BYTE *)(v5 + 3) & 1) || !(*(_DWORD *)(88 * v2024A60 + 0x2024AD0) & 7) )
                  break;
                *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 1u;
                v0 = 1;
                goto _080374AE;
              case 4:
                *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) = 0;
                if ( !*(_BYTE *)(28 * v2024A60 + 0x2024CBE) )
                  break;
                if ( *(_BYTE *)v5 & 0xF )
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 1u;
                if ( *(_BYTE *)(v5 + 1) & 0xF0 )
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 2u;
                if ( *(_BYTE *)(v5 + 1) & 0xF )
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 4u;
                if ( *(_BYTE *)(v5 + 2) & 0xF )
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 8u;
                if ( *(_BYTE *)(v5 + 2) & 0xF0 )
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 0x20u;
                if ( *(_BYTE *)v5 & 0x30 )
                  *(_BYTE *)(((unsigned int)v2024A60 >> 1) + 0x20160DA) |= 0x80u;
_08037450:
                v0 = 1;
                goto _080374AE;
              case 5:
                v11 = (unsigned __int8)battle_side_get_owner(v2024A60);
                if ( !*(_BYTE *)(28 * v2024A60 + 0x2024CBE) || *(_BYTE *)(12 * v11 + 0x2024C82) )
                  break;
_08037496:
                v0 = 1;
                goto _080374AE;
              case 6:
                return 0;
              default:
                break;
            }
          }
          if ( v0 )
          {
_080374AE:
            dp01_build_cmdbuf_x21_a_bb(1u, 1, 0);
            *(_BYTE *)(2 * ((unsigned int)v2024A60 >> 1) + 0x20160D4) = v4;
            *(_WORD *)(2 * v2 + 0x2016A24) = 0;
            return v0;
          }
        }
      }
    }
    ++v2;
  }
  while ( v2 <= 3 );
  return 0;
}
