signed int __fastcall sub_805530C(signed int a1)
{
  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 == 19 )
    return 1;
  if ( a1 > 19 )
  {
    if ( a1 == 20 )
      return 3;
    if ( a1 == 21 )
      return 4;
  }
  else if ( a1 == 18 )
  {
    return 2;
  }
  return 0;
}
