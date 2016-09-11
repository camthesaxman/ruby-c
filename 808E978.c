int __fastcall sub_808E978(unsigned __int8 a1)
{
  int v1; // r8@1
  char *v2; // r0@1
  unsigned __int8 v3; // r0@1
  char *v4; // r4@1
  unsigned __int8 v5; // r0@1
  char *v6; // r1@1
  char *v7; // r1@1
  unsigned __int8 v8; // r0@3
  signed int v9; // r8@3
  int v10; // r7@3
  unsigned int v11; // r5@3
  int v12; // r7@6
  int v13; // r7@10
  signed int v14; // r8@10
  int v15; // r7@10
  unsigned int v16; // r5@10
  int v17; // r7@13
  int v18; // r7@17
  char *v19; // r0@2
  int v21; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  *(_WORD *)&gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A053C, 184, 4) + 48] = 0;
  v2 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A053C, 184, 156)];
  *((_WORD *)v2 + 24) = 1;
  v2[63] |= 2u;
  CreateSprite((int)&gSpriteTemplate_83A0524, 234, 20);
  CreateSprite((int)&gSpriteTemplate_83A0554, 16, 138);
  v3 = CreateSprite((int)&gSpriteTemplate_83A0554, 48, 138);
  StartSpriteAnim((int)&gSprites[68 * v3], 3);
  v4 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A0554, 16, 158)];
  StartSpriteAnim((int)v4, 2);
  *((_WORD *)v4 + 25) = 128;
  v5 = CreateSprite((int)&gSpriteTemplate_83A0554, 48, 158);
  StartSpriteAnim((int)&gSprites[68 * v5], 1);
  v6 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A056C, 0, 80)];
  v6[1] = v6[1] & 0xFC | 1;
  v6[3] = v6[3] & 0xC1 | 0x3C;
  *((_WORD *)v6 + 23) = 30;
  *((_WORD *)v6 + 24) = 0;
  v7 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A056C, 0, 80)];
  v7[1] = v7[1] & 0xFC | 1;
  v7[3] |= 0x3Eu;
  *((_WORD *)v7 + 23) = 31;
  *((_WORD *)v7 + 24) = 128;
  if ( v1 )
  {
    v19 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A05B4, 140, 80)];
  }
  else
  {
    CreateSprite((int)&gSpriteTemplate_83A0584, 32, 40);
    v8 = CreateSprite((int)&gSpriteTemplate_83A0584, 32, 72);
    StartSpriteAnim((int)&gSprites[68 * v8], 1);
    v9 = 0;
    v10 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A059C, 28, 48);
    v11 = *(_WORD *)(v202FFB4 + 1562) / 0x64u;
    StartSpriteAnim((int)&gSprites[68 * v10], *(_WORD *)(v202FFB4 + 1562) / 0x64u);
    if ( v11 )
      v9 = 1;
    else
      gSprites[68 * v10 + 62] |= 4u;
    v12 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A059C, 34, 48);
    if ( (*(_WORD *)(v202FFB4 + 1562) % 0x64u & 0xFFFF) / 0xA & 0xFFFF || v9 )
      StartSpriteAnim((int)&gSprites[68 * v12], (*(_WORD *)(v202FFB4 + 1562) % 0x64u & 0xFFFF) / 0xA);
    else
      gSprites[68 * v12 + 62] |= 4u;
    v13 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A059C, 40, 48);
    StartSpriteAnim((int)&gSprites[68 * v13], (*(_WORD *)(v202FFB4 + 1562) % 0x64u & 0xFFFF) % 0xA);
    v14 = 0;
    v15 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A059C, 28, 80);
    v16 = *(_WORD *)(v202FFB4 + 1564) / 0x64u;
    StartSpriteAnim((int)&gSprites[68 * v15], *(_WORD *)(v202FFB4 + 1564) / 0x64u);
    if ( v16 )
      v14 = 1;
    else
      gSprites[68 * v15 + 62] |= 4u;
    v17 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A059C, 34, 80);
    if ( (*(_WORD *)(v202FFB4 + 1564) % 0x64u & 0xFFFF) / 0xA & 0xFFFF || v14 )
      StartSpriteAnim((int)&gSprites[68 * v17], (*(_WORD *)(v202FFB4 + 1564) % 0x64u & 0xFFFF) / 0xA);
    else
      gSprites[68 * v17 + 62] |= 4u;
    v18 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A059C, 40, 80);
    StartSpriteAnim((int)&gSprites[68 * v18], (*(_WORD *)(v202FFB4 + 1564) % 0x64u & 0xFFFF) % 0xA);
    v19 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83A05B4, 140, 96)];
  }
  v19[62] |= 4u;
  return v21;
}
