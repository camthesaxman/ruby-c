int __fastcall DestroySpriteAndFreeResources(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  FreeSpriteTiles(a1);
  FreeSpritePalette(v1);
  FreeSpriteOamMatrix(v1);
  DestroySprite(v1);
  return v3;
}
