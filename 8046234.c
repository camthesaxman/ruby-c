int __fastcall sub_8046234(unsigned __int16 a1, unsigned __int16 a2, unsigned __int8 a3)
{
  int v3; // r6@1
  int v4; // r7@1
  __int16 v5; // r4@1
  int v6; // r0@3
  int v7; // r8@3
  char *v8; // r5@3
  signed int v9; // r6@3
  signed int v10; // r10@3
  int v11; // r6@3
  int v12; // r4@3
  unsigned __int8 v13; // r0@3
  char *v14; // r4@3
  char *v15; // r4@3
  char *v16; // r4@3

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( GetSpriteTileStartByTag(0xD6EBu) << 16 == -65536 )
  {
    LoadCompressedObjectPic(&gUnknown_081FAEA4);
    LoadCompressedObjectPalette(&gUnknown_081FAEAC);
  }
  v6 = (unsigned __int8)object_new_hidden_with_callback((int)sub_8046388);
  v7 = v6;
  v8 = &gSprites[68 * v6];
  *((_WORD *)v8 + 24) = v5;
  v9 = v3 << 16;
  v10 = v9 >> 16;
  v11 = (v9 - 0x100000) >> 16;
  v12 = ((v4 << 16) - 0x100000) >> 16;
  v13 = CreateSprite((int)&gSpriteTemplate_81FAF0C, v11, v12);
  *(_WORD *)&gSprites[68 * v13 + 46] = v7;
  ++*((_WORD *)v8 + 23);
  AnimateSprite((int)&gSprites[68 * v13]);
  v14 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_81FAF0C, v10, v12)];
  *((_WORD *)v14 + 23) = v7;
  ++*((_WORD *)v8 + 23);
  StartSpriteAnim((int)v14, 1);
  AnimateSprite((int)v14);
  v15 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_81FAF0C, v11, v4)];
  *((_WORD *)v15 + 23) = v7;
  ++*((_WORD *)v8 + 23);
  StartSpriteAnim((int)v15, 2);
  AnimateSprite((int)v15);
  v16 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_81FAF0C, v10, v4)];
  *((_WORD *)v16 + 23) = v7;
  ++*((_WORD *)v8 + 23);
  StartSpriteAnim((int)v16, 3);
  AnimateSprite((int)v16);
  return v7;
}
