int EnableSerial()
{
  int v1; // [sp+0h] [bp-18h]@1
  int v2; // [sp+14h] [bp-4h]@1

  v4000200 &= 0xFF3Fu;
  v4000134 = 0;
  v4000128 = 24579;
  gLinkSavedIme = v4000208;
  v4000200 |= 0x80u;
  v400012A = 0;
  v1 = 0;
  CpuSet(&v1, &gLink, 83887088);
  sNumVBlanksWithoutSerialIntr = 0;
  sSendNonzeroCheck = 0;
  sRecvNonzeroCheck = 0;
  sChecksumAvailable = 0;
  sHandshakePlayerCount = 0;
  gLastSendQueueCount = 0;
  gLastRecvQueueCount = 0;
  return v2;
}
