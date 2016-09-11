int sub_8102344()
{
  char v0; // r0@1

  v0 = ProcessMenuInputNoWrap_();
  if ( v0 )
  {
    if ( v0 == 1 || v0 == -1 )
    {
      MenuZeroFillScreen();
      v2000000 = 5;
    }
  }
  else
  {
    MenuZeroFillScreen();
    sub_8103D8C(0);
    sub_8103D8C(1);
    sub_8103D8C(2);
    v200000C += v2000012;
    v2000000 = 27;
  }
  return 0;
}
