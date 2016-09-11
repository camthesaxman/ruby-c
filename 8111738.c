int sub_8111738()
{
  unsigned int i; // r4@1
  unsigned int v1; // r4@3
  int v2; // r0@4
  int v4; // [sp+Ch] [bp-4h]@0

  FreeSpriteTilesByTag(2u);
  FreeSpritePaletteByTag(2u);
  for ( i = 0; i < v20006E0; i = (i + 1) & 0xFFFF )
    DestroySprite(*(_DWORD *)(4 * i + 0x2000660));
  FreeSpriteTilesByTag(3u);
  FreeSpritePaletteByTag(3u);
  v1 = 0;
  do
  {
    v2 = *(_DWORD *)(4 * v1 + 0x2000FA8);
    if ( v2 )
      DestroySprite(v2);
    v1 = (v1 + 1) & 0xFFFF;
  }
  while ( v1 <= 2 );
  return v4;
}
