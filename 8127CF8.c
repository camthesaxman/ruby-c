int oei_ash()
{
  int v0; // r0@1
  char *v1; // r2@2
  __int16 v3; // [sp+0h] [bp-10h]@1
  __int16 v4; // [sp+2h] [bp-Eh]@1

  v3 = v202FF84;
  v4 = v202FF88;
  sub_8060470(&v3, &v4, 8, 8);
  v0 = (unsigned __int8)CreateSpriteAtEnd(137840328, v3, v4);
  if ( v0 != 64 )
  {
    v1 = &gSprites[68 * v0];
    v1[62] |= 2u;
    v1[5] = v1[5] & 0xF3 | 4 * (v202FF90 & 3);
    *((_WORD *)v1 + 24) = v202FF84;
    *((_WORD *)v1 + 25) = v202FF88;
    *((_WORD *)v1 + 26) = v202FF94;
    *((_WORD *)v1 + 27) = v202FF98;
  }
  return 0;
}
