_BYTE *__fastcall sub_80FBFB4(_BYTE *a1, unsigned int a2, unsigned int a3)
{
  _BYTE *result; // r0@2

  a2 = (unsigned __int16)a2;
  a3 = (unsigned __int16)a3;
  if ( (unsigned __int16)a2 == 86 )
  {
    result = GetSecretBaseMapName(a1);
  }
  else if ( a2 > 0x57 )
  {
    if ( !a3 )
      a3 = 18;
    result = StringFill(a1, 0, a3);
  }
  else
  {
    result = StringCopy(a1, *(_BYTE **)&gRegionMapLocations[8 * a2 + 4]);
  }
  return result;
}
