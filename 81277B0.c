int oei_water_drop_tall()
{
  int v0; // r0@1
  char *v1; // r2@2

  sub_8060470((__int16 *)0x202FF84, (__int16 *)0x202FF88, 8, 8);
  v0 = (unsigned __int8)CreateSpriteAtEnd(137841144, v202FF84, v202FF88);
  if ( v0 != 64 )
  {
    v1 = &gSprites[68 * v0];
    v1[62] |= 2u;
    v1[5] = v1[5] & 0xF3 | 4 * (v202FF90 & 3);
    *((_WORD *)v1 + 23) = v202FF8C;
    *((_WORD *)v1 + 24) = 14;
  }
  return 0;
}
