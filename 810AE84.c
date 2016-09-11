signed int __fastcall sub_810AE84(unsigned int a1)
{
  signed int result; // r0@2

  a1 = (unsigned __int16)a1;
  if ( (unsigned __int16)a1 <= 0x3Cu )
  {
    if ( a1 <= 0x1E )
    {
      if ( a1 > 0xA )
        result = 2;
      else
        result = 1;
    }
    else
    {
      result = 3;
    }
  }
  else
  {
    result = 6;
  }
  return result;
}
