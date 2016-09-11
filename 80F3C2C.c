int sub_80F3C2C()
{
  unsigned int v0; // r4@3
  unsigned int v1; // r4@5
  int v3; // [sp+4h] [bp-4h]@0

  if ( v2009348 )
  {
    FreeOamMatrix((unsigned int)*(_BYTE *)(v2009348 + 3) << 26 >> 27);
    DestroySprite(v2009348);
    v2009348 = 0;
  }
  v0 = 0;
  do
  {
    FreeSpriteTilesByTag(v0 + 11);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0xB );
  v1 = 0;
  do
  {
    FreeSpritePaletteByTag(v1 + 10);
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 4 );
  sub_80F2F48();
  return v3;
}
