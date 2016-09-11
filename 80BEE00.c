signed int __fastcall IsPriceDiscounted(int a1)
{
  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 == 1 )
  {
    if ( v2025738 != 256 || v202E8DE != 26 )
      return 0;
    return 1;
  }
  if ( a1 != 3 || v2025738 == 5645 )
    return 1;
  return 0;
}
