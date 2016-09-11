signed int sub_80BDD18()
{
  signed int result; // r0@2

  if ( v202824F & 1 )
  {
    if ( v202824F & 8 )
    {
      result = 2;
    }
    else if ( v202824F & 4 )
    {
      result = 3;
    }
    else if ( v202824F & 2 )
    {
      result = 4;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = 1;
  }
  return result;
}
