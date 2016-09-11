int GetForcedMovementByMetatileBehavior()
{
  int v0; // r5@2
  unsigned int v1; // r4@2
  int result; // r0@4

  if ( v202E858 & 0x20 )
  {
_08058996:
    result = 0;
  }
  else
  {
    v0 = BYTE2(dword_30048A0[9 * v202E85D + 7]);
    v1 = 0;
    while ( !(call_via_r1(v0, gUnknown_0830FB58[v1]) << 24) )
    {
      v1 = (v1 + 1) & 0xFF;
      if ( v1 > 0x11 )
        goto _08058996;
    }
    result = (v1 + 1) & 0xFF;
  }
  return result;
}
