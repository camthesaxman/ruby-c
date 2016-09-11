int __fastcall sub_8085B88(unsigned __int16 a1, unsigned int a2, unsigned int a3, __int16 a4, __int16 a5)
{
  unsigned int v5; // r10@1
  unsigned int v6; // r4@1
  __int16 v7; // r6@1
  unsigned int v8; // ST04_4@1
  int v9; // r4@1
  char v10; // r0@1

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v8 = a1;
  sub_800D334((int)&gMonFrontPicTable[2 * a1], gMonFrontPicCoords[4 * v8], gMonFrontPicCoords[4 * v8 + 1]);
  v9 = sub_80409C8(v8, v5, v6);
  LoadCompressedObjectPalette((_DWORD *)v9);
  GetMonSpriteTemplate_803C56C(v8, 3u);
  v2024E8E = *(_WORD *)(v9 + 4);
  v10 = IndexOfSpritePaletteTag(*(_WORD *)(v9 + 4));
  sub_807DE38(v10 + 16);
  return (unsigned __int8)CreateSprite(33705612, v7, a5);
}
