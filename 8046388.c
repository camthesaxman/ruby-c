int __fastcall sub_8046388(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !*(_WORD *)(a1 + 46) )
  {
    FreeSpriteTilesByTag(0xD6EBu);
    FreeSpritePaletteByTag(0xD6EBu);
    if ( *(_WORD *)(v1 + 48) )
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    else
      DestroySprite(v1);
  }
  return v3;
}
