int sub_8133EF8()
{
  int v1; // [sp+4h] [bp-4h]@0

  sub_806CCE4();
  v201B261 = 2;
  DestroySprite((int)&gSprites[68 * v2001001]);
  MenuZeroFillWindowRect(3u, 0xEu, 0x1Au, 0x13u);
  sub_806D538(0, 0);
  SwitchTaskToFollowupFunc(v2001000);
  return v1;
}
