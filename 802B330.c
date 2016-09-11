int atkEB_settypetoterrain()
{
  int v0; // r1@1
  int v2; // [sp+14h] [bp-4h]@0

  v0 = gTerrainToType[(unsigned __int8)byte_300428C];
  if ( *(_BYTE *)(88 * v2024C07 + 0x2024AA1) == v0 || *(_BYTE *)(88 * v2024C07 + 0x2024AA2) == v0 )
  {
    v2024C10 = *(_BYTE *)(v2024C10 + 1) | (*(_BYTE *)(v2024C10 + 2) << 8) | (*(_BYTE *)(v2024C10 + 3) << 16) | (*(_BYTE *)(v2024C10 + 4) << 24);
  }
  else
  {
    *(_BYTE *)(88 * v2024C07 + 0x2024AA1) = gTerrainToType[(unsigned __int8)byte_300428C];
    *(_BYTE *)(88 * v2024C07 + 0x2024AA2) = gTerrainToType[(unsigned __int8)byte_300428C];
    byte_30041C0[0] = -3;
    byte_30041C1 = 3;
    LOBYTE(word_30041C2) = gTerrainToType[(unsigned __int8)byte_300428C];
    HIBYTE(word_30041C2) = -1;
    v2024C10 += 5;
  }
  return v2;
}
