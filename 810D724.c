signed int sp0E3_walkrun_bitfield_interpretation()
{
  signed int result; // r0@2

  if ( TestPlayerAvatarFlags(4u) << 24 )
  {
    result = 1;
  }
  else if ( TestPlayerAvatarFlags(2u) << 24 )
  {
    result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}
