signed int sub_8048D44()
{
  int v0; // r7@1
  int v1; // r2@1
  unsigned int v2; // r0@1
  int v3; // r1@3
  void *v4; // r4@38
  signed int v5; // r5@38
  int v6; // r0@39
  signed int result; // r0@45
  int v8; // [sp+0h] [bp-20h]@42

  v0 = (unsigned __int8)GetMultiplayerId();
  SetLinkDebugValues(*(_BYTE *)(dword_3004824 + 117) / 0x64u, *(_BYTE *)(dword_3004824 + 117) % 0x64u);
  v2 = *(_BYTE *)(dword_3004824 + 117);
  if ( v2 > 0x10 )
  {
def_8048D8E:
    result = 0;
  }
  else
  {
    switch ( v2 )
    {
      case 0u:
        sub_8048D24((int)&gBlockSendBuffer, (int)dword_3004360, 0xC8u);
        v3 = dword_3004824;
        goto _08049006;
      case 1u:
        if ( !(sub_8007ECC() << 24) )
          goto def_8048D8E;
        if ( GetBlockRecievedStatus() << 24 )
        {
          ResetBlockReceivedFlags();
          v3 = dword_3004824;
        }
        else
        {
          v3 = dword_3004824;
        }
        goto _08049006;
      case 2u:
        if ( !v0 )
          sub_8007E9C(1);
        v3 = dword_3004824;
        goto _08049006;
      case 3u:
        if ( (unsigned __int8)GetBlockRecievedStatus() != 3 )
          goto def_8048D8E;
        sub_8048D24((int)&unk_30045C0, (int)&gBlockRecvBuffer[64 * (v0 ^ 1)], 0xC8u);
        ResetBlockReceivedFlags();
        v3 = dword_3004824;
        goto _08049006;
      case 4u:
        sub_8048D24((int)&gBlockSendBuffer, (int)&unk_3004428, 0xC8u);
        v3 = dword_3004824;
        goto _08049006;
      case 5u:
        if ( !v0 )
          sub_8007E9C(1);
        v3 = dword_3004824;
        goto _08049006;
      case 6u:
        if ( (unsigned __int8)GetBlockRecievedStatus() != 3 )
          goto def_8048D8E;
        sub_8048D24((int)&unk_3004688, (int)&gBlockRecvBuffer[64 * (v0 ^ 1)], 0xC8u);
        ResetBlockReceivedFlags();
        v3 = dword_3004824;
        goto _08049006;
      case 7u:
        sub_8048D24((int)&gBlockSendBuffer, (int)&unk_30044F0, 0xC8u);
        v3 = dword_3004824;
        goto _08049006;
      case 8u:
        if ( !v0 )
          sub_8007E9C(1);
        v3 = dword_3004824;
        goto _08049006;
      case 9u:
        if ( (unsigned __int8)GetBlockRecievedStatus() != 3 )
          goto def_8048D8E;
        sub_8048D24((int)&unk_3004750, (int)&gBlockRecvBuffer[64 * (v0 ^ 1)], 0xC8u);
        ResetBlockReceivedFlags();
        v3 = dword_3004824;
        goto _08049006;
      case 0xAu:
        sub_8048D24((int)&gBlockSendBuffer, 33718912, 0xDCu);
        v3 = dword_3004824;
        goto _08049006;
      case 0xBu:
        if ( !v0 )
          sub_8007E9C(3);
        v3 = dword_3004824;
        goto _08049006;
      case 0xCu:
        if ( (unsigned __int8)GetBlockRecievedStatus() != 3 )
          goto def_8048D8E;
        sub_8048D24(33724160, (int)&gBlockRecvBuffer[64 * (v0 ^ 1)], 0xD8u);
        ResetBlockReceivedFlags();
        v3 = dword_3004824;
        goto _08049006;
      case 0xDu:
        sub_8048D24((int)&gBlockSendBuffer, 33720388, 0xBu);
        v3 = dword_3004824;
        goto _08049006;
      case 0xEu:
        if ( !v0 )
          sub_8007E9C(4);
        v3 = dword_3004824;
        goto _08049006;
      case 0xFu:
        if ( (unsigned __int8)GetBlockRecievedStatus() != 3 )
          goto def_8048D8E;
        sub_8048D24(dword_3004824 + 181, (int)&gBlockRecvBuffer[64 * (v0 ^ 1)], 0xBu);
        ResetBlockReceivedFlags();
        v3 = dword_3004824;
_08049006:
        ++*(_BYTE *)(v3 + 117);
        goto def_8048D8E;
      case 0x10u:
        v4 = &unk_30045C0;
        v5 = 5;
        do
        {
          v6 = (unsigned __int16)GetMonData((int)v4, 11, v1);
          if ( v6 )
          {
            if ( v6 == 303 && GetMonData((int)v4, 3, v1) != 1 )
            {
              GetMonData((int)v4, 2, (int)&v8);
              if ( !StringCompareWithoutExtCtrlCodes((int)&v8, (int)&gUnknown_0820C3B0) )
                SetMonData((int)v4, 2, (int)&unk_81F7E71);
            }
          }
          v4 = (char *)v4 + 100;
          --v5;
        }
        while ( v5 >= 0 );
        result = 1;
        break;
      default:
        goto def_8048D8E;
    }
  }
  return result;
}
