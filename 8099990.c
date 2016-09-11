signed int sub_8099990()
{
  signed int result; // r0@2

  if ( v20010CC )
  {
    if ( *(_BYTE *)(*v20010CC + 63) & 0x20 )
      v20010CC = 0;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
