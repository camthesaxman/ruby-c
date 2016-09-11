signed int sub_80F5364()
{
  if ( v20087DE == 1 )
  {
    if ( !(sub_80F4FB4(1) << 24) )
    {
_080F53C2:
      ++v20087DE;
      return 1;
    }
  }
  else
  {
    if ( (signed int)v20087DE <= 1 )
    {
      if ( v20087DE )
        return 1;
      sub_80F5504(0);
      if ( sub_80F173C() << 24 )
        return 1;
      sub_80F2E18(v2008FE9);
      sub_80F01E0(v2008FE9);
      goto _080F53C2;
    }
    if ( v20087DE == 2 )
    {
      sub_80F4900(v2008FEE, v2008FEC);
      return 0;
    }
  }
  return 1;
}
