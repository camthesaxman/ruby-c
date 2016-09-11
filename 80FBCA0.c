int sub_80FBCA0()
{
  int v0; // r0@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = *(_DWORD *)(v20388CC + 28);
  if ( v0 )
  {
    DestroySprite(v0);
    FreeSpriteTilesByTag(*(_WORD *)(v20388CC + 88));
    FreeSpritePaletteByTag(*(_WORD *)(v20388CC + 90));
  }
  return v2;
}
