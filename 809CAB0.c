signed int sub_809CAB0()
{
  int v0; // r0@1
  int v1; // r1@1
  int v2; // r2@1
  int v3; // r1@1

  v0 = sub_809CDCC();
  v3 = (unsigned __int16)sub_809AB8C(v0, v1, v2);
  if ( v2000005 != 1 )
  {
    if ( (signed int)v2000005 > 1 )
    {
      if ( v2000005 == 2 )
      {
        if ( v20384E6 )
        {
          if ( v3 )
            sub_809CDEC(4);
          else
            sub_809CDEC(5);
          goto _0809CB28;
        }
        if ( v3 )
        {
          sub_809CDEC(3);
          goto _0809CB28;
        }
      }
    }
    else if ( !v2000005 && v3 )
    {
      sub_809CDEC(2);
      goto _0809CB28;
    }
    return 0;
  }
  if ( !v3 )
    return 0;
  sub_809CDEC(1);
_0809CB28:
  sub_809CDEC(6);
  if ( v2000005 == 2 )
  {
    if ( v20384E4 )
      sub_809CDEC(1);
    else
      sub_809CDEC(2);
  }
  sub_809CDEC(8);
  sub_809CDEC(7);
  sub_809CDEC(0);
  return 1;
}
