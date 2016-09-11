signed int sub_810CBB4()
{
  signed int result; // r0@3

  if ( v202E83D != 1 || FlagGet(0x828u) << 24 )
  {
    result = 0;
  }
  else
  {
    dword_300485C = (int)sub_808AB90;
    dword_3005CE4 = (int)sub_810CBFC;
    result = 1;
  }
  return result;
}
