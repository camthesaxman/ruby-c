int __fastcall sub_80B6888(unsigned __int8 a1)
{
  int v2; // [sp+8h] [bp-4h]@0

  *(_WORD *)&gSprites[68 * v200000F + 54] &= 0xFF00u;
  *(_WORD *)&gSprites[68 * v200000F + 54] |= a1;
  StartSpriteAnim((int)&gSprites[68 * v200000F], 0);
  return v2;
}
