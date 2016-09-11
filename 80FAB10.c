int sub_80FAB10()
{
  int v0; // r0@1
  int v1; // r0@3
  int v3; // [sp+4h] [bp-4h]@0

  v0 = *(_DWORD *)(v20388CC + 28);
  if ( v0 )
  {
    DestroySprite(v0);
    FreeSpriteTilesByTag(*(_WORD *)(v20388CC + 88));
    FreeSpritePaletteByTag(*(_WORD *)(v20388CC + 90));
  }
  v1 = *(_DWORD *)(v20388CC + 32);
  if ( v1 )
  {
    DestroySprite(v1);
    FreeSpriteTilesByTag(*(_WORD *)(v20388CC + 112));
    FreeSpritePaletteByTag(*(_WORD *)(v20388CC + 114));
  }
  return v3;
}
