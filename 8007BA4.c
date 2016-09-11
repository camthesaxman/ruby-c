int GetLinkPlayerDataExchangeStatusTimed()
{
  int v0; // r7@1
  signed int v1; // r6@4
  int v2; // r5@4
  int *v3; // r1@10
  signed int v4; // r0@10
  int *v5; // r2@12
  int v6; // r1@13

  v0 = 0;
  if ( gReceivedRemoteLinkPlayers == 1 )
  {
    if ( !(GetLinkPlayerCount() << 24) )
    {
      gLinkErrorOccurred = 1;
      CloseLink();
    }
    v1 = 0;
    v2 = 0;
    while ( v1 < (unsigned __int8)GetLinkPlayerCount() )
    {
      if ( dword_3002984[v2] == dword_3002984[0] )
        ++v0;
      v2 += 7;
      ++v1;
    }
    if ( v0 == (unsigned __int8)GetLinkPlayerCount() )
    {
      v3 = &sPlayerDataExchangeStatus;
      v4 = 1;
    }
    else
    {
      v3 = &sPlayerDataExchangeStatus;
      v4 = 3;
    }
    *v3 = v4;
    v5 = v3;
  }
  else
  {
    v6 = (unsigned __int16)gLinkTimeOutCounter++ + 1;
    v5 = &sPlayerDataExchangeStatus;
    if ( (unsigned int)(v6 << 16) > 0x2580000 )
      sPlayerDataExchangeStatus = 2;
  }
  return *(_BYTE *)v5;
}
