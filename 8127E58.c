int sub_8127E58()
{
  int v0; // r0@1
  int v1; // r5@1
  char *v2; // r1@2

  sub_8060470((__int16 *)0x202FF84, (__int16 *)0x202FF88, 8, 8);
  v0 = (unsigned __int8)CreateSpriteAtEnd(137840424, v202FF84, v202FF88);
  v1 = v0;
  if ( v0 != 64 )
  {
    v2 = &gSprites[68 * v0];
    v2[62] |= 2u;
    v2[5] &= 0xFu;
    *((_WORD *)v2 + 25) = v202FF8C;
    *((_WORD *)v2 + 26) = -1;
    *((_WORD *)v2 + 29) = -1;
    *((_WORD *)v2 + 30) = -1;
  }
  FieldEffectActiveListRemove(8u);
  return v1;
}
