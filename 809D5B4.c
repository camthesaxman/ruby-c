int unref_sub_809D5B4()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    FreeSpritePaletteByTag(*((_WORD *)&gMonIconPaletteTable + 4 * v0 + 2));
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 5 );
  return v2;
}
