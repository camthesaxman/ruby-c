int sub_80C63FC()
{
  sub_80C6280();
  CreateSprite(
    (int)&gSpriteTemplate_83D2614,
    (*(_WORD *)&gSprites[68 * v202E85C + 2] & 0x1FF) + v202FF98,
    (unsigned __int8)gSprites[68 * v202E85C] + v202FF9C);
  return 0;
}
