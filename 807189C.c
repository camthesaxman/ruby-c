signed int sub_807189C()
{
  char v0; // r0@1

  v0 = ProcessMenuInputNoWrap_();
  if ( v0 )
  {
    if ( v0 > 0 )
    {
      if ( v0 != 1 )
        return 0;
    }
    else if ( v0 != -1 )
    {
      return 0;
    }
    sub_8071710();
    sub_8071700();
    return 2;
  }
  sub_8071710();
  dword_30006A8 = (int)sub_80718E8;
  return 0;
}
