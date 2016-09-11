int SerialCB()
{
  int v0; // r0@3
  int v1; // r0@3
  int v3; // [sp+4h] [bp-4h]@0

  byte_3003072 = v4000128 << 26 >> 30;
  if ( byte_3003071 == 2 )
  {
    if ( DoHandshake() << 24 )
    {
      if ( gLink )
      {
        byte_3003071 = 3;
        byte_300307D = 8;
      }
      else
      {
        byte_3003071 = 4;
      }
    }
  }
  else if ( byte_3003071 == 4 )
  {
    byte_3003080 = v4000128 << 25 >> 31;
    v0 = DoRecv();
    v1 = DoSend(v0);
    SendRecvDone(v1);
  }
  ++byte_300307D;
  sNumVBlanksWithoutSerialIntr = 0;
  if ( byte_300307D == 8 )
    gLastRecvQueueCount = byte_300402D;
  return v3;
}
