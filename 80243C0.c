int atk63_jumptoattack()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( *(_BYTE *)(v2024C10 + 1) )
  {
    v2024BE6 = v2024BEA;
  }
  else
  {
    v2024BE6 = v2024BEA;
    v2024BE8 = v2024BEA;
  }
  v2024C10 = *(&gUnknown_081D6BBC + gBattleMoves[12 * v2024BE6]);
  return v1;
}
