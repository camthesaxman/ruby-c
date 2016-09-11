signed int hm_prepare_waterfall()
{
  char v0; // r0@1
  signed int result; // r0@3
  signed __int16 v2; // [sp+0h] [bp-Ch]@1

  GetXYCoordsOneStepInFrontOfPlayer(&v2, &v2 + 1);
  v0 = MapGridGetMetatileBehaviorAt(v2, *(&v2 + 1));
  if ( (unsigned __int8)MetatileBehavior_IsWaterfall(v0) != 1 || (unsigned __int8)IsPlayerSurfingNorth() != 1 )
  {
    result = 0;
  }
  else
  {
    dword_300485C = (int)sub_808AB90;
    dword_3005CE4 = (int)sub_808AE08;
    result = 1;
  }
  return result;
}
