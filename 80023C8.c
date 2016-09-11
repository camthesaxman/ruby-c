int __fastcall FreeSpriteTilesByTag(unsigned __int16 a1)
{
  int v1; // r4@1
  int v2; // r3@2
  int v3; // r5@2
  int v4; // r4@3
  int v6; // [sp+14h] [bp-4h]@0

  v1 = IndexOfSpriteTileTag(a1) & 0xFF;
  if ( v1 != 255 )
  {
    v2 = (unsigned __int16)sSpriteTileRanges[2 * v1];
    v3 = v1;
    if ( v2 < v2 + (unsigned __int16)word_3000082[2 * v1] )
    {
      v4 = v2 + (unsigned __int16)word_3000082[2 * v1];
      do
      {
        gSpriteTileAllocBitmap[(unsigned int)v2 >> 3] &= ~(unsigned __int8)(1 << (v2 & 7));
        v2 = (v2 + 1) & 0xFFFF;
      }
      while ( v2 < v4 );
    }
    sSpriteTileRangeTags[v3] = -1;
  }
  return v6;
}
