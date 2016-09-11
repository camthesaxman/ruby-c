int ProcessRecvCmds()
{
  int v0; // r7@1
  int v1; // r4@2
  __int16 *v2; // r2@2
  __int16 *v3; // r1@2
  signed int v4; // r1@3
  __int16 *v5; // r1@31
  __int16 *v6; // r3@32
  int v7; // r2@33
  _WORD *v8; // r1@34
  int v9; // r2@36
  char *v10; // r1@37
  __int16 *v11; // r1@38
  __int16 v12; // r0@38
  char *v13; // r1@40
  int v14; // r3@40
  int v15; // r6@40
  int v16; // r3@40
  int v17; // r6@40
  char *v18; // r0@4
  unsigned __int16 v20; // [sp+0h] [bp-24h]@2
  int v21; // [sp+20h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = v0;
    v2 = &word_3002910[v0];
    *v2 = 0;
    v3 = &gRecvCmds[v0];
    v20 = v0 + 1;
    if ( !*v3 )
      goto LABEL_48;
    v4 = (unsigned __int16)*v3;
    if ( v4 == 24575 )
    {
      v18 = u8_array_3002B78;
LABEL_46:
      v18[v0] = 1;
      goto LABEL_48;
    }
    if ( v4 > 24575 )
    {
      if ( v4 == 43691 )
      {
        sub_80516C4((unsigned __int8)v0, (unsigned __int16)word_3002A28[v1]);
        goto LABEL_48;
      }
      if ( v4 > 43691 )
      {
        if ( v4 == 51966 )
        {
LABEL_47:
          *v2 = word_3002A28[v1];
          goto LABEL_48;
        }
        if ( v4 > 51966 )
        {
          if ( v4 == 52428 )
            SendBlock(
              0,
              *(_DWORD *)&sBlockRequestLookupTable[8 * (unsigned __int16)word_3002A28[v1]],
              word_81E75D0[4 * (unsigned __int16)word_3002A28[v1]]);
        }
        else if ( v4 == 48059 )
        {
          v5 = &sBlockRecv[6 * v0];
          *v5 = 0;
          v5[1] = word_3002A28[v1];
          *((_BYTE *)v5 + 9) = word_3002A30[v1];
        }
      }
      else if ( v4 == 34952 )
      {
        v6 = &sBlockRecv[6 * v0];
        if ( (unsigned __int16)v6[1] <= 0x100u )
        {
          v9 = 0;
          do
          {
            v10 = (char *)&gBlockRecvBuffer[64 * v0]
                + 2 * (((unsigned int)(unsigned __int16)sBlockRecv[6 * v0] >> 1) + v9++);
            *(_WORD *)v10 = *(&gRecvCmds[4 * v9] + v0);
            v9 = (unsigned __int16)v9;
          }
          while ( (unsigned __int16)v9 <= 6u );
        }
        else
        {
          v7 = 0;
          do
          {
            v8 = (_WORD *)(2 * (((unsigned int)(unsigned __int16)*v6 >> 1) + v7++) + 0x2000000);
            *v8 = *(__int16 *)((char *)&gRecvCmds[4 * v7] + v1 * 2);
            v7 = (unsigned __int16)v7;
          }
          while ( (unsigned __int16)v7 <= 6u );
        }
        v11 = &sBlockRecv[6 * v0];
        v12 = *v11 + 14;
        *v11 = v12;
        if ( (unsigned __int16)v12 >= (unsigned int)(unsigned __int16)v11[1] )
        {
          if ( gLinkPlayerPending[v0] == 1 )
          {
            v13 = (char *)&gLinkPlayers + 28 * v0;
            v14 = gBlockRecvBuffer[64 * v0 + 5];
            v15 = gBlockRecvBuffer[64 * v0 + 6];
            *(_DWORD *)v13 = gBlockRecvBuffer[64 * v0 + 4];
            *((_DWORD *)v13 + 1) = v14;
            *((_DWORD *)v13 + 2) = v15;
            v13 += 12;
            v16 = gBlockRecvBuffer[64 * v0 + 8];
            v17 = gBlockRecvBuffer[64 * v0 + 9];
            *(_DWORD *)v13 = gBlockRecvBuffer[64 * v0 + 7];
            *((_DWORD *)v13 + 1) = v16;
            *((_DWORD *)v13 + 2) = v17;
            *((_DWORD *)v13 + 3) = gBlockRecvBuffer[64 * v0 + 10];
            if ( !strcmp(&gBlockRecvBuffer[64 * v0], "GameFreak inc.")
              && !strcmp(&gBlockRecvBuffer[64 * v0 + 11], "GameFreak inc.") )
            {
              HandleReceiveRemoteLinkPlayer(v0);
            }
            else
            {
              SetMainCallback2((int)CB2_LinkError);
            }
            ConvertInternationalString((int)&unk_3002978 + 28 * v0, *((_BYTE *)&unk_3002978 + 28 * v0 + 18));
          }
          else
          {
            SetBlockReceivedFlag((unsigned __int8)v0);
          }
        }
      }
      else if ( v4 == 43690 )
      {
        sub_8007E24();
      }
    }
    else
    {
      if ( v4 == 17476 )
        goto LABEL_47;
      if ( v4 > 17476 )
      {
        if ( v4 == 21845 || v4 == 21862 )
          byte_3002A68 = 1;
      }
      else
      {
        if ( v4 == 8738 )
        {
          InitLocalLinkPlayer();
          unk_3002930 = *(_DWORD *)&localLinkPlayer;
          unk_3002934 = dword_3002A04;
          unk_3002938 = *(_DWORD *)byte_3002A08;
          unk_300293C = unk_3002A0C;
          unk_3002940 = unk_3002A10;
          unk_3002944 = dword_3002A14;
          unk_3002948 = *(_DWORD *)&word_3002A18;
          localLinkPlayerBlock = 1701667143;
          unk_3002924 = 1634038342;
          unk_3002928 = 1852383339;
          unk_300292C = *(_WORD *)"c.";
          unk_300292E = sMagic[14];
          unk_300294C = 1701667143;
          unk_3002950 = 1634038342;
          unk_3002954 = 1852383339;
          unk_3002958 = *(_WORD *)"c.";
          unk_300295A = sMagic[14];
          InitBlockSend(&localLinkPlayerBlock, 60);
          goto LABEL_48;
        }
        if ( v4 == 12286 )
        {
          v18 = u8_array_3002B70;
          goto LABEL_46;
        }
      }
    }
LABEL_48:
    v0 = (unsigned __int16)(v0 + 1);
  }
  while ( v20 <= 3u );
  return v21;
}
