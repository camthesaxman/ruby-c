int sub_8127080()
{
  int v0; // r1@1
  char *v1; // r4@2
  __int16 v3; // [sp+0h] [bp-10h]@1
  __int16 v4; // [sp+2h] [bp-Eh]@1

  v3 = v202FF84;
  v4 = v202FF88;
  sub_8060470(&v3, &v4, 8, 8);
  v0 = (unsigned __int8)CreateSpriteAtEnd(137841400, v3, v4);
  if ( v0 != 64 )
  {
    v1 = &gSprites[68 * v0];
    v1[62] |= 2u;
    v1[5] = v1[5] & 0xF3 | 4 * (ZCoordToPriority(v202FF8C) & 3);
    *((_WORD *)v1 + 23) = v202FF8C;
    *((_WORD *)v1 + 24) = v202FF84;
    *((_WORD *)v1 + 25) = v202FF88;
    *((_WORD *)v1 + 26) = v202FF94;
    *((_WORD *)v1 + 27) = v202FF98;
    *((_WORD *)v1 + 28) = v202FF9C;
    if ( v202FFA0 )
      SeekSpriteAnim((int)v1, 6);
  }
  return 0;
}
