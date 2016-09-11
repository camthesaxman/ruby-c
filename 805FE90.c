signed int __fastcall sub_805FE90(int a1, int a2, int a3, int a4)
{
  signed int result; // r0@2

  a2 = (unsigned __int16)a2;
  a4 = (unsigned __int16)a4;
  a1 = (signed __int16)a1;
  a3 = (signed __int16)a3;
  if ( (signed __int16)a1 <= (signed __int16)a3 )
  {
    if ( a1 >= a3 )
    {
      if ( a2 << 16 > a4 << 16 )
        result = 2;
      else
        result = 1;
    }
    else
    {
      result = 4;
    }
  }
  else
  {
    result = 3;
  }
  return result;
}
