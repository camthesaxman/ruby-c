int __fastcall sub_809D608(unsigned __int16 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  FreeSpritePaletteByTag(*((_WORD *)&gMonIconPaletteTable + 4 * gMonIconPaletteIndices[a1] + 2));
  return v2;
}
