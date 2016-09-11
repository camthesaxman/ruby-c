int sub_80B6CA8()
{
  unsigned __int8 v0; // r0@1
  unsigned __int8 v1; // r0@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83CE610, 204, 108);
  SetSubspriteTables((int)&gSprites[68 * v0], (int)&gUnknown_083CE578);
  v1 = CreateSprite((int)&gSpriteTemplate_83CE628, 204, 132);
  SetSubspriteTables((int)&gSprites[68 * v1], (int)&gUnknown_083CE578);
  return v3;
}
