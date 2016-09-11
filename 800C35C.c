int sub_800C35C()
{
  unsigned int i; // r4@4
  unsigned __int8 v1; // r9@5
  int v2; // r6@6
  int *v3; // r2@6
  int v4; // r5@8
  int *v5; // r4@8
  int j; // r2@8
  int v8; // [sp+1Ch] [bp-4h]@0

  if ( gReceivedRemoteLinkPlayers && v20239F8 & 0x20 && dword_3002984[0] == 8721 )
  {
    for ( i = 0; i < (unsigned __int8)GetLinkPlayerCount(); i = v1 )
    {
      v1 = i + 1;
      if ( (unsigned __int8)GetBlockRecievedStatus() & gBitTable[i] )
      {
        ResetBlockReceivedFlag(i);
        v2 = (unsigned __int16)word_3002B84[128 * i];
        v3 = &dword_3004B20[10 * v20238C5];
        if ( *((_WORD *)v3 + 18) + v2 + 9 > 4096 )
        {
          *((_WORD *)v3 + 16) = *((_WORD *)v3 + 18);
          LOWORD(dword_3004B20[10 * v20238C5 + 9]) = 0;
        }
        v4 = LOWORD(dword_3004B20[10 * v20238C5 + 9]) + 33640448;
        v5 = &gBlockRecvBuffer[64 * i];
        for ( j = 0; j < v2 + 8; ++j )
          *(_BYTE *)(v4 + j) = *((_BYTE *)v5 + j);
        LOWORD(dword_3004B20[10 * v20238C5 + 9]) += v2 + 8;
      }
    }
  }
  return v8;
}
