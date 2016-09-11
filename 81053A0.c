int sub_81053A0()
{
  unsigned __int8 v0; // r0@1
  unsigned __int8 v1; // r4@1
  unsigned __int8 v2; // r0@1
  unsigned __int8 v3; // r4@1
  int v5; // [sp+1Ch] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83ED4D4, 368, 100);
  v1 = v0;
  gSprites[68 * v0 + 62] |= 2u;
  gSprites[68 * v0 + 5] = gSprites[68 * v0 + 5] & 0xF3 | 4;
  SetSubspriteTables((int)&gSprites[68 * v0], (int)&gUnknown_083ED7B4);
  v200004E = v1;
  v2 = CreateSprite((int)&gSpriteTemplate_83ED4D4, 288, 104);
  v3 = v2;
  gSprites[68 * v2 + 62] |= 2u;
  gSprites[68 * v2 + 5] = gSprites[68 * v2 + 5] & 0xF3 | 4;
  SetSubspriteTables((int)&gSprites[68 * v2], (int)&gUnknown_083ED7B4);
  v200004F = v3;
  return v5;
}
