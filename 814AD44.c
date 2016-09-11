int sub_814AD44()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v203A3D2 != 64 )
  {
    LoadTilesForSpriteSheet((int)&gUnknown_0842F1C0);
    DestroySpriteAndFreeResources((int)&gSprites[68 * v203A3D2]);
    v203A3D2 = 64;
  }
  return v1;
}
