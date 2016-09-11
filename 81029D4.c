signed int __fastcall sub_81029D4(unsigned __int8 a1, int a2, int a3)
{
  signed int result; // r0@3

  a2 = (unsigned __int8)a2;
  a3 = (unsigned __int8)a3;
  if ( a1 != (unsigned __int8)a2 || a1 != a3 )
  {
    if ( (a1 || a2 || a3 != 1) && (a1 != 1 || a2 != 1 || a3) )
    {
      if ( a1 == 4 )
        result = 0;
      else
        result = 9;
    }
    else
    {
      result = 6;
    }
  }
  else
  {
    result = gUnknown_083ECE52[a1];
  }
  return result;
}
