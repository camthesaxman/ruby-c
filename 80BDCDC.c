signed int GabbyAndTyGetLastQuote()
{
  signed int result; // r0@2

  if ( v202824A == 0xFFFF )
  {
    result = 0;
  }
  else
  {
    sub_80EB3FC(&gStringVar1, v202824A);
    v202824A = -1;
    result = 1;
  }
  return result;
}
