int sub_8105100()
{
  int v0; // r0@1
  char *v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83ED45C, 280, 80);
  v1 = &gSprites[68 * v0];
  v1[5] = v1[5] & 0xF3 | 4;
  v1[62] |= 2u;
  v200003F = v0;
  return v3;
}
