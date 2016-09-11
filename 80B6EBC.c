int sub_80B6EBC()
{
  char *v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83CE688, 52, 24)];
  SetSubspriteTables((int)v0, (int)&gUnknown_083CE580);
  v0[5] |= 0xCu;
  return v2;
}
