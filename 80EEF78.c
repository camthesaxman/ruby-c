signed int sub_80EEF78()
{
  signed int v0; // r3@1
  int v1; // r1@1
  signed int result; // r0@2

  v0 = 1;
  v1 = v200030C;
  if ( v200030C )
  {
    v200030C -= 2;
    if ( (v1 - 2) << 16 <= 0 )
    {
      v200030C = 0;
      v0 = 0;
    }
    v4000016 = v200030C;
    result = v0;
  }
  else
  {
    result = 0;
  }
  return result;
}
