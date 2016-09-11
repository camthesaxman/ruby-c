int sub_8111658()
{
  unsigned int v0; // r5@1
  int v1; // r1@1
  int v2; // r4@2
  _BYTE *v3; // r0@2
  int v4; // r1@2
  char *v5; // r2@3
  unsigned int v6; // r1@3
  int v8; // [sp+14h] [bp-4h]@0

  LoadSpriteSheet((int)"Ü…?\b€");
  LoadSpritePalette((int)&gUnknown_083F8594);
  v0 = 0;
  LOWORD(v1) = 0;
  if ( (signed int)v2000112 > 0 )
  {
    do
    {
      v2 = (signed __int16)v1;
      v3 = &gRegionMapLocations[8 * *(_WORD *)(2 * (signed __int16)v1 + 0x2000620)];
      v4 = (unsigned __int8)CreateSprite(
                              (int)&gSpriteTemplate_83F85A4,
                              8 * (*v3 + 1) + 4 + 4 * (v3[2] - 1),
                              ((((unsigned int)v3[1] << 19) + 1835008) >> 16) + 4 * (v3[3] - 1));
      if ( v4 != 64 )
      {
        v5 = &gSprites[68 * v4];
        v5[62] |= 4u;
        v6 = v0;
        v0 = ((v0 << 16) + 0x10000) >> 16;
        *(_DWORD *)(((signed int)(v6 << 16) >> 14) + 0x2000660) = v5;
      }
      v1 = (v2 + 1) & 0xFFFF;
    }
    while ( (signed __int16)(v2 + 1) < (signed int)v2000112 );
  }
  v20006E0 = v0;
  return v8;
}
