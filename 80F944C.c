int sub_80F944C()
{
  unsigned int v0; // r2@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33786048);
    *(_BYTE *)(v0 + 33786048) = -1;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  FreeSpritePaletteByTag(6u);
  LoadSpritePalette((int)&gUnknown_083E5968);
  return v2;
}
