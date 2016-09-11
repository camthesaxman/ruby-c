int sub_81289AC()
{
  signed int i; // r1@1
  int v2; // [sp+Ch] [bp-4h]@0

  for ( i = 33657572; v20192E4 != 2; i = 33657572 )
  {
    if ( v20192E4 == 1 )
    {
      if ( *(_WORD *)(i + 2) )
      {
        call_via_r0(*(&gUnknown_08401E60 + *v2039238));
      }
      else
      {
        *(_BYTE *)(v20192E8 + 0x20192E9) = 0;
        v20192ED |= 1u;
      }
      if ( v20192ED & 1 )
      {
        ++v20192E8;
        if ( v20192E8 > 3u )
          ++v20192E4;
        else
          v20192E4 = 0;
        v20192ED &= 0xFEu;
      }
    }
    else if ( (signed int)v20192E4 <= 1 && !v20192E4 )
    {
      v2039238 = *(&gContestAIs + v20192F4);
      if ( *(_WORD *)(2 * v20192E8 + (v2019325 << 6) + 0x203858E) )
        v20192E6 = *(_WORD *)(2 * v20192E8 + (v2019325 << 6) + 0x203858E);
      else
        v20192E6 = 0;
      ++v20192E4;
    }
  }
  return v2;
}
