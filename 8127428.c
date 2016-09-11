int sub_8127428()
{
  int v0; // r1@1
  char *v1; // r0@2

  sub_8060470((__int16 *)0x202FF84, (__int16 *)0x202FF88, 8, 8);
  v0 = (unsigned __int8)CreateSpriteAtEnd(137840816, v202FF84, v202FF88);
  if ( v0 != 64 )
  {
    v1 = &gSprites[68 * v0];
    v1[62] |= 2u;
    v1[5] = v1[5] & 0xF3 | 4 * (v202FF90 & 3);
    *((_WORD *)v1 + 30) = 13;
    StartSpriteAnim((int)v1, v202FF94);
  }
  return 0;
}
