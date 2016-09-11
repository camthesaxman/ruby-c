int __fastcall unref_sub_809D5D8(unsigned __int16 a1)
{
  signed int v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( a1 > 0x19Cu )
    v1 = 260;
  FreeSpritePaletteByTag(*((_WORD *)&gMonIconPaletteTable + 4 * gMonIconPaletteIndices[v1] + 2));
  return v3;
}
