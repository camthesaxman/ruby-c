signed int __fastcall GetSpriteTileStartByTag(unsigned __int16 a1)
{
  unsigned __int8 v1; // r0@1
  signed int result; // r0@2

  v1 = IndexOfSpriteTileTag(a1);
  if ( v1 == 255 )
    result = 0xFFFF;
  else
    result = (unsigned __int16)sSpriteTileRanges[2 * v1];
  return result;
}
