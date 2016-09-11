int sub_8133358()
{
  char v0; // r0@1
  int v1; // r2@1
  char v2; // r0@1
  int v3; // r2@1
  char v4; // r0@1
  int v5; // r2@1
  char v6; // r0@1
  int v7; // r2@1
  signed int v8; // r5@1
  char v9; // r0@2
  signed int v10; // r5@3
  char v11; // r0@4
  signed int v12; // r5@5
  char *v13; // r0@6
  int v15; // [sp+1Ch] [bp-4h]@0

  v0 = CreateSprite((int)&gSpriteTemplate_8402D90, 8, 16);
  *(_BYTE *)(dword_30007B0 + 3) = v0;
  v1 = dword_30007B0;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(dword_30007B0 + 3) + 46] = 1;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v1 + 3) + 50] = -1;
  v2 = CreateSprite((int)&gSpriteTemplate_8402D90, 72, 16);
  *(_BYTE *)(dword_30007B0 + 4) = v2;
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_30007B0 + 4)], 1);
  v3 = dword_30007B0;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(dword_30007B0 + 4) + 46] = 1;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v3 + 4) + 50] = 1;
  v4 = CreateSprite((int)&gSpriteTemplate_8402DC0, 160, 4);
  *(_BYTE *)(dword_30007B0 + 5) = v4;
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_30007B0 + 5)], 1);
  v5 = dword_30007B0;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(dword_30007B0 + 5) + 46] = 2;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v5 + 5) + 50] = -1;
  v6 = CreateSprite((int)&gSpriteTemplate_8402DC0, 160, 60);
  *(_BYTE *)(dword_30007B0 + 6) = v6;
  v7 = dword_30007B0;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(dword_30007B0 + 6) + 46] = 2;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v7 + 6) + 50] = 1;
  v8 = 0;
  do
  {
    v9 = CreateSprite(
           (int)&gSpriteTemplate_8402E08,
           (unsigned int)((v8 % 4 << 19) + 1835008) >> 16,
           (unsigned int)((v8 / 4 << 19) + 3407872) >> 16);
    *(_BYTE *)(dword_30007B0 + 3 + v8 + 4) = v9;
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_30007B0 + 3 + v8++ + 4)], 2);
  }
  while ( v8 <= 7 );
  v10 = 0;
  do
  {
    v11 = CreateSprite(
            (int)&gSpriteTemplate_8402E08,
            (unsigned int)((v10 % 4 << 19) + 1835008) >> 16,
            (unsigned int)((v10 / 4 << 19) + 6029312) >> 16);
    *(_BYTE *)(dword_30007B0 + 3 + v10 + 12) = v11;
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(dword_30007B0 + 3 + v10++ + 12)], 2);
  }
  while ( v10 <= 7 );
  v12 = 0;
  do
  {
    v13 = &gSprites[68 * *(_BYTE *)(dword_30007B0 + 3 + v12) + 62];
    *v13 |= 4u;
    ++v12;
  }
  while ( v12 <= 19 );
  sub_814AC58(16, 0xFFFF, 12, 11679);
  return v15;
}
