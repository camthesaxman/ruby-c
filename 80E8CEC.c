int sub_80E8CEC()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+0h] [bp-4h]@0

  LoadCompressedObjectPic((_DWORD *)"ки\b");
  LoadSpritePalette((int)&gUnknown_083DBD68);
  v0 = CreateSprite((int)&gSpriteTemplate_83DBDE4, 224, 88);
  if ( v0 == 64 )
    v200AC74 = 0;
  else
    v200AC74 = &gSprites[68 * v0];
  return v2;
}
