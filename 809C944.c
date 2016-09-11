signed int sub_809C944()
{
  unsigned __int8 v0; // r12@1
  signed int v1; // r6@3
  unsigned int v2; // r3@3
  unsigned int v3; // r0@5
  int v4; // r0@8
  signed int result; // r0@11

  v0 = v20384E4;
  v20011DF = 0;
  v20011DE = 0;
  v20011E3 = 0;
  if ( word_30017A0 & 0x40 )
  {
    v1 = 1;
    v0 = 0;
    v20011DE = -1;
    LOBYTE(v2) = 29;
    if ( !v20384E5 )
      LOBYTE(v2) = 24;
    goto _0809CA2A;
  }
  if ( word_30017A0 & 0x88 )
  {
    v1 = 1;
    v0 = 2;
    LOBYTE(v2) = 0;
_0809CA2A:
    v20011E3 = v1;
_0809CA2C:
    sub_809AF18(v0, v2);
    return v1;
  }
  if ( word_30017A0 & 0x20 )
  {
    v1 = 1;
    v3 = (v20384E5 << 24) - 0x1000000;
    v2 = v3 >> 24;
    if ( (v3 & 0x80000000) != 0 )
    {
      v20011DF = -1;
      LOBYTE(v2) = 1;
    }
    goto _0809CA2C;
  }
  if ( word_30017A0 & 0x10 )
  {
    v1 = 1;
    v4 = (v20384E5 << 24) + 0x1000000;
    v2 = (unsigned int)v4 >> 24;
    if ( v4 >> 24 > 1 )
    {
      v20011DF = 1;
      LOBYTE(v2) = 0;
    }
    goto _0809CA2C;
  }
  if ( !(word_300179E & 1) )
  {
    if ( word_300179E & 2 )
      return 16;
    if ( word_300179E & 4 )
    {
      sub_809CD88();
      return 0;
    }
    return 0;
  }
  result = 4;
  if ( !v20384E5 )
    result = 5;
  return result;
}
