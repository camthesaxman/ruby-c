unsigned int sub_8127510()
{
  unsigned int v0; // r0@1
  unsigned int v1; // r1@1
  unsigned int v2; // r5@1
  char *v3; // r0@2

  sub_8060470((__int16 *)0x202FF84, (__int16 *)0x202FF88, 8, 8);
  v0 = CreateSpriteAtEnd(137841064, v202FF84, v202FF88) << 24;
  v1 = v0 >> 24;
  v2 = v0 >> 24;
  if ( v0 >> 24 != 64 )
  {
    v3 = &gSprites[68 * v1];
    v3[62] |= 2u;
    v3[5] = v3[5] & 0xF3 | 4 * (v202FF90 & 3);
    *((_WORD *)v3 + 30) = 35;
    StartSpriteAnim((int)v3, v202FF94);
  }
  return v2;
}
