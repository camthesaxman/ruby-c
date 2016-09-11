int __fastcall sub_810A580(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  signed int v3; // r5@1
  __int16 v4; // r8@1
  __int16 v5; // r9@1
  int v6; // r6@1
  int result; // r0@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v6 = 2 * a1;
  DecompressPicFromTable_2(
    &gMonFrontPicTable[v6],
    gMonFrontPicCoords[4 * v3],
    gMonFrontPicCoords[4 * v3 + 1],
    33587200,
    33595392,
    v3);
  LoadCompressedObjectPalette(&gMonPaletteTable[v6]);
  GetMonSpriteTemplate_803C56C(v3, 1u);
  result = (unsigned __int8)CreateSprite(33705612, v4, v5);
  dword_2020020[17 * result] = (int)nullsub_72;
  gSprites[68 * result + 5] &= 0xF3u;
  return result;
}
