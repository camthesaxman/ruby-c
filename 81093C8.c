int sub_81093C8()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 5 * v2016088 & 0xFF;
  if ( ((unsigned __int16)Random() % 0x64u & 0xFF) >= v0 )
    v2039238 += 5;
  else
    v2039238 = *(_BYTE *)(v2039238 + 1) | (*(_BYTE *)(v2039238 + 2) << 8) | (*(_BYTE *)(v2039238 + 3) << 16) | (*(_BYTE *)(v2039238 + 4) << 24);
  return v2;
}
