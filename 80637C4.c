int __fastcall GetGroundEffectFlags_LongGrassOnBeginStep(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v2 = a2;
  if ( MetatileBehavior_IsLongGrass(*(_BYTE *)(a1 + 30)) << 24 )
    *v2 |= 8u;
  return v4;
}
