int __fastcall unref_sub_809D540(unsigned __int16 a1)
{
  signed int v1; // r1@1
  void **v2; // r4@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( a1 > 0x19Cu )
    v1 = 260;
  v2 = &gMonIconPaletteTable + 2 * gMonIconPaletteIndices[v1];
  if ( (unsigned __int8)IndexOfSpritePaletteTag(*((_WORD *)v2 + 2)) == 255 )
    LoadSpritePalette((int)v2);
  return v4;
}
