int sub_8117900()
{
  unsigned int v0; // r7@1
  unsigned int v1; // r4@2
  unsigned int v2; // r6@2
  unsigned __int8 v3; // r0@3
  unsigned int v4; // r7@7
  unsigned __int8 v5; // r0@8
  unsigned int v6; // r7@9
  unsigned __int8 v7; // r0@10
  int v9; // [sp+0h] [bp-24h]@1
  int v10; // [sp+4h] [bp-20h]@1
  int v11; // [sp+20h] [bp-4h]@11

  LZ77UnCompWram(149431484, 0x2000000);
  v9 = 0x2000000;
  v10 = 267776;
  LoadSpriteSheet((int)&v9);
  LZ77UnCompWram(138385048, 0x2000000);
  v9 = 0x2000000;
  v10 = 328704;
  LoadSpriteSheet((int)&v9);
  v0 = 0;
  do
  {
    v1 = 24 * v0 & 0xFF;
    v2 = 0;
    do
    {
      v3 = CreateSprite((int)&gSpriteTemplate_83FA07C + 24 * v2, 24 * v2 + 148, v1 + 92);
      *(_BYTE *)(4 * v0 + v2 + 29 + 33656892) = v3;
      gSprites[68 * v3 + 44] |= 0x40u;
      v1 = (v1 + 24) & 0xFF;
      if ( v1 > 0x47 )
        v1 = 0;
      v2 = (v2 + 1) & 0xFF;
    }
    while ( v2 <= 3 );
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 2 );
  v4 = 0;
  do
  {
    v5 = CreateSprite((int)&gSpriteTemplate_83F9FD4 + 24 * v4, 24 * v4 + 148, 70);
    *(_BYTE *)(v4 + 33656933) = v5;
    gSprites[68 * v5 + 44] |= 0x40u;
    v4 = (v4 + 1) & 0xFF;
  }
  while ( v4 <= 3 );
  v6 = 0;
  do
  {
    v7 = CreateSprite((int)&gSpriteTemplate_83FA034 + 24 * v6, 126, 24 * v6 + 92);
    *(_BYTE *)(v6 + 33656937) = v7;
    gSprites[68 * v7 + 44] |= 0x40u;
    v6 = (v6 + 1) & 0xFF;
  }
  while ( v6 <= 2 );
  return v11;
}
