signed int sub_809C664()
{
  unsigned __int8 v0; // r10@1
  unsigned int v1; // r4@1
  signed int v2; // r9@1
  signed int v3; // r8@1
  int v4; // r0@3
  signed int result; // r0@17
  unsigned int v6; // r0@22
  unsigned int v7; // r0@37

  v0 = v20384E4;
  LOBYTE(v1) = v20384E5;
  v20011DF = 0;
  v20011DE = 0;
  v20011E3 = 0;
  v2 = 0;
  v3 = 0;
  if ( word_30017A0 & 0x40 )
  {
    v7 = (v20384E5 << 24) - 0x1000000;
    v1 = v7 >> 24;
    if ( (v7 & 0x80000000) != 0 )
      LOBYTE(v1) = 6;
    if ( (char)v1 != v20384E5 )
      v3 = 1;
    goto _0809C83C;
  }
  if ( word_30017A0 & 0x80 )
  {
    v4 = (v20384E5 << 24) + 0x1000000;
    v1 = (unsigned int)v4 >> 24;
    if ( v4 >> 24 > 6 )
      LOBYTE(v1) = 0;
    if ( (char)v1 != v20384E5 )
    {
      v3 = 1;
      goto _0809C842;
    }
_0809C83C:
    if ( !v3 )
      return v3;
_0809C842:
    sub_809AF18(v0, v1);
    return v3;
  }
  if ( word_30017A0 & 0x20 && v20384E5 )
  {
    v3 = 1;
    v20011E2 = v20384E5;
    LOBYTE(v1) = 0;
    goto _0809C83C;
  }
  if ( word_30017A0 & 0x10 )
  {
    if ( v20384E5 )
    {
      v3 = 6;
      v0 = 0;
      LOBYTE(v1) = 0;
    }
    else
    {
      v3 = 1;
      LOBYTE(v1) = v20011E2;
    }
    goto _0809C83C;
  }
  if ( !(word_300179E & 1) )
    goto def_809C7A0;
  if ( v20384E5 == 6 )
  {
    if ( v2000005 == 1 )
      return 4;
    v2 = 1;
    goto def_809C7A0;
  }
  if ( !(sub_809CAB0() << 24) )
    goto def_809C7A0;
  if ( !v20384E9 )
    return 8;
  v6 = (char)(sub_809CE4C(0) - 1);
  if ( v6 > 4 )
  {
def_809C7A0:
    if ( word_300179E & 2 )
    {
      if ( v2000005 == 1 )
        return 16;
      v2 = 1;
    }
    if ( v2 )
    {
      v3 = 6;
      v0 = 0;
      LOBYTE(v1) = 0;
    }
    else if ( word_300179E & 4 )
    {
      sub_809CD88();
      return 0;
    }
    goto _0809C83C;
  }
  switch ( v6 )
  {
    case 0u:
      result = 11;
      break;
    case 1u:
      result = 12;
      break;
    case 2u:
      result = 13;
      break;
    case 3u:
      result = 14;
      break;
    case 4u:
      result = 15;
      break;
    default:
      goto def_809C7A0;
  }
  return result;
}
