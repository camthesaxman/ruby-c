int sub_8087828()
{
  int result; // r0@1
  char *v1; // r2@1

  sub_8060470((__int16 *)0x202FF84, (__int16 *)0x202FF88, 8, 8);
  result = (unsigned __int8)CreateSpriteAtEnd(137842892, v202FF84, v202FF88);
  v1 = &gSprites[68 * result];
  v1[5] = v1[5] & 0xF3 | 4 * (v202FF90 & 3);
  v1[62] |= 2u;
  return result;
}
