signed int sub_80EEF34()
{
  signed int v0; // r3@1
  __int16 v1; // r1@1
  signed int result; // r0@2

  v0 = 1;
  v1 = v200030C;
  if ( v200030C == 32 )
  {
    result = 0;
  }
  else
  {
    v200030C += 2;
    if ( (signed __int16)(v1 + 2) > 31 )
    {
      v200030C = 32;
      v0 = 0;
    }
    v4000016 = v200030C;
    result = v0;
  }
  return result;
}
