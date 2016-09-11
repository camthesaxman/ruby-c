signed int __fastcall InitBlockSend(char *a1, unsigned int a2)
{
  char *v2; // r7@1
  unsigned int v3; // r6@1
  __int16 v4; // r5@1
  signed int result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = (unsigned __int8)byte_30003F0;
  if ( byte_30003F0 )
  {
    result = 0;
  }
  else
  {
    byte_30003F1 = GetMultiplayerId();
    byte_30003F0 = 1;
    word_30003EA = v3;
    sBlockSend = v4;
    if ( v3 <= 0x100 )
    {
      if ( v2 != &gBlockSendBuffer )
        memcpy(&gBlockSendBuffer, v2, v3);
      dword_30003EC = (int)&gBlockSendBuffer;
    }
    else
    {
      dword_30003EC = (int)v2;
    }
    BuildSendCmd(0xBBBBu);
    gLinkCallback = (int)LinkCB_BlockSendBegin;
    sBlockSendDelayCounter = 0;
    result = 1;
  }
  return result;
}
