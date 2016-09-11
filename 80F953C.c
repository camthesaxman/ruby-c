int __fastcall sub_80F953C(unsigned __int8 a1, __int16 a2, __int16 a3)
{
  int v3; // r4@1
  char *v4; // r3@10
  char *v5; // r1@11
  int v6; // r2@11
  char *v7; // r3@19
  char *v8; // r1@20
  __int16 v9; // r0@20
  int v10; // r0@21
  int v12; // [sp+8h] [bp-4h]@0

  v3 = a1;
  if ( a1 <= 3u )
  {
    if ( a1 == 1 )
    {
      if ( v20388C1 == 255 )
      {
        v20388C1 = CreateSprite((int)&gSpriteTemplate_83E59D0, a2, a3);
        v4 = gSprites;
        *(_WORD *)&gSprites[68 * v20388C1 + 50] = 1;
        if ( v20388C0 == 255 )
        {
          *(_WORD *)&gSprites[68 * v20388C1 + 52] = 0;
          goto _080F977A;
        }
        *(_WORD *)&gSprites[68 * v20388C1 + 38] = -*(_WORD *)&gSprites[68 * v20388C0 + 38];
        v5 = &gSprites[68 * v20388C1];
        v6 = v20388C0;
        goto _080F9650;
      }
_080F977A:
      StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v3 + 33786048)], v3 & 1);
      return v12;
    }
    if ( (signed int)a1 <= 1 )
    {
      if ( a1 || v20388C0 != 255 )
        goto _080F977A;
      v20388C0 = CreateSprite((int)&gSpriteTemplate_83E59D0, a2, a3);
      v4 = gSprites;
      *(_WORD *)&gSprites[68 * v20388C0 + 50] = -1;
      if ( v20388C1 != 255 )
      {
        *(_WORD *)&gSprites[68 * v20388C0 + 38] = -*(_WORD *)&gSprites[68 * v20388C1 + 38];
        v5 = &gSprites[68 * v20388C0];
        v6 = v20388C1;
_080F9650:
        *((_WORD *)v5 + 26) = *(_WORD *)&v4[68 * v6 + 52];
        goto _080F977A;
      }
      *(_WORD *)&gSprites[68 * v20388C0 + 52] = 0;
      goto _080F977A;
    }
    if ( a1 == 2 )
    {
      if ( v20388C2 != 255 )
        goto _080F977A;
      v20388C2 = CreateSprite((int)&gSpriteTemplate_83E59E8, a2, a3);
      v7 = gSprites;
      *(_WORD *)&gSprites[68 * v20388C2 + 46] = -1;
      if ( v20388C3 != 255 )
      {
        *(_WORD *)&gSprites[68 * v20388C2 + 36] = -*(_WORD *)&gSprites[68 * v20388C3 + 36];
        v8 = &gSprites[68 * v20388C2];
        v9 = *(_WORD *)&gSprites[68 * v20388C3 + 48];
_080F9778:
        *((_WORD *)v8 + 24) = v9;
        goto _080F977A;
      }
      v10 = v20388C2;
    }
    else
    {
      if ( a1 != 3 || v20388C3 != 255 )
        goto _080F977A;
      v20388C3 = CreateSprite((int)&gSpriteTemplate_83E59E8, a2, a3);
      v7 = gSprites;
      *(_WORD *)&gSprites[68 * v20388C3 + 46] = 1;
      if ( v20388C2 != 255 )
      {
        *(_WORD *)&gSprites[68 * v20388C3 + 36] = -*(_WORD *)&gSprites[68 * v20388C2 + 36];
        v8 = &gSprites[68 * v20388C3];
        v9 = *(_WORD *)&gSprites[68 * v20388C2 + 48];
        goto _080F9778;
      }
      v10 = v20388C3;
    }
    v8 = &v7[68 * v10];
    v9 = 0;
    goto _080F9778;
  }
  return v12;
}
