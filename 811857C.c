int sub_811857C()
{
  unsigned int v0; // r4@1
  char v1; // r0@2
  _BYTE *v2; // r3@2
  char *v3; // r0@3
  char *v4; // r0@3
  int v6; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = CreateSprite((int)&gSpriteTemplate_83FA40C, 116, 80);
    v2 = (_BYTE *)(v0 + 33656892);
    *(_BYTE *)(v0 + 33656892) = v1;
    if ( v1 != 64 )
    {
      v3 = &gSprites[68 * *v2 + 62];
      *v3 |= 4u;
      v4 = &gSprites[68 * *v2 + 62];
      *v4 |= 2u;
    }
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 5 );
  return v6;
}
