signed int sub_80717D8()
{
  char v0; // r0@1

  v0 = ProcessMenuInputNoWrap_();
  if ( !v0 )
  {
    sub_8071710();
    if ( (!word_3005EB8 || word_3005EB8 == 2) && v20297EC )
      dword_30006A8 = (int)sub_80718E8;
    else
      dword_30006A8 = (int)sub_8071850;
    return 0;
  }
  if ( v0 > 0 )
  {
    if ( v0 != 1 )
      return 0;
_0807183C:
    sub_8071710();
    sub_8071700();
    return 2;
  }
  if ( v0 == -1 )
    goto _0807183C;
  return 0;
}
