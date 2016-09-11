int sub_8117F2C()
{
  unsigned int v0; // r5@1
  int *v1; // r4@2
  unsigned int v2; // r5@3
  char *v3; // r0@4
  char *v4; // r0@4
  unsigned int v5; // r5@5
  char *v6; // r0@6
  char *v7; // r0@6
  unsigned __int8 v8; // r0@7
  int v10; // [sp+0h] [bp-20h]@2
  unsigned int v11; // [sp+4h] [bp-1Ch]@2
  int v12; // [sp+1Ch] [bp-4h]@7

  v0 = 0;
  do
  {
    v1 = &gUnknown_083FA21C[2 * v0];
    LZ77UnCompWram(*v1, 0x2000000);
    v10 = 0x2000000;
    v11 = v11 & 0xFFFF0000 | *((_WORD *)v1 + 2);
    v11 = (unsigned __int16)v11 | (*((_WORD *)v1 + 3) << 16);
    LoadSpriteSheet((int)&v10);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  v2019050 = CreateSprite((int)&gSpriteTemplate_83FA2B0, 208, 16);
  gSprites[68 * v2019050 + 44] |= 0x40u;
  v2 = 0;
  do
  {
    *(_BYTE *)(v2 + 33656913) = CreateSprite((int)&gSpriteTemplate_83FA2C8, ((v2 << 19) + 12845056) >> 16, 24);
    v3 = &gSprites[68 * *(_BYTE *)(v2 + 33656913) + 62];
    *v3 |= 4u;
    v4 = &gSprites[68 * *(_BYTE *)(v2 + 33656913) + 44];
    *v4 |= 0x40u;
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 3 );
  v2019055 = CreateSprite((int)&gSpriteTemplate_83FA2E0, 120, 68);
  gSprites[68 * v2019055 + 44] |= 0x40u;
  v5 = 0;
  do
  {
    *(_BYTE *)(v5 + 33656918) = CreateSprite((int)&gSpriteTemplate_83FA2F8, ((v5 << 20) + 12582912) >> 16, 36);
    v6 = &gSprites[68 * *(_BYTE *)(v5 + 33656918) + 62];
    *v6 |= 4u;
    v7 = &gSprites[68 * *(_BYTE *)(v5 + 33656918) + 44];
    *v7 |= 0x40u;
    v5 = (v5 + 1) & 0xFF;
  }
  while ( v5 <= 2 );
  v8 = CreateSprite((int)&gSpriteTemplate_83FA310, 152, 96);
  v201906C = v8;
  gSprites[68 * v8 + 5] = gSprites[68 * v8 + 5] & 0xF3 | 4;
  gSprites[68 * v201906C + 44] |= 0x40u;
  gSprites[68 * v201906C + 62] |= 4u;
  return v12;
}
