int sub_8128700()
{
  unsigned __int8 v0; // r0@1
  char *v1; // r1@2

  v202FF84 += 7;
  v202FF88 += 7;
  sub_8060470((__int16 *)0x202FF84, (__int16 *)0x202FF88, 8, 8);
  v0 = CreateSpriteAtEnd(137843180, v202FF84, v202FF88);
  if ( v0 != 64 )
  {
    v1 = &gSprites[68 * v0];
    v1[5] = v1[5] & 0xF3 | 4 * (v202FF8C & 3);
    v1[62] |= 2u;
  }
  return 0;
}
