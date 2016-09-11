signed int __fastcall sub_80E5EC0(int a1, int a2)
{
  a1 = (unsigned __int8)a1;
  if ( (unsigned int)((a2 << 24) - 0x1000000) >> 24 > 1 )
  {
    if ( a1 == 11 || a1 == 13 )
      return 0;
  }
  else if ( a1 == 10 || a1 == 12 )
  {
    return 0;
  }
  return 1;
}
