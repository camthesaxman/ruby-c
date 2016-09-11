int __fastcall sub_8149174(unsigned __int8 a1, int a2, int a3, unsigned __int8 a4)
{
  unsigned int v4; // r8@1
  unsigned int i; // r7@1
  int v6; // r6@2
  int v7; // r3@2
  int v8; // r5@2
  char *v9; // r4@2
  char v10; // r3@2
  __int16 v12; // [sp+0h] [bp-2Ch]@1
  int v13; // [sp+4h] [bp-28h]@1
  int v14; // [sp+8h] [bp-24h]@1
  int v15; // [sp+28h] [bp-4h]@0

  v13 = a2;
  v14 = a3;
  v12 = a1;
  v4 = a4;
  for ( i = 0; i < v4; i = (i + 1) & 0xFF )
  {
    v6 = 8 * i + v13;
    v7 = *(_BYTE *)(v6 + 3);
    v8 = 68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8416B3C, *(_BYTE *)(v6 + 1), *(_BYTE *)(v6 + 2));
    v9 = &gSprites[v8];
    CalcCenterToCornerVec(
      (int)&gSprites[v8],
      (unsigned int)*(_BYTE *)v6 << 26 >> 30,
      (unsigned int)*(_BYTE *)v6 >> 6,
      0);
    v10 = gSprites[v8 + 5] | 0xC;
    v9[5] = v10;
    v9[1] = v9[1] & 0x3F | ((unsigned int)*(_BYTE *)v6 << 26 >> 30 << 6);
    v9[3] = v9[3] & 0x3F | (*(_BYTE *)v6 >> 6 << 6);
    v9[5] = v10 & 0xF;
    *(_DWORD *)((char *)&unk_202000C + v8) = v14;
    StartSpriteAnim((int)&gSprites[v8], *(_BYTE *)v6 & 0xF);
    *((_WORD *)v9 + 23) = v12;
    *((_WORD *)v9 + 24) = *(_WORD *)(v6 + 4);
    *((_WORD *)v9 + 25) = 0;
  }
  return v15;
}
