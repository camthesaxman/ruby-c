signed int __fastcall LoadSpritePalette(int a1)
{
  int v1; // r5@1
  signed int result; // r0@1
  signed int v3; // r4@3

  v1 = a1;
  LOBYTE(result) = IndexOfSpritePaletteTag(*(_WORD *)(a1 + 4));
  if ( (unsigned __int8)result == 255 )
  {
    v3 = (unsigned __int8)IndexOfSpritePaletteTag(0xFFFF);
    if ( v3 == 255 )
    {
      result = 255;
    }
    else
    {
      sSpritePaletteTags[v3] = *(_WORD *)(v1 + 4);
      DoLoadSpritePalette(*(_DWORD *)v1, 16 * v3);
      result = v3;
    }
  }
  else
  {
    result = (unsigned __int8)result;
  }
  return result;
}
