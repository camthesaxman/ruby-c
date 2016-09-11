int __fastcall sub_80B0B5C(unsigned __int8 a1)
{
  char *v1; // r5@1
  char *v2; // r4@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = &gSprites[68 * a1];
  v2 = &gSprites[68 * (*((_WORD *)v1 + 23) & 0xFF)];
  FreeSpriteOamMatrix((int)v2);
  DestroySprite((int)v2);
  DestroySpriteAndFreeResources((int)v1);
  return v4;
}
