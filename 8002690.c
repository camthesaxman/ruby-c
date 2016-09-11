signed int __fastcall AllocSpritePalette(__int16 a1)
{
  __int16 v1; // r4@1
  signed int result; // r0@1

  v1 = a1;
  LOBYTE(result) = IndexOfSpritePaletteTag(0xFFFF);
  if ( (unsigned __int8)result == 255 )
  {
    result = 255;
  }
  else
  {
    sSpritePaletteTags[(unsigned __int8)result] = v1;
    result = (unsigned __int8)result;
  }
  return result;
}
