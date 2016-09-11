int sub_81438C4()
{
  __int16 v0; // r4@1
  char v1; // r0@1
  char *v2; // r4@1
  __int16 v3; // r0@1

  v0 = (unsigned __int16)Random() % 0xF0u;
  v1 = Random();
  v2 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_840B7A4, v0, -(v1 & 7))];
  v3 = (unsigned __int16)Random() % 0x11u;
  StartSpriteAnim((int)v2, v3);
  *((_WORD *)v2 + 24) = (Random() & 3) == 0;
  return 0;
}
