signed int sub_80EEC90()
{
  if ( word_300179E & 0x40 )
  {
    if ( --v2006DAD & 0x80 )
      v2006DAD = v2006DAE - 1;
    return 1;
  }
  if ( word_300179E & 0x80 )
  {
    ++v2006DAD;
    if ( v2006DAD >= v2006DAE )
      v2006DAD = 0;
    return 1;
  }
  return 0;
}
