int __fastcall sub_80AE9FC(unsigned __int16 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r8@1
  unsigned int v4; // r6@1
  int v5; // r5@1
  int v6; // r0@1
  unsigned __int8 v7; // r0@1
  int v8; // r7@1
  unsigned int v9; // r6@1
  char *v10; // r4@1
  char *v11; // r0@2
  void **v12; // r1@2

  v3 = a2;
  v4 = a3;
  v5 = sub_80B2778(a1);
  sub_800D334((int)(&gMonBackPicTable + 2 * v5), gMonBackPicCoords[4 * v5], gMonBackPicCoords[4 * v5 + 1]);
  v6 = species_and_otid_get_pal(v5, v3, v4);
  LoadCompressedPalette(v6, 0x120u, 32);
  GetMonSpriteTemplate_803C56C(v5, 0);
  v7 = sub_8077E44(2u, v5, 0);
  v8 = (unsigned __int8)CreateSprite(33705612, 112, v7);
  v9 = 68 * v8;
  v10 = &gSprites[v9];
  gSprites[v9 + 5] = (gSprites[v9 + 5] & 0xF | 0x20) & 0xF3 | 8;
  v10[67] = sub_8079E90(2u);
  dword_2020020[v9 / 4] = (int)SpriteCallbackDummy;
  *((_WORD *)v10 + 23) = (unsigned int)(unsigned __int8)v10[5] >> 4;
  *((_WORD *)v10 + 25) = v5;
  if ( sub_80AEB1C(v5) << 24 )
  {
    v11 = (char *)&unk_2020014 + v9;
    v12 = &gSpriteAffineAnimTable_81E7C18;
  }
  else
  {
    v11 = (char *)&unk_2020014 + v9;
    v12 = &gSpriteAffineAnimTable_81E7BEC;
  }
  *(_DWORD *)v11 = v12;
  StartSpriteAffineAnim((int)&gSprites[68 * v8], 0);
  return v8;
}
