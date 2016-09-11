signed int __fastcall CheckMovementInputNotOnBike(unsigned __int8 a1)
{
  signed int result; // r0@2

  if ( a1 )
  {
    if ( a1 == (player_get_direction_upper_nybble() & 0xFF) || v202E85A == 2 )
      result = 2;
    else
      result = 1;
    v202E85A = result;
  }
  else
  {
    v202E85A = 0;
    result = 0;
  }
  return result;
}
