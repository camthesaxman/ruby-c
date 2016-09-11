int atkD8_setdamagetohealthdifference()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( *(_WORD *)(88 * v2024C08 + 0x2024AA8) > (unsigned int)*(_WORD *)(88 * v2024C07 + 0x2024AA8) )
  {
    v2024BEC = *(_WORD *)(88 * v2024C08 + 0x2024AA8) - *(_WORD *)(88 * v2024C07 + 0x2024AA8);
    v2024C10 += 5;
  }
  else
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  return v1;
}
