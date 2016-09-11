int sub_809A6DC()
{
  unsigned int v0; // r5@1
  int v1; // r1@2
  char *v2; // r4@3
  signed __int16 v3; // r0@3
  int v5; // [sp+8h] [bp-4h]@0

  LoadSpriteSheet((int)"\b²;\b€");
  LoadSpritePalette((int)"è±;\bÏÚ");
  v0 = 0;
  do
  {
    v1 = (unsigned __int8)CreateSprite((int)&gSpriteTemplate_83BB2F0, (8912896 * v0 + 6029312) >> 16, 28);
    if ( v1 != 64 )
    {
      v2 = &gSprites[68 * v1];
      StartSpriteAnim((int)v2, v0);
      v3 = 1;
      if ( !v0 )
        v3 = -1;
      *((_WORD *)v2 + 26) = v3;
      *(_DWORD *)(4 * v0 + 0x2000D00) = v2;
    }
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 1 );
  if ( sub_809BF2C() << 24 )
    sub_809A860(1);
  return v5;
}
