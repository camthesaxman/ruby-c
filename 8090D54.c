signed int __fastcall sub_8090D54(unsigned __int16 a1, int a2)
{
  signed int result; // r0@3

  a2 = (unsigned __int8)a2;
  if ( (_BYTE)a2 )
  {
    if ( a2 == 1 )
      result = gPokedexEntries[18 * a1 + 7];
    else
      result = 1;
  }
  else
  {
    result = gPokedexEntries[18 * a1 + 6];
  }
  return result;
}
