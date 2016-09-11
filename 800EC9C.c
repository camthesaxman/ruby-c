int __fastcall sub_800EC9C(int a1)
{
  unsigned __int8 v1; // r0@1
  int v2; // r4@1
  int v3; // r5@1
  unsigned __int8 v4; // r0@6
  signed int v5; // r3@9
  __int16 v6; // r1@11
  signed __int16 v7; // r2@11
  int v8; // r7@14
  __int16 v9; // r1@17
  signed __int16 v10; // r2@17
  unsigned int i; // r1@21
  __int16 v12; // r0@27
  signed __int16 v13; // r1@27
  int *v14; // r2@30
  unsigned __int8 v15; // r0@32
  unsigned __int8 v16; // r0@36
  unsigned __int8 v17; // r0@40
  int v19; // [sp+10h] [bp-4h]@0

  RunTasks(a1);
  AnimateSprites();
  BuildOamBuffer();
  v1 = GetMultiplayerId();
  v2 = v1;
  v20160CB = v1;
  v3 = v1 ^ 1;
  if ( v2024D1E <= 9u )
  {
    switch ( v2024D1E )
    {
      case 0u:
        if ( v20239F8 & 2 )
        {
          if ( gReceivedRemoteLinkPlayers && sub_8007ECC() << 24 )
          {
            v2000000 = 1;
            v2000001 = 1;
            sub_800E9EC();
            sub_800EAAC();
            v4 = bitmask_all_link_players_but_self();
            SendBlock(v4, (char *)0x2000000, 0x20u);
            v2024D1E = 1;
          }
        }
        else
        {
          v20239F8 |= 4u;
          v2024D1E = 8;
          sub_800EB08();
        }
        break;
      case 1u:
        if ( (GetBlockRecievedStatus() & 3) == 3 )
        {
          ResetBlockReceivedFlags();
          v5 = 0;
          if ( LOWORD(gBlockRecvBuffer[0]) == 256 )
          {
            if ( v2 )
            {
              v6 = v20239F8;
              v7 = 8;
            }
            else
            {
              v6 = v20239F8;
              v7 = 12;
            }
            v20239F8 = v6 | v7;
            v5 = 1;
          }
          v8 = v3 << 8;
          if ( !v5 )
          {
            if ( LOWORD(gBlockRecvBuffer[0]) == (unsigned __int16)word_3002C80 )
            {
              if ( v2 )
              {
                v9 = v20239F8;
                v10 = 8;
              }
              else
              {
                v9 = v20239F8;
                v10 = 12;
              }
              v20239F8 = v9 | v10;
              v5 = 1;
            }
            v8 = v3 << 8;
            if ( !v5 )
            {
              for ( i = LOWORD(gBlockRecvBuffer[0]); i <= 0x101 || v5 == v2; i = LOWORD(gBlockRecvBuffer[64 * v5]) )
              {
                if ( ++v5 > 1 )
                  break;
              }
              if ( v5 == 2 )
              {
                v12 = v20239F8;
                v13 = 12;
              }
              else
              {
                v12 = v20239F8;
                v13 = 8;
              }
              v20239F8 = v12 | v13;
            }
          }
          sub_800EB08();
          v14 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_800DE30, 0)];
          *((_WORD *)v14 + 5) = 270;
          *((_WORD *)v14 + 6) = 90;
          *((_WORD *)v14 + 9) = 0;
          *((_WORD *)v14 + 7) = v2000002 | (unsigned __int16)(v2000003 << 8);
          *((_WORD *)v14 + 8) = *(_WORD *)((char *)&gBlockRecvBuffer[0] + v8 + 2);
          goto _0800EF96;
        }
        break;
      case 2u:
        if ( sub_8007ECC() << 24 )
        {
          v15 = bitmask_all_link_players_but_self();
          SendBlock(v15, (char *)&unk_3004360, 0xC8u);
          goto _0800EF96;
        }
        break;
      case 3u:
        if ( (GetBlockRecievedStatus() & 3) == 3 )
        {
          ResetBlockReceivedFlags();
          memcpy(&unk_30045C0, &gBlockRecvBuffer[64 * v3], 200);
          goto _0800EF96;
        }
        break;
      case 4u:
        if ( sub_8007ECC() << 24 )
        {
          v16 = bitmask_all_link_players_but_self();
          SendBlock(v16, (char *)&unk_3004428, 0xC8u);
          goto _0800EF96;
        }
        break;
      case 5u:
        if ( (GetBlockRecievedStatus() & 3) == 3 )
        {
          ResetBlockReceivedFlags();
          memcpy(&unk_3004688, &gBlockRecvBuffer[64 * v3], 200);
          goto _0800EF96;
        }
        break;
      case 6u:
        if ( sub_8007ECC() << 24 )
        {
          v17 = bitmask_all_link_players_but_self();
          SendBlock(v17, (char *)&unk_30044F0, 0xC8u);
          goto _0800EF96;
        }
        break;
      case 7u:
        if ( (GetBlockRecievedStatus() & 3) == 3 )
        {
          ResetBlockReceivedFlags();
          memcpy(&unk_3004750, &gBlockRecvBuffer[64 * v3], 200);
          shedinja_something((int)&unk_30045C0);
          shedinja_something((int)&unk_3004624);
          shedinja_something((int)&unk_3004688);
          shedinja_something((int)&unk_30046EC);
          shedinja_something((int)&unk_3004750);
          shedinja_something((int)&unk_30047B4);
_0800EF96:
          ++v2024D1E;
        }
        break;
      case 8u:
        sub_800B950();
        ++v2024D1E;
        v2024D1F = 0;
        v2024D20 = 0;
        break;
      case 9u:
        if ( battle_load_something() << 24 )
        {
          dword_30042D0 = gMain[0];
          gMain[0] = (int)sub_8010824;
          SetMainCallback2((int)sub_800F808);
          if ( v20239F8 & 2 )
          {
            v202FF5E = 2048;
            v20239F8 |= 0x20u;
          }
        }
        break;
      default:
        return v19;
    }
  }
  return v19;
}
