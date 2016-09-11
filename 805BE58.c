signed int __fastcall sub_805BE58(int a1)
{
  int v1; // r4@1
  signed int result; // r0@2

  v1 = a1;
  if ( (unsigned __int8)IndexOfSpritePaletteTag(*(_WORD *)(a1 + 4)) == 255 )
    result = (unsigned __int8)LoadSpritePalette(v1);
  else
    result = 255;
  return result;
}
