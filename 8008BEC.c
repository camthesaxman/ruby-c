int LinkVSync()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( gLink )
  {
    if ( byte_3003071 == 2 )
      goto LABEL_9;
    if ( byte_3003071 == 4 )
    {
      if ( byte_300307D > 8 )
      {
        if ( byte_3003083 == 1 )
          return v1;
        byte_300307D = 0;
      }
      else if ( byte_3003080 != 1 )
      {
        byte_3003083 = 1;
        return v1;
      }
LABEL_9:
      StartTransfer();
      return v1;
    }
  }
  else if ( (byte_3003071 == 4 || byte_3003071 == 2) && (unsigned __int8)++sNumVBlanksWithoutSerialIntr > 0xAu )
  {
    if ( byte_3003071 == 4 )
      byte_3003083 = 2;
    if ( byte_3003071 == 2 )
    {
      byte_3003073 = gLink;
      byte_300307F = gLink;
    }
  }
  return v1;
}
