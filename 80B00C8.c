int sub_80B00C8()
{
  int v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  LoadCompressedObjectPic((_DWORD *)"H–æ\b");
  LoadSpritePalette((int)&gUnknown_083CA474);
  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83CA484, 30, 44);
  gSprites[68 * v0 + 62] |= 4u;
  v201925C = v0;
  return v2;
}
