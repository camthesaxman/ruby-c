signed int sub_809C464()
{
  unsigned __int8 v0; // r8@1
  signed int v1; // r9@3
  int v2; // r0@3
  unsigned int v3; // r4@3
  signed int v4; // r0@3
  int v5; // r0@7
  signed int v6; // r1@7
  signed int result; // r0@18
  unsigned int v8; // r0@19

  v0 = v20384E4;
  v20011DE = 0;
  v20011DF = 0;
  v20011E3 = 0;
  if ( word_30017A0 & 0x40 )
  {
    v1 = 1;
    if ( v20384E5 > 5 )
    {
      v5 = v20384E5 << 24;
      v6 = -100663296;
      goto _0809C63C;
    }
    v0 = 2;
_0809C646:
    LOBYTE(v3) = 0;
    goto _0809C648;
  }
  if ( word_30017A0 & 0x80 )
  {
    v1 = 1;
    v2 = (v20384E5 << 24) + 100663296;
    v3 = (unsigned int)v2 >> 24;
    v4 = v2 >> 24;
    if ( v4 > 29 )
    {
      v0 = 3;
      v3 = (char)(v4 - 30) / 3 & 0xFF;
      v20011DE = 1;
      v20011E3 = 1;
    }
    goto _0809C648;
  }
  if ( word_30017A0 & 0x20 )
  {
    v1 = 1;
    if ( !(v20384E5 % 6 << 24) )
    {
      v20011DF = -1;
      v3 = (((unsigned int)v20384E5 << 24) + 83886080) >> 24;
_0809C648:
      sub_809AF18(v0, v3);
      return v1;
    }
    v5 = v20384E5 << 24;
    v6 = -16777216;
_0809C63C:
    v3 = (unsigned int)(v5 + v6) >> 24;
    goto _0809C648;
  }
  if ( word_30017A0 & 0x10 )
  {
    v1 = 1;
    if ( (v20384E5 + 1) % 6 )
    {
      v5 = v20384E5 << 24;
      v6 = 0x1000000;
    }
    else
    {
      v20011DF = 1;
      v5 = v20384E5 << 24;
      v6 = -83886080;
    }
    goto _0809C63C;
  }
  if ( word_300179E & 8 )
  {
    v1 = 1;
    v0 = 2;
    goto _0809C646;
  }
  if ( !(word_300179E & 1) || !(sub_809CAB0() << 24) )
    goto def_809C5A4;
  if ( !v20384E9 )
    return 8;
  v8 = (char)(sub_809CE4C(0) - 1);
  if ( v8 > 4 )
  {
def_809C5A4:
    if ( word_300179E & 2 )
      return 16;
    if ( v2024EB7 == 1 )
    {
      if ( word_300179C & 0x200 )
        return 10;
      if ( word_300179C & 0x100 )
        return 9;
    }
    if ( word_300179E & 4 )
    {
      sub_809CD88();
      return 0;
    }
    return 0;
  }
  switch ( v8 )
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
      goto def_809C5A4;
  }
  return result;
}
