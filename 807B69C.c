int __fastcall unref_sub_807B69C(unsigned __int8 a1, unsigned __int8 a2)
{
  __int16 v2; // r4@1
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r8@1
  int *v6; // r1@1
  unsigned int v7; // r5@2
  char *v8; // r6@2
  int v9; // r4@3
  char *v10; // r3@3
  unsigned int v11; // r5@7
  char *v12; // r6@7
  char *v13; // r3@8

  v2 = a1;
  v3 = a2;
  v4 = *(_BYTE *)(a1 + 0x2024BE0);
  v5 = (unsigned __int8)CreateTask((int)sub_807B7E0, 10);
  LoadCompressedObjectPic((_DWORD *)"¤¨Ñ\b ");
  LoadCompressedObjectPalette((_DWORD *)"È¨Ñ\b˜'");
  v6 = &dword_3004B20[10 * v5];
  *((_WORD *)v6 + 4) = v2;
  if ( v3 )
  {
    *((_WORD *)v6 + 5) = 31;
    v7 = 0;
    v8 = &gSprites[68 * v4];
    do
    {
      v9 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83931F8, *((_WORD *)v8 + 16), *((_WORD *)v8 + 17) + 32);
      v10 = &gSprites[68 * v9];
      *((_WORD *)v10 + 23) = 51 * v7;
      *((_WORD *)v10 + 24) = -256;
      v10[62] |= 4u;
      if ( v7 > 4 )
        *((_WORD *)v10 + 29) = 21;
      v7 = (v7 + 1) & 0xFF;
    }
    while ( v7 <= 9 );
  }
  else
  {
    *((_WORD *)v6 + 5) = 31744;
    v11 = 0;
    v12 = &gSprites[68 * v4];
    do
    {
      v9 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83931F8, *((_WORD *)v12 + 16), *((_WORD *)v12 + 17) - 32);
      v13 = &gSprites[68 * v9];
      *((_WORD *)v13 + 23) = 51 * v11;
      *((_WORD *)v13 + 24) = 256;
      v13[62] |= 4u;
      if ( v11 > 4 )
        *((_WORD *)v13 + 29) = 21;
      v11 = (v11 + 1) & 0xFF;
    }
    while ( v11 <= 9 );
  }
  *(_WORD *)&gSprites[68 * v9 + 60] = 1;
  return v5;
}
