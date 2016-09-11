signed int sub_80F6E9C()
{
  int v0; // r2@1
  signed int result; // r0@2

  v0 = v200D15A;
  if ( v200D15A )
  {
    v200D15A += 8;
    if ( (v0 + 8) & 0x8000 )
    {
      result = 1;
    }
    else
    {
      result = 0;
      v200D15A = 0;
    }
  }
  else
  {
    result = 0;
  }
  return result;
}
