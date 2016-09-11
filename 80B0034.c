int sub_80B0034()
{
  signed int v0; // r5@1
  int v1; // r6@1
  char *v2; // r0@2
  int v4; // [sp+14h] [bp-4h]@0

  LoadSpritePalette((int)&gUnknown_083CA3E4);
  v0 = 0;
  v1 = 0;
  do
  {
    LoadCompressedObjectPic(&gUnknown_083CA3C4 + 2 * v0);
    *(_BYTE *)(4 * v0 + 0x2019339) = CreateSprite(
                                       (int)&gSpriteTemplate_83CA3F4 + v1,
                                       204,
                                       gUnknown_083CA33C[*(_BYTE *)(v0 + 33785494)]);
    SetSubspriteTables((int)&gSprites[68 * *(_BYTE *)(4 * v0 + 0x2019339)], (int)&gUnknown_083CA464);
    v2 = &gSprites[68 * *(_BYTE *)(4 * v0 + 0x2019339) + 62];
    *v2 |= 4u;
    v1 += 24;
    ++v0;
  }
  while ( v0 <= 3 );
  return v4;
}
