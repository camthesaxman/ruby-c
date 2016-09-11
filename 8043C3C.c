int battle_make_oam_safari_battle()
{
  int v0; // r6@1
  int v1; // r0@1
  char *v2; // r4@1
  char *v3; // r5@1

  v0 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_820A54C, 240, 160);
  v1 = (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_820A54C, 240, 160);
  v2 = &gSprites[68 * v0];
  v2[1] &= 0x3Fu;
  v3 = &gSprites[68 * v1];
  v3[1] &= 0x3Fu;
  *((_WORD *)v3 + 2) = *((_WORD *)v3 + 2) & 0xFC00 | ((*((_WORD *)v3 + 2) & 0x3FF) + 64) & 0x3FF;
  *((_WORD *)v2 + 3) = v1;
  *((_WORD *)v3 + 28) = v0;
  dword_2020020[17 * v1] = (int)sub_8043D5C;
  return v0;
}
