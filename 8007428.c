int TestBlockTransfer()
{
  unsigned int v0; // r5@3
  __int16 *v1; // r4@4
  unsigned int v2; // r5@8
  __int16 *v3; // r4@10
  int v5; // [sp+18h] [bp-4h]@0

  if ( (unsigned __int8)sLinkTestLastBlockSendPos != sBlockSend )
  {
    PrintHex((unsigned __int16)sBlockSend, 2, 3, 2);
    sLinkTestLastBlockSendPos = sBlockSend;
  }
  v0 = 0;
  do
  {
    v1 = &sBlockRecv[6 * v0];
    if ( (unsigned __int8)sLinkTestLastBlockRecvPos[v0] != *v1 )
    {
      PrintHex((unsigned __int16)*v1, 2, (v0 + 4) & 0xFF, 2);
      sLinkTestLastBlockRecvPos[v0] = *v1;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  if ( (GetBlockRecievedStatus() & 0xFF) == 15 )
  {
    v2 = 0;
    do
    {
      if ( (15 >> v2) & 1 )
      {
        v3 = &gLinkTestBlockChecksums[v2];
        *v3 = LinkTestCalcBlockChecksum(&gBlockRecvBuffer[64 * v2], (unsigned __int16)sBlockRecv[6 * v2 + 1]);
        ResetBlockReceivedFlag(v2);
        if ( *v3 != 834 )
        {
          gLinkTestDebugValuesEnabled = 0;
          gLinkTestDummyBool = 0;
        }
      }
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 3 );
  }
  return v5;
}
