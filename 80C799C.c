signed int GetCurrentMapRotatingGatePuzzleType()
{
  signed int result; // r0@2

  if ( v2025738 == 268 )
  {
    result = 1;
  }
  else if ( v2025738 == 2077 )
  {
    result = 2;
  }
  else
  {
    result = 0;
  }
  return result;
}
