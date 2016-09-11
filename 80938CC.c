signed int rfu_NI_stopReceivingData()
{
  signed int result; // r0@2
  char v1; // r0@5

  if ( word_300179E & 2 )
  {
    v2000000 = 5;
    result = 1;
  }
  else if ( word_300179E & 1 )
  {
    if ( v2000003 )
    {
      v1 = 5;
    }
    else
    {
      v2000003 ^= 1u;
      v1 = 3;
    }
    v2000000 = v1;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
