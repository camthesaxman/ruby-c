int __fastcall sub_809D580(unsigned __int16 a1)
{
  void **v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = &gMonIconPaletteTable + 2 * gMonIconPaletteIndices[a1];
  if ( (unsigned __int8)IndexOfSpritePaletteTag(*((_WORD *)v1 + 2)) == 255 )
    LoadSpritePalette((int)v1);
  return v3;
}
