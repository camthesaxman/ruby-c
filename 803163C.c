signed int __fastcall sub_803163C(signed int a1)
{
  a1 = (unsigned __int8)a1;
  if ( (signed int)(unsigned __int8)a1 <= 13 )
  {
    if ( a1 < 10 && a1 != 2 )
      return 0;
    return 1;
  }
  if ( a1 == 17 )
    return 1;
  return 0;
}
