int sub_800F104()
{
  unsigned __int8 v0; // r0@1
  int v1; // r6@1
  unsigned __int8 v2; // r0@10
  int v3; // r4@12
  int v4; // r5@12
  int v5; // r7@12
  int v7; // [sp+18h] [bp-4h]@0

  v0 = GetMultiplayerId();
  v1 = v0;
  v20160CB = v0;
  RunTasks(33644738);
  AnimateSprites();
  BuildOamBuffer();
  if ( v2024D1E == 1 )
  {
    if ( (GetBlockRecievedStatus() & 0xF) != 15 )
      return v7;
    ResetBlockReceivedFlags();
    v3 = 0;
    v4 = 28 * v1;
    v5 = 0;
    while ( 1 )
    {
      if ( v3 != v1 )
      {
        if ( !(*(_WORD *)((char *)&gLinkPlayers + v5 + 24) & 1) )
        {
          if ( *(_WORD *)((char *)&gLinkPlayers + v4 + 24) & 1 )
            goto _0800F1FA;
_0800F1EC:
          memcpy(33700352, &gBlockRecvBuffer[64 * v3], 96);
          goto _0800F1FA;
        }
        if ( *(_WORD *)((char *)&gLinkPlayers + v4 + 24) & 1 )
          goto _0800F1EC;
      }
_0800F1FA:
      v5 += 28;
      if ( ++v3 > 3 )
      {
        ++v2024D1E;
        v20160C4 = dword_3001778;
        v20160C2 = v20239F8;
        dword_3001778 = (int)sub_800F104;
        sub_806AFAC(5, 0);
        return v7;
      }
    }
  }
  if ( (signed int)v2024D1E > 1 )
  {
    if ( v2024D1E == 2 )
    {
      if ( !(v202F38F & 0x80) )
      {
        v2024D1E = 3;
        sub_800832C();
      }
    }
    else if ( v2024D1E == 3 && !gReceivedRemoteLinkPlayers )
    {
      v20239F8 = v20160C2;
      dword_3001778 = v20160C4;
      SetMainCallback2((int)sub_800E7F8);
    }
  }
  else if ( !v2024D1E && gReceivedRemoteLinkPlayers && sub_8007ECC() << 24 )
  {
    sub_800F02C();
    v2 = bitmask_all_link_players_but_self();
    SendBlock(v2, (char *)0x2000000, 0x60u);
    ++v2024D1E;
  }
  return v7;
}
