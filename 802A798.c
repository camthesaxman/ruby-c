int atkD9_scaledamagebyhealthratio()
{
  int v0; // r0@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( !v2024DEC )
  {
    v0 = *(_WORD *)(88 * v2024C07 + 0x2024AA8) * gBattleMoves[12 * v2024BE6 + 1] / *(_WORD *)(88 * v2024C07 + 0x2024AAC);
    v2024DEC = v0;
    if ( !(v0 << 16) )
      v2024DEC = 1;
  }
  ++v2024C10;
  return v2;
}
