int __fastcall GetGroundEffectFlags_JumpLanding(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r7@1
  _DWORD *v3; // r6@1
  unsigned int v4; // r5@2
  int v6; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( (*a1 & 0x2000020) == 32 )
  {
    v4 = 0;
    while ( !(call_via_r1(*((_BYTE *)v2 + 30), gJumpLanding_MetatileFunctionPointers[v4]) << 24) )
    {
      v4 = (v4 + 1) & 0xFF;
      if ( v4 > 5 )
        return v6;
    }
    *v3 |= gJumpLanding_Bitmasks[v4];
  }
  return v6;
}
