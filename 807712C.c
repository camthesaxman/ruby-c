int __fastcall sub_807712C(int a1, int a2, __int16 a3)
{
  int result; // r0@2

  a1 = (signed __int16)a1;
  a2 = (signed __int16)a2;
  if ( (signed __int16)a1 >= (signed __int16)a2 )
  {
    if ( a1 > a2 )
    {
      result = a3;
      if ( a3 < 0 )
        result = -a3;
      goto _08077158;
    }
    LOWORD(result) = 0;
  }
  else
  {
    result = a3;
    if ( a3 < 0 )
_08077158:
      return (signed __int16)-result;
  }
  return (signed __int16)result;
}
