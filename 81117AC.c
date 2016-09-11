int sub_81117AC()
{
  int v1; // [sp+0h] [bp-Ch]@1
  int v2; // [sp+4h] [bp-8h]@1
  int v3; // [sp+8h] [bp-4h]@1

  v1 = 33558452;
  v2 = 198144;
  LZ77UnCompWram(&gAreaUnknownTiles, 33558452);
  LoadSpriteSheet((int)&v1);
  LoadSpritePalette((int)&gUnknown_083F865C);
  return v3;
}
