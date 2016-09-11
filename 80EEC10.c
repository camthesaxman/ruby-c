signed int sub_80EEC10()
{
  signed int result; // r0@5

  if ( word_300179E & 0x40 )
  {
    do
    {
      if ( --v2006DAD & 0x80 )
        v2006DAD = v2006DAE - 1;
    }
    while ( !*(_BYTE *)(v2006DAD + 0x2006DB2) );
    result = 1;
  }
  else if ( word_300179E & 0x80 )
  {
    do
    {
      ++v2006DAD;
      if ( v2006DAD >= v2006DAE )
        v2006DAD = 0;
    }
    while ( !*(_BYTE *)(v2006DAD + 0x2006DB2) );
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
