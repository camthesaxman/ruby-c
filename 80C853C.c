signed int unref_sub_80C853C()
{
  signed int result; // r0@2

  sub_80C82EC();
  if ( v202E8DC == 0xFFFF )
  {
    result = 0;
  }
  else
  {
    ConvertIntToDecimalStringN((char *)&gStringVar2, *(_BYTE *)(16 * v202E8DC + 0x2038811), 2, 3);
    result = 1;
  }
  return result;
}
