int sub_80AE858()
{
  int result; // r0@1

  LoadCompressedObjectPic((_DWORD *)"HÇÑ\b");
  LoadCompressedPalette((int)&gContest2Pal, 0x110u, 32);
  result = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83CA4A4, 112, 36);
  gSprites[68 * result + 5] = gSprites[68 * result + 5] & 0xF | 0x10;
  dword_2020020[17 * result] = (int)SpriteCallbackDummy;
  return result;
}
