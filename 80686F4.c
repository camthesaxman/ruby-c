void *__fastcall TryGetFieldMoveScript(int a1, char a2)
{
  char v2; // r4@1
  void *result; // r0@4

  v2 = a2;
  if ( (unsigned __int8)FlagGet(2059) != 1
    || (unsigned __int8)PartyHasMonWithSurf() != 1
    || (unsigned __int8)IsPlayerFacingSurfableFishableWater() != 1 )
  {
    if ( (unsigned __int8)MetatileBehavior_IsWaterfall(v2) == 1 )
    {
      if ( (unsigned __int8)FlagGet(2062) != 1 || (unsigned __int8)IsPlayerSurfingNorth() != 1 )
        result = &CannotUseWaterfallScript;
      else
        result = &UseWaterfallScript;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    result = &UseSurfScript;
  }
  return result;
}
