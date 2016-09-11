signed int __fastcall IndexOfSpritePaletteTag(unsigned __int16 a1)
{
  unsigned int v1; // r1@1
  signed int result; // r0@3

  v1 = (unsigned __int8)gReservedSpritePaletteCount;
  if ( (unsigned __int8)gReservedSpritePaletteCount > 0xFu )
  {
LABEL_5:
    result = 255;
  }
  else
  {
    while ( (unsigned __int16)sSpritePaletteTags[v1] != a1 )
    {
      v1 = (v1 + 1) & 0xFF;
      if ( v1 > 0xF )
        goto LABEL_5;
    }
    result = v1;
  }
  return result;
}
