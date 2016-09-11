unsigned int __fastcall sub_8091818(unsigned __int8 a1, unsigned __int16 a2, unsigned int a3, unsigned int a4)
{
  signed int v4; // r4@1
  unsigned int result; // r0@1

  v4 = a1;
  result = a2;
  a3 = (unsigned __int16)a3;
  a4 = (unsigned __int16)a4;
  if ( v4 == 1 )
  {
    if ( a2 <= a3 )
      return result;
    LOWORD(result) = a2 - 1;
    return (unsigned __int16)result;
  }
  if ( v4 > 1 )
  {
    if ( v4 == 2 )
    {
      if ( a2 < a4 )
      {
_08091862:
        LOWORD(result) = a2 + 1;
        return (unsigned __int16)result;
      }
      result = a3;
    }
    else if ( v4 == 3 )
    {
      if ( a2 <= a3 )
        return a4;
      LOWORD(result) = a2 - 1;
      return (unsigned __int16)result;
    }
  }
  else if ( !v4 && a2 < a4 )
  {
    goto _08091862;
  }
  return result;
}
