int UpdateOamCoords()
{
  unsigned int v0; // r4@1
  char *v1; // r3@2
  char v2; // r0@4
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = &gSprites[68 * v0];
    if ( (v1[62] & 5) == 1 )
    {
      if ( gSprites[68 * v0 + 62] & 2 )
      {
        *((_WORD *)v1 + 1) = *((_WORD *)v1 + 1) & 0xFE00 | (*((_WORD *)v1 + 16)
                                                          + *((_WORD *)v1 + 18)
                                                          + v1[40]
                                                          + gSpriteCoordOffsetX) & 0x1FF;
        v2 = v1[41] + *((_WORD *)v1 + 19) + *((_WORD *)v1 + 17) + gSpriteCoordOffsetY;
      }
      else
      {
        *((_WORD *)v1 + 1) = *((_WORD *)v1 + 1) & 0xFE00 | (*((_WORD *)v1 + 16) + *((_WORD *)v1 + 18) + v1[40]) & 0x1FF;
        v2 = v1[41] + *((_WORD *)v1 + 19) + *((_WORD *)v1 + 17);
      }
      *v1 = v2;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x3F );
  return v4;
}
