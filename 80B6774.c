int sub_80B6774()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83CE640, 0, 0);
  v200000F = v0;
  gSprites[68 * v0 + 5] = gSprites[68 * v0 + 5] & 0xF3 | 4;
  gSprites[68 * v200000F + 1] = gSprites[68 * v200000F + 1] & 0xF3 | 4;
  *(_WORD *)&gSprites[68 * v200000F + 58] = 1;
  *(_WORD *)&gSprites[68 * v200000F + 58] = 2;
  sub_80B680C(0, 0);
  return v2;
}
