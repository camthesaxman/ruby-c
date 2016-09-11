int __fastcall sub_80A7DEC(unsigned __int8 a1, unsigned __int8 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r4@1
  __int16 v5; // r5@1
  __int16 v6; // r6@1
  int v7; // r8@1
  unsigned __int8 v8; // r0@1
  int v9; // r4@1

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  FreeSpritePaletteByTag(0x7544u);
  sub_80A7CF8(v4);
  v8 = CreateSprite((int)&gSpriteTemplate_83C1E04, v5, v6);
  v9 = v8;
  if ( v7 == 1 )
    StartSpriteAffineAnim((int)&gSprites[68 * v8], 1);
  return v9;
}
