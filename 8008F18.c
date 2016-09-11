int DoSend()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( byte_3003086 == 8 )
  {
    v400012A = word_3003084;
    if ( sSendBufferEmpty )
    {
      sSendBufferEmpty = 0;
    }
    else
    {
      --byte_30033A9;
      if ( (unsigned __int8)++byte_30033A8 > 0x31u )
        byte_30033A8 = sSendBufferEmpty;
    }
  }
  else
  {
    if ( sSendBufferEmpty )
      goto LABEL_16;
    if ( !byte_30033A9 )
      sSendBufferEmpty = 1;
    if ( sSendBufferEmpty )
LABEL_16:
      v400012A = 0;
    else
      v400012A = *(&word_3003088[50 * (unsigned __int8)byte_3003086] + (unsigned __int8)byte_30033A8);
    ++byte_3003086;
  }
  return v1;
}
