signed int sub_808ADC8()
{
  signed int result; // r0@2

  v202FF88 = sub_8068F18();
  v202FF88 = v202FF88;
  if ( v202FF88 )
  {
    dword_300485C = (int)sub_808AB90;
    dword_3005CE4 = (int)sub_808ADAC;
    result = 1;
  }
  else
  {
    result = 0;
  }
  return result;
}
