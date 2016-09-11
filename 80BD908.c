int __fastcall UpdateTVScreensOnMap(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r0@1
  int v7; // [sp+8h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  v4 = FlagSet(0x831u);
  v5 = (unsigned __int8)CheckForBigMovieOrEmergencyNewsOnTV(v4);
  if ( v5 == 1 )
    goto _080BD92C;
  if ( v5 != 2 )
  {
    if ( v2025738 == 13 )
    {
_080BD92C:
      SetTVMetatilesOnMap(v2, v3, 3);
      return v7;
    }
    if ( FlagGet(0x832u) << 24
      && ((unsigned __int8)sub_80BD8B8() != 255
       || (sub_80BECA0() & 0xFF) != 255
       || IsTVShowInSearchOfTrainersAiring() << 24) )
    {
      FlagReset(0x831u);
      SetTVMetatilesOnMap(v2, v3, 3);
    }
  }
  return v7;
}
