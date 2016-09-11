int AddSpritesToOamBuffer()
{
  unsigned int v0; // r4@1
  int *v1; // r0@6
  unsigned __int8 v3; // [sp+0h] [bp-14h]@1
  int v4; // [sp+10h] [bp-4h]@7

  v0 = 0;
  v3 = 0;
  do
  {
    if ( (gSprites[68 * (unsigned __int8)gSpriteOrder[v0] + 62] & 5) == 1
      && AddSpriteToOamBuffer(&gSprites[68 * (unsigned __int8)gSpriteOrder[v0]], &v3) << 24 )
    {
      break;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x3F );
  for ( byte_30017A8 = v3; v3 < (unsigned int)(unsigned __int8)gOamLimit; ++v3 )
  {
    v1 = &gMain[2 * v3];
    v1[15] = 19923104;
    v1[16] = 3072;
  }
  return v4;
}
