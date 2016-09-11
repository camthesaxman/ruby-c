signed int sub_809C85C()
{
  signed int v0; // r4@3
  signed int v1; // r0@3
  unsigned __int8 v2; // r5@3
  int v4; // r0@12
  signed int v5; // r6@19

  v20011DF = 0;
  v20011DE = 0;
  v20011E3 = 0;
  if ( word_30017A0 & 0x40 )
  {
    v0 = 1;
    v1 = 3;
    v2 = 0;
    v20011E3 = 1;
    goto _0809C922;
  }
  if ( word_30017A0 & 0x80 )
  {
    v0 = 1;
    v1 = 0;
    v2 = 2;
_0809C922:
    v5 = v1 << 24;
    if ( v1 != 2 )
      sub_809A860(0);
    sub_809AF18(BYTE3(v5), v2);
    return v0;
  }
  if ( word_300179C & 0x20 )
    return 10;
  if ( word_300179C & 0x10 )
    return 9;
  if ( v2024EB7 == 1 )
  {
    if ( word_300179C & 0x200 )
      return 10;
    if ( word_300179C & 0x100 )
      return 9;
  }
  if ( word_300179E & 1 )
  {
    v4 = sub_809A860(0);
    sub_809CA8C(v4);
    return 7;
  }
  if ( word_300179E & 2 )
    return 16;
  if ( word_300179E & 4 )
  {
    sub_809CD88();
    return 0;
  }
  return 0;
}
