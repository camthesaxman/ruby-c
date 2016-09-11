signed int CheckForBigMovieOrEmergencyNewsOnTV()
{
  signed int result; // r0@4

  if ( v2025738 != 1 )
    return 0;
  if ( v2024EAC )
  {
    if ( v2025739 != 2 )
      return 0;
  }
  else if ( v2025739 )
  {
    return 0;
  }
  if ( (unsigned __int8)FlagGet(0x85Du) != 1 && (unsigned __int8)FlagGet(0x830u) == 1 )
    result = 2;
  else
    result = 1;
  return result;
}
