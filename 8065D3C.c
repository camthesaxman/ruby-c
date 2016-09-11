signed int __fastcall compare_012(int a1, int a2)
{
  signed int result; // r0@2

  a1 = (unsigned __int16)a1;
  a2 = (unsigned __int16)a2;
  if ( (unsigned __int16)a1 >= (unsigned int)(unsigned __int16)a2 )
  {
    if ( a1 == a2 )
      result = 1;
    else
      result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}
