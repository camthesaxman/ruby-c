int FreeSpriteTileRanges()
{
  unsigned int v0; // r2@1
  int v2; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    sSpriteTileRangeTags[v0];
    sSpriteTileRangeTags[v0] = -1;
    sSpriteTileRanges[2 * v0] = 0;
    word_3000082[2 * v0] = 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x3F );
  return v2;
}
