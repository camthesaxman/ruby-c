int CameraPanningCB_PanAhead()
{
  int v0; // r1@4
  int v1; // r0@7
  __int16 *v2; // r2@8
  __int16 v3; // r0@9
  int v5; // [sp+0h] [bp-4h]@0

  if ( !v202E854 )
  {
    InstallCameraPanAheadCallback();
    return v5;
  }
  if ( v202E85B == 1 )
  {
    v0 = (unsigned __int8)byte_300059C ^ 1;
    byte_300059C ^= 1u;
    if ( !v0 )
      return v5;
  }
  else
  {
    byte_300059C = 0;
  }
  v1 = (unsigned __int8)player_get_direction_upper_nybble();
  if ( v1 == 2 )
  {
    v2 = &word_300059A;
    if ( word_300059A <= -8 )
      return v5;
    v3 = word_300059A - 2;
_08058372:
    *v2 = v3;
    return v5;
  }
  if ( v1 != 1 )
  {
    v2 = &word_300059A;
    if ( word_300059A > 31 )
    {
      if ( word_300059A <= 32 )
        return v5;
      v3 = word_300059A - 2;
    }
    else
    {
      v3 = word_300059A + 2;
    }
    goto _08058372;
  }
  if ( word_300059A <= 71 )
    word_300059A += 2;
  return v5;
}
