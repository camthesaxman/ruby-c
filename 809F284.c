signed int __fastcall sub_809F284(signed int result)
{
  int v1; // r7@1
  int v2; // r6@1
  signed int v3; // r5@7
  signed int v4; // r0@8
  int v5; // r1@8

  v1 = v2018000;
  LOBYTE(v2) = 0;
  if ( v201800B )
  {
    v3 = result << 24;
    while ( 1 )
    {
      v4 = ((char)v2 + (v3 >> 24)) << 24;
      v2 = ((char)v2 + (v3 >> 24)) & 0xFF;
      v5 = (v4 >> 24) + v2018009;
      if ( v5 < 0 || v5 > v201800A )
        break;
      if ( !GetMonData(v1 + 100 * v5, 45, v2018009) )
      {
        LOBYTE(result) = v2018009 + v2;
        return (char)result;
      }
    }
    return -1;
  }
  if ( (char)result == -1 && !v2018009 || (char)result == 1 && v2018009 >= (unsigned int)v201800A )
    return -1;
  LOBYTE(result) = v2018009 + result;
  return (char)result;
}
