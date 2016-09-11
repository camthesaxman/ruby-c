int sub_81480B4()
{
  unsigned __int8 v0; // r0@1
  int v1; // r4@1
  unsigned int v2; // r3@1

  v0 = sub_810BA50(188, 100);
  v1 = v0;
  v2 = 68 * v0;
  gSprites[v2 + 1] = gSprites[v2 + 1] & 0xFC | 1;
  *(_DWORD *)((char *)&unk_2020014 + v2) = &gSpriteAffineAnimTable_84121A0;
  dword_2020020[v2 / 4] = (int)SpriteCallbackDummy;
  InitSpriteAffineAnim((int)&gSprites[v2]);
  return v1;
}
