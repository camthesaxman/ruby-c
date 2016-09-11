signed int sub_80F38EC()
{
  if ( v2000306 == 1 )
  {
    sub_80F2E18(0);
    goto _080F3952;
  }
  if ( (signed int)v2000306 <= 1 )
  {
    if ( v2000306 )
      return 0;
    v2009348 = 0;
    v200BC92 = 0;
    goto _080F3952;
  }
  if ( v2000306 == 2 )
  {
    sub_80F3970();
    ++v2000306;
  }
  else if ( v2000306 != 3 )
  {
    return 0;
  }
  if ( !(sub_80F39A4() << 24) )
_080F3952:
    ++v2000306;
  return 1;
}
