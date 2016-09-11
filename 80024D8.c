signed int __fastcall GetSpriteTileTagByTileStart(unsigned __int16 a1)
{
  unsigned int v1; // r2@1
  __int16 *v2; // r1@2

  v1 = 0;
  do
  {
    v2 = &sSpriteTileRangeTags[v1];
    if ( (unsigned __int16)*v2 != 0xFFFF && (unsigned __int16)sSpriteTileRanges[2 * v1] == a1 )
      return (unsigned __int16)*v2;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0x3F );
  return 0xFFFF;
}
