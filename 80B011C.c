int unref_sub_80B011C()
{
  unsigned int v0; // r4@1
  unsigned int v1; // r4@3
  int v2; // r0@4
  char *v3; // r1@4
  int v5; // [sp+14h] [bp-4h]@0

  LoadCompressedObjectPic((_DWORD *)"$`Ñ\b");
  v0 = 0;
  do
  {
    LoadCompressedObjectPalette(&gUnknown_083CC3B4 + 2 * v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  v1 = 0;
  do
  {
    v2 = (unsigned __int8)CreateSprite(
                            (int)&gSpriteTemplate_83CC454 + 24 * v1,
                            (unsigned __int8)gUnknown_083CA330[2 * v1],
                            (unsigned __int8)byte_83CA331[2 * v1]);
    v3 = &gSprites[68 * v2];
    v3[62] |= 4u;
    *((_WORD *)v3 + 23) = v1;
    *(_BYTE *)(v1 + 33657357) = v2;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 3 );
  return v5;
}
