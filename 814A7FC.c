int sub_814A7FC()
{
  int v1; // [sp+4h] [bp-4h]@0

  if ( v203A3D0 != 64 )
  {
    LoadTilesForSpriteSheet((int)&gUnknown_0842F140);
    DestroySpriteAndFreeResources((int)&gSprites[68 * v203A3D0]);
    v203A3D0 = 64;
  }
  if ( v203A3D1 != 64 )
  {
    DestroySpriteAndFreeResources((int)&gSprites[68 * v203A3D1]);
    v203A3D1 = 64;
    if ( !v203A3D3 )
      v4000000 &= 0x7FFFu;
    v400004B = v203A3D4;
  }
  return v1;
}
