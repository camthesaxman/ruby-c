int sub_81051C0()
{
  unsigned __int8 v0; // r0@1
  unsigned __int8 v1; // r4@1
  unsigned __int8 v2; // r0@1
  unsigned __int8 v3; // r4@1
  int v5; // [sp+1Ch] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83ED474, 368, 52);
  v1 = v0;
  gSprites[68 * v0 + 5] = gSprites[68 * v0 + 5] & 0xF3 | (unsigned int)gSprites;
  gSprites[68 * v0 + 62] |= 2u;
  SetSubspriteTables((int)&gSprites[68 * v0], (int)&gUnknown_083ED73C);
  v2000049 = v1;
  v2 = CreateSprite((int)&gSpriteTemplate_83ED48C, 368, 84);
  v3 = v2;
  gSprites[68 * v2 + 5] = gSprites[68 * v2 + 5] & 0xF3 | 4;
  gSprites[68 * v2 + 62] |= 2u;
  SetSubspriteTables((int)&gSprites[68 * v2], (int)&gUnknown_083ED75C);
  v200004A = v3;
  return v5;
}
