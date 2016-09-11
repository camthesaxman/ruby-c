int sub_809D51C()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    LoadSpritePalette((int)(&gMonIconPaletteTable + 2 * v0));
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 5 );
  return v2;
}
