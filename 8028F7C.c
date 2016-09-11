int atkB6_happinesstodamagecalculation()
{
  int v0; // r1@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( gBattleMoves[12 * v2024BE6] == 121 )
    v0 = *(_BYTE *)(88 * v2024C07 + 0x2024AAB);
  else
    v0 = 255 - *(_BYTE *)(88 * v2024C07 + 0x2024AAB);
  v2024DEC = 10 * v0 / 25;
  ++v2024C10;
  return v2;
}
