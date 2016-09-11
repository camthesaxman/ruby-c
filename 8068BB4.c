int __fastcall is_non_stair_warp_tile(char a1, signed int a2)
{
  int result; // r0@8

  a2 = (unsigned __int8)a2;
  if ( (unsigned __int8)a2 == 2 )
  {
    LOBYTE(result) = MetatileBehavior_IsNorthArrowWarp((unsigned __int8)a1);
    return (unsigned __int8)result;
  }
  if ( a2 > 2 )
  {
    if ( a2 == 3 )
    {
      LOBYTE(result) = MetatileBehavior_IsWestArrowWarp(a1);
    }
    else
    {
      if ( a2 != 4 )
        return 0;
      LOBYTE(result) = MetatileBehavior_IsEastArrowWarp(a1);
    }
    return (unsigned __int8)result;
  }
  if ( a2 == 1 )
  {
    LOBYTE(result) = MetatileBehavior_IsSouthArrowWarp((unsigned __int8)a1);
    return (unsigned __int8)result;
  }
  return 0;
}
