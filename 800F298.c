int sub_800F298()
{
  unsigned __int8 v0; // r0@1
  signed int v1; // r6@1
  unsigned __int8 v2; // r0@5
  signed int v3; // r4@7
  __int16 v4; // r1@9
  signed __int16 v5; // r2@9
  signed int v6; // r2@13
  int *v7; // r1@13
  __int16 v8; // r1@18
  signed __int16 v9; // r2@18
  __int16 v10; // r0@30
  signed __int16 v11; // r1@30
  unsigned __int8 v12; // r0@33
  int *v13; // r1@33
  int *v14; // r2@33
  char *v15; // r3@33
  void *v16; // r6@33
  signed int v17; // r4@33
  signed int v18; // r0@34
  __int16 v19; // r1@41
  __int16 v20; // r1@42
  int v21; // r0@48
  unsigned __int8 v22; // r0@50
  int v23; // r4@52
  int v24; // r8@52
  int *v25; // r5@52
  int v26; // r7@52
  signed int v27; // r0@54
  void *v28; // r0@59
  signed int v29; // r2@65
  signed int v30; // r2@72
  unsigned __int8 v31; // r0@83
  signed int v32; // r4@85
  int v33; // r8@85
  int *v34; // r5@85
  int v35; // r7@85
  signed int v36; // r0@87
  void *v37; // r0@92
  signed int v38; // r2@98
  signed int v39; // r2@105
  int v41; // [sp+14h] [bp-4h]@0

  v0 = GetMultiplayerId();
  v1 = v0;
  v20160CB = v0;
  RunTasks(33644747);
  AnimateSprites();
  BuildOamBuffer();
  if ( v2024D1E > 7u )
    return v41;
  switch ( v2024D1E )
  {
    case 0u:
      if ( gReceivedRemoteLinkPlayers && sub_8007ECC() << 24 )
      {
        v2000000 = 1;
        v2000001 = 1;
        sub_800E9EC();
        sub_800EAAC();
        v2 = bitmask_all_link_players_but_self();
        SendBlock(v2, (char *)0x2000000, 0x20u);
        goto _0800F770;
      }
      return v41;
    case 1u:
      if ( (GetBlockRecievedStatus() & 0xF) != 15 )
        return v41;
      ResetBlockReceivedFlags();
      v3 = 0;
      if ( LOWORD(gBlockRecvBuffer[0]) == 256 )
      {
        if ( v1 )
        {
          v4 = v20239F8;
          v5 = 8;
        }
        else
        {
          v4 = v20239F8;
          v5 = 12;
        }
        v20239F8 = v4 | v5;
        v3 = 1;
      }
      if ( v3 )
        goto _0800F41C;
      v6 = 0;
      v7 = gBlockRecvBuffer;
      do
      {
        v7 += 64;
        ++v6;
      }
      while ( v6 <= 3 && LOWORD(gBlockRecvBuffer[0]) == *(_WORD *)v7 );
      if ( v6 == 4 )
      {
        if ( v1 )
        {
          v8 = v20239F8;
          v9 = 8;
        }
        else
        {
          v8 = v20239F8;
          v9 = 12;
        }
        v20239F8 = v8 | v9;
        v3 = 1;
      }
      if ( v3 )
        goto _0800F41C;
      if ( LOWORD(gBlockRecvBuffer[0]) != 257 )
        goto _0800F3D6;
_0800F3F6:
      if ( v3 == v1 || v3 >= v1 )
      {
_0800F3D6:
        while ( (unsigned int)LOWORD(gBlockRecvBuffer[64 * v3]) <= 0x101 || v3 == v1 )
        {
          if ( ++v3 > 3 )
            break;
          if ( LOWORD(gBlockRecvBuffer[64 * v3]) == 257 )
            goto _0800F3F6;
        }
      }
      if ( v3 == 4 )
      {
        v10 = v20239F8;
        v11 = 12;
      }
      else
      {
        v10 = v20239F8;
        v11 = 8;
      }
      v20239F8 = v10 | v11;
_0800F41C:
      sub_800EB08();
      memcpy(33673216, &unk_3004360, 300);
      v12 = CreateTask(sub_800DE30, 0);
      v13 = &dword_3004B20[10 * v12];
      *((_WORD *)v13 + 5) = 270;
      *((_WORD *)v13 + 6) = 90;
      *((_WORD *)v13 + 9) = 0;
      *((_WORD *)v13 + 7) = 0;
      *((_WORD *)v13 + 8) = 0;
      v14 = &dword_3004B20[10 * v12];
      v15 = (char *)gBlockRecvBuffer + 2;
      v16 = &gLinkPlayers;
      v17 = 3;
      while ( 1 )
      {
        v18 = *((_WORD *)v16 + 12);
        if ( v18 == 1 )
          break;
        if ( v18 > 1 )
        {
          if ( v18 != 2 )
          {
            if ( v18 != 3 )
              goto _0800F4C4;
            v20 = (*(_WORD *)v15 & 0x3F) << 6;
            goto _0800F4BE;
          }
          v19 = (*(_WORD *)v15 & 0x3F) << 6;
        }
        else
        {
          if ( *((_WORD *)v16 + 12) )
            goto _0800F4C4;
          v19 = *(_WORD *)v15 & 0x3F;
        }
        *((_WORD *)v14 + 7) |= v19;
_0800F4C4:
        v15 += 256;
        v16 = (char *)v16 + 28;
        if ( --v17 < 0 )
        {
          v21 = ZeroPlayerPartyMons();
          ZeroEnemyPartyMons(v21);
          ++v2024D1E;
          goto _0800F4DE;
        }
      }
      v20 = *(_WORD *)v15 & 0x3F;
_0800F4BE:
      *((_WORD *)v14 + 8) |= v20;
      goto _0800F4C4;
    case 2u:
_0800F4DE:
      if ( !(sub_8007ECC() << 24) )
        return v41;
      v22 = bitmask_all_link_players_but_self();
      SendBlock(v22, (char *)0x201D000, 0xC8u);
      goto _0800F770;
    case 3u:
      if ( (GetBlockRecievedStatus() & 0xF) != 15 )
        return v41;
      ResetBlockReceivedFlags();
      v23 = 0;
      v24 = 28 * v1;
      v25 = gBlockRecvBuffer;
      v26 = 0;
      while ( 1 )
      {
        if ( v23 == v1 )
        {
          v27 = *(_WORD *)((char *)&gLinkPlayers + v26 + 24);
          if ( v27 <= 2 )
          {
            if ( v27 >= 1 )
            {
              v28 = &unk_300448C;
            }
            else
            {
              if ( *(_WORD *)((char *)&gLinkPlayers + v26 + 24) )
                goto _0800F5E2;
_0800F548:
              v28 = &unk_3004360;
            }
            goto _0800F5C8;
          }
          if ( v27 == 3 )
            goto _0800F548;
          goto _0800F5E2;
        }
        if ( *(_WORD *)((char *)&gLinkPlayers + v26 + 24) & 1 )
        {
          if ( !(*(_WORD *)((char *)&gLinkPlayers + v24 + 24) & 1) )
          {
_0800F5B0:
            v30 = *(_WORD *)((char *)&gLinkPlayers + v26 + 24);
            if ( v30 <= 2 )
            {
              if ( v30 >= 1 )
              {
                memcpy(&unk_30046EC, v25, 200);
                goto _0800F5E2;
              }
              if ( *(_WORD *)((char *)&gLinkPlayers + v26 + 24) )
                goto _0800F5E2;
_0800F5C6:
              v28 = &unk_30045C0;
_0800F5C8:
              memcpy(v28, v25, 200);
              goto _0800F5E2;
            }
            if ( v30 == 3 )
              goto _0800F5C6;
            goto _0800F5E2;
          }
        }
        else if ( *(_WORD *)((char *)&gLinkPlayers + v24 + 24) & 1 )
        {
          goto _0800F5B0;
        }
        v29 = *(_WORD *)((char *)&gLinkPlayers + v26 + 24);
        if ( v29 <= 2 )
        {
          if ( v29 >= 1 )
          {
            v28 = &unk_300448C;
          }
          else
          {
            if ( *(_WORD *)((char *)&gLinkPlayers + v26 + 24) )
              goto _0800F5E2;
_0800F5A0:
            v28 = &unk_3004360;
          }
          goto _0800F5C8;
        }
        if ( v29 == 3 )
          goto _0800F5A0;
_0800F5E2:
        v25 += 64;
        v26 += 28;
        if ( ++v23 > 3 )
          goto _0800F770;
      }
    case 4u:
      if ( !(sub_8007ECC() << 24) )
        return v41;
      v31 = bitmask_all_link_players_but_self();
      SendBlock(v31, (char *)0x201D0C8, 0x64u);
      goto _0800F770;
    case 5u:
      if ( (GetBlockRecievedStatus() & 0xF) != 15 )
        return v41;
      ResetBlockReceivedFlags();
      v32 = 0;
      v33 = 28 * v1;
      v34 = gBlockRecvBuffer;
      v35 = 0;
      break;
    case 6u:
      sub_800B950();
      ++v2024D1E;
      v2024D1F = 0;
      v2024D20 = 0;
      return v41;
    case 7u:
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
      return v41;
    default:
      return v41;
  }
  do
  {
    if ( v32 == v1 )
    {
      v36 = *(_WORD *)((char *)&gLinkPlayers + v35 + 24);
      if ( v36 > 2 )
      {
        if ( v36 != 3 )
          goto _0800F6FA;
_0800F660:
        v37 = &unk_3004428;
      }
      else
      {
        if ( v36 < 1 )
        {
          if ( !*(_WORD *)((char *)&gLinkPlayers + v35 + 24) )
            goto _0800F660;
          goto _0800F6FA;
        }
        v37 = &unk_3004554;
      }
_0800F6E0:
      memcpy(v37, v34, 100);
      goto _0800F6FA;
    }
    if ( *(_WORD *)((char *)&gLinkPlayers + v35 + 24) & 1 )
    {
      if ( *(_WORD *)((char *)&gLinkPlayers + v33 + 24) & 1 )
      {
_0800F6A2:
        v38 = *(_WORD *)((char *)&gLinkPlayers + v35 + 24);
        if ( v38 > 2 )
        {
          if ( v38 != 3 )
            goto _0800F6FA;
_0800F6B8:
          v37 = &unk_3004428;
          goto _0800F6E0;
        }
        if ( v38 >= 1 )
        {
          v37 = &unk_3004554;
          goto _0800F6E0;
        }
        if ( !*(_WORD *)((char *)&gLinkPlayers + v35 + 24) )
          goto _0800F6B8;
        goto _0800F6FA;
      }
    }
    else if ( !(*(_WORD *)((char *)&gLinkPlayers + v33 + 24) & 1) )
    {
      goto _0800F6A2;
    }
    v39 = *(_WORD *)((char *)&gLinkPlayers + v35 + 24);
    if ( v39 > 2 )
    {
      if ( v39 != 3 )
        goto _0800F6FA;
_0800F6DE:
      v37 = &unk_3004688;
      goto _0800F6E0;
    }
    if ( v39 >= 1 )
    {
      memcpy(&unk_30047B4, v34, 100);
    }
    else if ( !*(_WORD *)((char *)&gLinkPlayers + v35 + 24) )
    {
      goto _0800F6DE;
    }
_0800F6FA:
    v34 += 64;
    v35 += 28;
    ++v32;
  }
  while ( v32 <= 3 );
  shedinja_something((int)&unk_3004360);
  shedinja_something((int)&unk_30043C4);
  shedinja_something((int)&unk_3004428);
  shedinja_something((int)&unk_300448C);
  shedinja_something((int)&unk_30044F0);
  shedinja_something((int)&unk_3004554);
  shedinja_something((int)&unk_30045C0);
  shedinja_something((int)&unk_3004624);
  shedinja_something((int)&unk_3004688);
  shedinja_something((int)&unk_30046EC);
  shedinja_something((int)&unk_3004750);
  shedinja_something((int)&unk_30047B4);
_0800F770:
  ++v2024D1E;
  return v41;
}
