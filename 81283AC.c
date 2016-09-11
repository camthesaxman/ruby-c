int sub_81283AC()
{
  int v0; // r0@1

  sub_8060470((__int16 *)0x202FF84, (__int16 *)0x202FF88, 8, 0);
  v0 = (unsigned __int8)CreateSpriteAtEnd(137843120, v202FF84, v202FF88);
  if ( v0 != 64 )
  {
    gSprites[68 * v0 + 62] |= 2u;
    gSprites[68 * v0 + 5] = gSprites[68 * v0 + 5] & 0xF3 | 4;
  }
  return 0;
}
