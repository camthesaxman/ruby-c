int __fastcall FreeSpritePaletteByTag(unsigned __int16 a1)
{
  int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = (unsigned __int8)IndexOfSpritePaletteTag(a1);
  if ( v1 != 255 )
    sSpritePaletteTags[v1] = -1;
  return v3;
}
