int __fastcall sub_807C088(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  char *v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8393FC0, 0, 68)];
  v2[1] = v2[1] & 0xF3 | 8;
  *((_WORD *)v2 + 23) = v1;
  return v4;
}
