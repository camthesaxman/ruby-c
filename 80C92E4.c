signed int CanFish()
{
  unsigned int v0; // r0@1
  unsigned __int8 v1; // r6@1
  unsigned int v2; // r5@1
  signed __int16 v4; // [sp+0h] [bp-14h]@1

  GetXYCoordsOneStepInFrontOfPlayer(&v4, &v4 + 1);
  v0 = MapGridGetMetatileBehaviorAt(v4, *(&v4 + 1));
  v1 = v0;
  v0 <<= 24;
  v2 = v0 >> 24;
  if ( !(MetatileBehavior_IsWaterfall(SBYTE3(v0)) << 24) && !(TestPlayerAvatarFlags(0x10u) << 24) )
  {
    if ( TestPlayerAvatarFlags(8u) << 24 )
    {
      if ( MetatileBehavior_IsSurfableWaterOrUnderwater(v2) << 24 && !(MapGridIsImpassableAt(v4, *(&v4 + 1)) << 24)
        || (unsigned __int8)sub_8057434(v1) == 1 )
      {
        return 1;
      }
    }
    else if ( IsPlayerFacingSurfableFishableWater() << 24 )
    {
      return 1;
    }
  }
  return 0;
}
