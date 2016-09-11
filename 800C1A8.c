int __fastcall sub_800C1A8(unsigned __int8 a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int *v3; // r0@3
  int *v4; // r1@4
  int v5; // r0@4
  signed __int16 v6; // r0@5
  int *v7; // r2@9
  int v8; // r3@9
  int v9; // r12@9
  int *v10; // r4@14
  int v11; // r6@14
  unsigned __int8 v12; // r0@14
  int *v13; // r3@17
  __int16 v14; // r0@17
  __int16 v15; // r1@17
  int v16; // r0@18
  int v18; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = HIWORD(dword_3004B20[10 * a1 + 7]);
  if ( v2 <= 5 )
  {
    switch ( v2 )
    {
      case 0u:
        v3 = &dword_3004B20[10 * v1];
        *((_WORD *)v3 + 14) = 100;
        ++*((_WORD *)v3 + 15);
        break;
      case 1u:
        v4 = &dword_3004B20[10 * v1];
        v5 = *((_WORD *)v4 + 14) - 1;
        *((_WORD *)v4 + 14) = v5;
        if ( !(v5 << 16) )
        {
          v6 = *((_WORD *)v4 + 15) + 1;
          goto _0800C352;
        }
        break;
      case 2u:
        GetLinkPlayerCount_2();
        if ( IsLinkMaster() << 24 )
        {
          sub_8007F4C();
          v4 = &dword_3004B20[10 * v1];
          v6 = *((_WORD *)v4 + 15) + 1;
        }
        else
        {
          v4 = &dword_3004B20[10 * v1];
          v6 = *((_WORD *)v4 + 15) + 1;
        }
        goto _0800C352;
      case 3u:
        v7 = &dword_3004B20[10 * v1];
        v8 = *((_WORD *)v7 + 19);
        v9 = *((_WORD *)v7 + 18);
        if ( v8 != v9 )
        {
          if ( *((_WORD *)v7 + 17) )
          {
            --*((_WORD *)v7 + 17);
          }
          else
          {
            if ( v8 > v9 && v8 == *((_WORD *)v7 + 16) )
            {
              *((_WORD *)v7 + 16) = 0;
              *((_WORD *)v7 + 19) = 0;
            }
            v10 = &dword_3004B20[10 * v1];
            v11 = ((*(_BYTE *)(*((_WORD *)v10 + 19) + 0x2014004) | (*(_BYTE *)(*((_WORD *)v10 + 19) + 0x2014005) << 8))
                 + 8) & 0xFFFF;
            v12 = bitmask_all_link_players_but_self();
            SendBlock(v12, (char *)(*((_WORD *)v10 + 19) + 33636352), v11);
            ++*((_WORD *)v10 + 15);
          }
        }
        break;
      case 4u:
        if ( sub_8007ECC() << 24 )
        {
          v13 = &dword_3004B20[10 * v1];
          v14 = *(_BYTE *)(*((_WORD *)v13 + 19) + 0x2014004);
          v15 = *(_BYTE *)(*((_WORD *)v13 + 19) + 0x2014005) << 8;
          *((_WORD *)v13 + 17) = 1;
          *((_WORD *)v13 + 19) += (v14 | v15) + 8;
          *((_WORD *)v13 + 15) = 3;
        }
        break;
      case 5u:
        v4 = &dword_3004B20[10 * v1];
        v16 = *((_WORD *)v4 + 17) - 1;
        *((_WORD *)v4 + 17) = v16;
        if ( !(v16 << 16) )
        {
          *((_WORD *)v4 + 17) = 1;
          v6 = 3;
_0800C352:
          *((_WORD *)v4 + 15) = v6;
        }
        break;
      default:
        return v18;
    }
  }
  return v18;
}
