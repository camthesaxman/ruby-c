int __fastcall sub_80A7C20(unsigned __int8 a1)
{
  __int16 v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  LoadSpritePalette((int)&gUnknown_083C1D30);
  v2 = CreateSprite((int)&gSpriteTemplate_83C1D38, 16, 88);
  v2038568 = v2;
  *(_WORD *)&gSprites[68 * v2 + 60] = v1;
  return v4;
}
