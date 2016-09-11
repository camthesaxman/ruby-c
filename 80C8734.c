int __fastcall sub_80C8734(unsigned __int8 a1)
{
  int v1; // r9@1
  int v2; // r5@1
  int *v3; // r4@1
  signed int v4; // r7@10
  void *v5; // r6@10
  int v6; // r5@10
  signed int v7; // r10@10
  char v8; // r0@12
  int v9; // r0@13
  int v11; // [sp+0h] [bp-24h]@10
  int v12; // [sp+20h] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = &dword_3004B20[10 * a1];
  if ( !*((_WORD *)v3 + 4) )
  {
    if ( GetMultiplayerId() << 24 )
    {
      memcpy(&gBlockSendBuffer, (const char *)((v2038695 << 6) + 33785200), 64);
    }
    else
    {
      if ( !(sub_8007ECC() << 24) )
        return v12;
      memcpy(&gBlockSendBuffer, (const char *)((v2038695 << 6) + 33785200), 64);
      sub_8007E9C(2);
    }
    ++*((_WORD *)v3 + 4);
    return v12;
  }
  if ( *((_WORD *)v3 + 4) == 1 )
  {
    if ( sub_80C85D8() << 24 )
    {
      v4 = 0;
      v11 = v2;
      v5 = &gLinkPlayers;
      v6 = 0;
      v7 = 33785200;
      do
      {
        memcpy(v7, (const char *)&gBlockRecvBuffer[64 * v4], 64);
        if ( *((_WORD *)v5 + 13) == 1 )
        {
          v8 = sub_80C86A0(v6 + 33785202);
          ConvertInternationalString(v6 + 33785202, v8);
        }
        else
        {
          v9 = *(_BYTE *)(v6 + 33785212);
          if ( v9 == 252 )
          {
            ConvertInternationalString(v6 + 33785202, 1);
          }
          else
          {
            *(_BYTE *)(v6 + 33785207) = v9;
            *(_BYTE *)(v6 + 33785212) = -1;
          }
        }
        if ( *((_WORD *)v5 + 13) == 1 )
        {
          *(_BYTE *)(v6 + 33785220) = -1;
          *(_BYTE *)(v6 + 33785219) = *(_BYTE *)(v6 + 33785217);
          *(_BYTE *)(v6 + 33785218) = *(_BYTE *)(v6 + 33785216);
          *(_BYTE *)(v6 + 33785217) = *(_BYTE *)(v6 + 33785215);
          *(_BYTE *)(v6 + 33785216) = *(_BYTE *)(v6 + 33785214);
          *(_BYTE *)(v6 + 33785215) = *(_BYTE *)(v6 + 33785213);
          *(_BYTE *)(v6 + 33785214) = 21;
          *(_BYTE *)(v6 + 33785213) = -4;
        }
        else
        {
          *(_BYTE *)(v6 + 33785218) = *(_BYTE *)(v6 + 33785220);
          *(_BYTE *)(v6 + 33785220) = -1;
        }
        v5 = (char *)v5 + 28;
        v6 += 64;
        v7 += 64;
        ++v4;
      }
      while ( v4 <= 3 );
      ++LOWORD(dword_3004B20[2 * (v11 + v1) + 2]);
    }
  }
  else
  {
    *((_WORD *)v3 + 4) = 0;
    SwitchTaskToFollowupFunc(a1);
  }
  return v12;
}
