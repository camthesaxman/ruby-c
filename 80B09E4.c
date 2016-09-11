int __fastcall sub_80B09E4(unsigned __int8 a1)
{
  int v1; // r9@1
  _BYTE *v2; // r7@1
  unsigned int v3; // r5@1
  int v4; // r4@1
  int v5; // r8@1
  unsigned __int8 v6; // r0@1
  __int16 v7; // r6@1
  char *v8; // r5@1
  char *v9; // r4@1
  int v10; // r0@1
  int v11; // r0@1
  int v13; // [sp+8h] [bp-24h]@1

  v1 = a1;
  v2 = (_BYTE *)(a1 + 33785494);
  v3 = (671088640 * (unsigned int)*(_BYTE *)(a1 + 0x2038696) + 0x20000000) >> 24;
  v4 = 8 * a1;
  LoadCompressedObjectPic(&gUnknown_083CC4B4[v4]);
  LoadSpritePalette((int)&gUnknown_083CC4D4 + v4);
  v5 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83CC53C + 24 * v1, 184, v3);
  v6 = CreateSprite((int)&gSpriteTemplate_83CC53C + 24 * v1, 248, v3);
  v7 = v6;
  v8 = &gSprites[68 * v6];
  *((_WORD *)v8 + 2) = *((_WORD *)v8 + 2) & 0xFC00 | ((*((_WORD *)v8 + 2) & 0x3FF) + 64) & 0x3FF;
  v9 = &gSprites[68 * v5];
  sub_8040F80(0, 3, 100663296, (char *)(320 * *v2 + 100720678), (32 * *((_WORD *)v9 + 2) & 0x7FFF) + 100728832);
  sub_8040F80(0, 3, 100663296, (char *)(320 * *v2 + 100720694), (32 * *((_WORD *)v8 + 2) & 0x7FFF) + 100728832);
  v10 = (32 * *((_WORD *)v9 + 2) & 0x7FFF) + 100730112;
  v13 = 0;
  v40000D4 = &v13;
  v40000D8 = v10;
  v40000DC = -2063597376;
  v11 = (32 * *((_WORD *)v8 + 2) & 0x7FFF) + 1280;
  v40000D4 = &v13;
  v40000D8 = v11 + 100728832;
  v40000DC = -2063597376;
  *((_WORD *)v9 + 23) = v7;
  *((_WORD *)v8 + 23) = v5;
  *((_WORD *)v9 + 24) = v1;
  *((_WORD *)v8 + 24) = v1;
  return v5;
}
