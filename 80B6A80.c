int sub_80B6A80()
{
  int v0; // r0@1
  char *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83CE5C8, 204, 80);
  v2000010 = v0;
  v1 = &gSprites[68 * v0];
  SetSubspriteTables((int)v1, (int)&gUnknown_083CE558);
  v2 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83CE5F8, 204, 76);
  *((_WORD *)v1 + 29) = v2;
  SetSubspriteTables((int)&gSprites[68 * v2], (int)&gUnknown_083CE560);
  v3 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83CE5E0, 204, 75);
  gSprites[68 * v3 + 5] = gSprites[68 * v3 + 5] & 0xF3 | 4;
  *((_WORD *)v1 + 30) = v3;
  return v5;
}
