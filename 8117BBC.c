int sub_8117BBC()
{
  unsigned int v0; // r5@1
  char v1; // r0@2
  _BYTE *v2; // r3@2
  char *v3; // r0@2
  int v5; // [sp+14h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = CreateSprite((int)&gSpriteTemplate_83FA40C, 116, 20);
    v2 = (_BYTE *)(v0 + 33656941);
    *v2 = v1;
    v3 = &gSprites[68 * *(_BYTE *)(v0 + 33656941) + 62];
    *v3 |= 4u;
    *(_WORD *)&gSprites[68 * *v2 + 46] = 1;
    dword_2020020[17 * *v2] = (int)sub_81184CC;
    gSprites[68 * *v2 + 5] = gSprites[68 * *v2 + 5] & 0xF3 | 4;
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v0 + 33656941)], 8);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 5 );
  return v5;
}
