int sub_80E8818()
{
  unsigned __int8 v0; // r0@1
  char *v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_83DBBFC, 0, 0);
  v1 = &gSprites[68 * v0];
  *((_WORD *)v1 + 23) = 0;
  *((_WORD *)v1 + 24) = 0;
  v20010A8 = &gSprites[68 * v0];
  *((_DWORD *)v1 + 7) = sub_80E8860;
  sub_80E87CC(0);
  return v3;
}
