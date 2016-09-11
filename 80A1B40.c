int __fastcall sub_80A1B40(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int v2; // r4@1
  int v4; // [sp+14h] [bp-4h]@0

  v1 = 3 * a1 & 0xFF;
  StartSpriteAnim((int)&gSprites[68 * v201A009], (50331648 * (unsigned int)a1 + 0x4000000) >> 24);
  v2 = 0;
  do
  {
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2 + 33660938)], v1 + 6);
    v2 = (v2 + 1) & 0xFF;
  }
  while ( v2 <= 7 );
  StartSpriteAnim((int)&gSprites[68 * v201A012], v1 + 5);
  return v4;
}
