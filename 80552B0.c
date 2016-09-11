signed int sub_80552B0()
{
  signed int result; // r0@2

  if ( word_300179C & 0x40 )
  {
    result = 19;
  }
  else if ( word_300179C & 0x80 )
  {
    result = 18;
  }
  else if ( word_300179C & 0x20 )
  {
    result = 20;
  }
  else if ( word_300179C & 0x10 )
  {
    result = 21;
  }
  else if ( word_300179E & 8 )
  {
    result = 24;
  }
  else if ( word_300179E & 1 )
  {
    result = 25;
  }
  else
  {
    result = 17;
  }
  return result;
}
