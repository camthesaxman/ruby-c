int __fastcall sub_8086430(__int16 a1, __int16 a2)
{
  unsigned __int8 v2; // r0@1
  int v3; // r4@1
  char *v4; // r0@1

  v2 = CreateSpriteAtEnd((int)&gSpriteTemplate_839F220, a1, a2);
  v3 = v2;
  v4 = &gSprites[68 * v2];
  v4[5] = v4[5] & 0xF3 | 8;
  v4[62] |= 4u;
  SetSubspriteTables((int)v4, (int)&gUnknown_0839F1A0);
  return v3;
}
