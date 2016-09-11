int sub_80C310C()
{
  signed int v0; // r4@1
  unsigned int v1; // r5@1
  unsigned __int16 v2; // r0@2
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  v1 = 10485760;
  do
  {
    v2 = mon_icon_convert_unown_species_id(*(_WORD *)((v0 << 6) + 0x2038570), 0);
    LoadPalette((int)&gMonIconPalettes + 32 * gMonIconPaletteIndices[v2], v1 >> 16, 32);
    v1 += 0x100000;
    ++v0;
  }
  while ( v0 <= 3 );
  return v4;
}
