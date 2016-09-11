signed int sub_80F5264()
{
  int v0; // r0@1

  v0 = 0x2000000;
  if ( v20087DE == 1 )
    goto _080F52AA;
  if ( (signed int)v20087DE <= 1 )
  {
    if ( v20087DE )
      return 1;
    sub_80F2E18(v2008FE9);
    sub_80F01E0(v2008FE9);
    v0 = v20087DE + 1;
    ++v20087DE;
_080F52AA:
    if ( !(sub_80F4FB4(v0) << 24) )
    {
      sub_80F4900(v2008FEE, v2008FEC);
      ++v20087DE;
    }
    return 1;
  }
  if ( v20087DE == 2 )
    return 0;
  return 1;
}
