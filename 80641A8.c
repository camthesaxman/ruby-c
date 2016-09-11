int __fastcall GroundEffect_JumpLandingDust(int a1, int a2)
{
  int v3; // [sp+4h] [bp-4h]@0

  v202FF84 = *(_WORD *)(a1 + 16);
  v202FF88 = *(_WORD *)(a1 + 18);
  v202FF8C = (unsigned int)*(_BYTE *)(a1 + 11) >> 4;
  v202FF90 = (unsigned int)*(_BYTE *)(a2 + 5) << 28 >> 30;
  FieldEffectStart(10);
  return v3;
}
