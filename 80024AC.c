signed int __fastcall IndexOfSpriteTileTag(unsigned __int16 a1)
{
  unsigned int v1; // r1@1

  v1 = 0;
  do
  {
    if ( (unsigned __int16)sSpriteTileRangeTags[v1] == a1 )
      return v1;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 0x3F );
  return 255;
}
