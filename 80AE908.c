int unref_sub_80AE908()
{
  signed int v0; // r5@1
  unsigned __int8 v1; // r0@1
  int v2; // r4@1
  unsigned int v3; // r3@1

  v0 = *(_WORD *)((v2038695 << 6) + 0x2038570);
  DecompressPicFromTable_2(
    &gMonFrontPicTable[2 * v0],
    gMonFrontPicCoords[4 * v0],
    gMonFrontPicCoords[4 * v0 + 1],
    0x2000000,
    33595392,
    v0);
  LoadCompressedPalette(gMonPaletteTable[2 * v0], 0x110u, 32);
  GetMonSpriteTemplate_803C56C(*(_WORD *)((v2038695 << 6) + 0x2038570), 1u);
  v1 = CreateSprite(
         33705612,
         112,
         (((8 - (unsigned int)gMonFrontPicCoords[4 * *(_WORD *)((v2038695 << 6) + 0x2038570)]) << 18) + 5242880) >> 16);
  v2 = v1;
  v3 = 68 * v1;
  gSprites[v3 + 5] = gSprites[v3 + 5] & 0xF | 0x10;
  dword_2020020[v3 / 4] = (int)SpriteCallbackDummy;
  *(_DWORD *)((char *)&unk_2020014 + v3) = &gSpriteAffineAnimTable_81E7C18;
  StartSpriteAffineAnim((int)&gSprites[v3], 0);
  return v2;
}
