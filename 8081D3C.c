signed int sub_8081D3C()
{
  unsigned int v0; // r0@1
  unsigned __int8 v1; // r5@1
  int v2; // r4@1
  signed int result; // r0@2
  signed __int16 v4; // [sp+0h] [bp-10h]@1

  PlayerGetDestCoords(&v4, &v4 + 1);
  v0 = MapGridGetMetatileBehaviorAt(v4, *(&v4 + 1));
  v1 = v0;
  v0 <<= 24;
  v2 = v0 >> 24;
  if ( MetatileBehavior_IsTallGrass(SBYTE3(v0)) << 24 )
    return 0;
  if ( MetatileBehavior_IsLongGrass(v2) << 24 )
    return 1;
  if ( MetatileBehavior_IsSandOrDeepSand(v2) << 24 )
    goto LABEL_30;
  if ( (unsigned int)v202E83F - 1 <= 8 )
  {
    switch ( v202E83F )
    {
      case 4u:
        if ( sub_80574C4(v1) << 24 )
          return 8;
        if ( MetatileBehavior_IsSurfableWaterOrUnderwater(v1) << 24 )
          return 5;
        return 7;
      case 8u:
      case 9u:
        return 8;
      case 5u:
        return 3;
      case 6u:
        if ( !(MetatileBehavior_IsSurfableWaterOrUnderwater(v1) << 24) )
          goto _08081E7A;
        return 4;
      default:
        break;
    }
  }
  if ( sub_8057568(v1) << 24 )
    return 4;
  if ( MetatileBehavior_IsSurfableWaterOrUnderwater(v1) << 24 )
    return 5;
  if ( sub_80574D8(v1) << 24 )
    return 6;
  if ( TestPlayerAvatarFlags(8u) << 24 )
  {
    if ( sub_8057450(v1) << 24 )
      return 5;
    if ( (unsigned __int8)sub_8057434(v1) == 1 )
      return 4;
  }
  if ( v2025738 == 7168 || (unsigned __int8)sav1_get_weather_probably() == 8 )
LABEL_30:
    result = 2;
  else
_08081E7A:
    result = 9;
  return result;
}
