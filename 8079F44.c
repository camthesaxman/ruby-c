int __fastcall sub_8079F44(unsigned __int16 a1, unsigned __int8 a2, unsigned __int8 a3, __int16 a4, __int16 a5, int a6, unsigned int a7, unsigned int a8)
{
  signed int v8; // r6@1
  int v9; // r8@1
  int v10; // r7@1
  __int16 v11; // r9@1
  int v12; // r10@1
  int v13; // r4@1
  int v14; // r0@2
  int v15; // r5@2
  int v16; // r0@3
  char *v17; // r0@5
  __int16 v18; // r1@5
  __int16 v19; // r2@5
  int v20; // r4@7

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = (unsigned __int16)LoadSpriteSheet((int)&gUnknown_0837F5E0[8 * a3]);
  v13 = (unsigned __int8)AllocSpritePalette(gSpriteTemplate_837F5B0[12 * v10 + 1]);
  if ( v9 )
  {
    v16 = species_and_otid_get_pal(v8, a8, a7);
    LoadCompressedPalette(v16, (unsigned int)((v13 << 20) + 0x1000000) >> 16, 32);
    v15 = 4 * v8;
    sub_800D378(
      &gMonBackPicTable + 2 * v8,
      gMonBackPicCoords[4 * v8],
      gMonBackPicCoords[4 * v8 + 1],
      0x2000000,
      0x2000000,
      v8,
      a7,
      0);
  }
  else
  {
    v14 = species_and_otid_get_pal(v8, a8, a7);
    LoadCompressedPalette(v14, (unsigned int)((v13 << 20) + 0x1000000) >> 16, 32);
    v15 = 4 * v8;
    sub_800D378(
      &gMonFrontPicTable[2 * v8],
      gMonFrontPicCoords[4 * v8],
      gMonFrontPicCoords[4 * v8 + 1],
      0x2000000,
      0x2000000,
      v8,
      a7,
      1u);
  }
  v40000D4 = 0x2000000;
  v40000D8 = 32 * v12 + 100728832;
  v40000DC = -2080374272;
  if ( v9 )
  {
    v17 = (char *)&gSpriteTemplate_837F5B0[12 * v10];
    v18 = v11;
    v19 = gMonBackPicCoords[v15 + 1] + a5;
  }
  else
  {
    v17 = (char *)&gSpriteTemplate_837F5B0[12 * v10];
    v18 = v11;
    v19 = gMonFrontPicCoords[v15 + 1] + a5;
  }
  v20 = (unsigned __int8)CreateSprite((int)v17, v18, v19);
  if ( sub_8076BE0() << 24 )
  {
    *((_DWORD *)&unk_2020014 + 17 * v20) = &gSpriteAffineAnimTable_81E7C18;
    StartSpriteAffineAnim((int)&gSprites[68 * v20], 0);
  }
  return v20;
}
