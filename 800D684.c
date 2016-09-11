int unref_sub_800D684()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  ResetSpriteData();
  v0 = CreateSprite((int)&gSpriteTemplate_81F96D0, 0, 0);
  gSprites[68 * v0 + 62] |= 4u;
  SetMainCallback2((int)sub_800D6C4);
  return v2;
}
