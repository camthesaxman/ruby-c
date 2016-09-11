int sub_814AB84()
{
  char *v0; // r4@2
  int v2; // [sp+8h] [bp-4h]@0

  if ( v203A3D1 != 64 )
  {
    v0 = &gSprites[68 * v203A3D1];
    FreeSpriteOamMatrix((int)v0);
    DestroySprite((int)v0);
    v203A3D1 = 64;
    if ( !v203A3D3 )
      v4000000 &= 0x7FFFu;
    v400004B = v203A3D4;
  }
  return v2;
}
