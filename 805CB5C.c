signed int __fastcall sub_805CB5C(__int16 a1, __int16 a2, __int16 a3, __int16 a4)
{
  int v4; // r4@1
  __int16 v5; // r5@1
  signed int result; // r0@1

  v4 = a1;
  v5 = a2;
  result = (unsigned __int8)sub_805CAAC(a1, a2, a3, a4);
  if ( result == 1 )
  {
    result = (unsigned __int8)sub_805CAEC(v4);
    if ( result != 3 )
      return result;
    return 2;
  }
  if ( result == 3 )
  {
    result = (unsigned __int8)sub_805CADC(v4, v5);
    if ( result == 1 )
      return 2;
  }
  return result;
}
