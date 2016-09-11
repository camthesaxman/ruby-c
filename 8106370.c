int sub_8106370()
{
  signed int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = IndexOfSpritePaletteTag(6u);
  LoadPalette(149518216, (((v0 << 20) & 0xFFFFFFFu) + 0x1000000) >> 16, 32);
  return v2;
}
