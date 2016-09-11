int sub_811B6B4()
{
  char *v0; // r4@1

  v0 = &gSprites[68 * (unsigned __int8)CreateSpriteAtEnd((int)&gSpriteTemplate_83FD98C, v202FF84, v202FF88)];
  v0[5] &= 0xF3u;
  v0[1] = v0[1] & 0xFC | 1;
  *((_WORD *)v0 + 23) = v202FF8C;
  *((_WORD *)v0 + 24) = v202FF90;
  *((_WORD *)v0 + 25) = -1;
  InitSpriteAffineAnim((int)v0);
  StartSpriteAffineAnim((int)v0, v202FF8C);
  return 0;
}
