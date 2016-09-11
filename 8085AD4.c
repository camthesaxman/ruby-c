int __fastcall sub_8085AD4(unsigned __int16 a1, __int16 a2, __int16 a3)
{
  signed int v3; // r4@1
  __int16 v4; // r6@1
  __int16 v5; // r8@1
  int v6; // r9@1
  char v7; // r0@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 2 * a1;
  DecompressPicFromTable_2(
    &gMonFrontPicTable[v6],
    gMonFrontPicCoords[4 * v3],
    gMonFrontPicCoords[4 * v3 + 1],
    33611776,
    33611776,
    v3);
  LoadCompressedObjectPalette(&gMonPaletteTable[v6]);
  GetMonSpriteTemplate_803C56C(v3, 3u);
  v2024E8E = 0;
  v7 = IndexOfSpritePaletteTag(0);
  sub_807DE38(v7 + 16);
  return (unsigned __int8)CreateSprite(33705612, v4, v5);
}
