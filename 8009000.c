int SendRecvDone()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( byte_3003087 == 8 )
  {
    byte_3003086 = 0;
    byte_3003087 = 0;
  }
  else if ( gLink )
  {
    v400010E |= 0x80u;
  }
  return v1;
}
