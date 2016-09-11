int sub_8059204()
{
  char v0; // r0@4
  int v2; // [sp+4h] [bp-4h]@0

  v202E85B = 0;
  if ( PlayerIsAnimActive() << 24 )
  {
    if ( PlayerCheckIfAnimFinishedOrInactive() << 24 )
    {
      if ( !(sub_80592A4() << 24) )
      {
        v0 = 2;
        goto _08059240;
      }
    }
    else if ( !(player_is_anim_in_certain_ranges() << 24) )
    {
      v0 = 1;
_08059240:
      v202E85B = v0;
      return v2;
    }
  }
  return v2;
}
