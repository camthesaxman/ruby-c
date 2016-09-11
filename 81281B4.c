int sub_81281B4()
{
  int v0; // r0@1
  char *v1; // r2@2

  sub_8060470((__int16 *)0x202FF84, (__int16 *)0x202FF88, 8, 12);
  v0 = (unsigned __int8)CreateSpriteAtEnd(137840644, v202FF84, v202FF88);
  if ( v0 != 64 )
  {
    v1 = &gSprites[68 * v0];
    v1[62] |= 2u;
    v1[5] = v1[5] & 0xF3 | 4 * (v202FF90 & 3);
    *((_WORD *)v1 + 23) = v202FF8C;
    *((_WORD *)v1 + 24) = 10;
  }
  return 0;
}
