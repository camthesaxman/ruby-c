int sub_8080610()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    if ( (_UNKNOWN *)dword_2020018[17 * v0] == &gSpriteTemplate_839ACBC )
      DestroySprite((int)&gSprites[68 * v0]);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x3F );
  FreeSpriteTilesByTag(0x1205u);
  return v2;
}
