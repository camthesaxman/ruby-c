int sub_80F3130()
{
  unsigned int v0; // r5@3
  int v2; // [sp+Ch] [bp-4h]@0

  if ( v20087CC )
  {
    DestroySprite(v20087CC);
    FreeSpriteTilesByTag(9u);
    FreeSpritePaletteByTag(9u);
    v20087CC = 0;
  }
  v0 = 0;
  do
  {
    if ( *(_DWORD *)(4 * v0 + 0x20087D0) )
    {
      DestroySprite(*(_DWORD *)(4 * v0 + 0x20087D0));
      *(_DWORD *)(4 * v0 + 0x20087D0) = 0;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 1 );
  FreeSpriteTilesByTag(0xAu);
  return v2;
}
