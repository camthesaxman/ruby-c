int Task_PrintTestData()
{
  unsigned __int8 v0; // r0@1
  unsigned __int8 v1; // r0@1
  int v2; // r0@1
  unsigned __int8 v3; // r0@1
  int v4; // r0@1
  unsigned __int8 v5; // r0@1
  int v6; // r0@1
  unsigned __int8 v7; // r0@1
  int v8; // r0@1
  unsigned __int8 v9; // r0@1
  signed int v10; // r6@1
  signed int v11; // r5@1
  __int16 *v12; // r4@1
  int v14; // [sp+Ch] [bp-4h]@0

  PrintHex((unsigned __int8)gShouldAdvanceLinkState, 2u, 1u, 2);
  PrintHex(gLinkStatus, 0xFu, 1u, 8);
  PrintHex((unsigned __int8)byte_3003071, 2u, 0xAu, 2);
  PrintHex((gLinkStatus & 0x1Cu) >> 2, 0xFu, 0xAu, 2);
  v0 = GetMultiplayerId();
  PrintHex(v0, 0xFu, 0xCu, 2);
  PrintHex((unsigned __int8)gLastSendQueueCount, 0x19u, 1u, 2);
  PrintHex((unsigned __int8)gLastRecvQueueCount, 0x19u, 2u, 2);
  v1 = GetBlockRecievedStatus();
  PrintHex(v1, 0xFu, 5u, 2);
  PrintHex(gLinkDebugValue1, 2u, 0xCu, 8);
  v2 = PrintHex(gLinkDebugValue2, 2u, 0xDu, 8);
  v3 = GetSioMultiSI(v2);
  v4 = PrintHex(v3, 0x19u, 5u, 1);
  v5 = IsSioMultiMaster(v4);
  v6 = PrintHex(v5, 0x19u, 6u, 1);
  v7 = IsLinkConnectionEstablished(v6);
  v8 = PrintHex(v7, 0x19u, 7u, 1);
  v9 = HasLinkErrorOccurred(v8);
  PrintHex(v9, 0x19u, 8u, 1);
  v10 = 0;
  v11 = 0x4000000;
  v12 = gLinkTestBlockChecksums;
  do
  {
    PrintHex((unsigned __int16)*v12, 0xAu, BYTE3(v11), 4);
    v11 += 0x1000000;
    ++v12;
    ++v10;
  }
  while ( v10 <= 3 );
  return v14;
}
