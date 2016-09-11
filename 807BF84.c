int __fastcall sub_807BF84(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@2
  unsigned __int8 v6; // r0@2
  int v8; // [sp+Ch] [bp-4h]@0

  v2 = (unsigned int)((a1 << 16) - 0x400000) >> 16;
  v3 = 0;
  v4 = a2 << 16;
  do
  {
    v5 = (signed __int16)v2;
    v6 = CreateSprite((int)&gSpriteTemplate_8393F74, v2, SHIWORD(v4));
    StartSpriteAnim((int)&gSprites[68 * v6], v3 + 3);
    v3 = (v3 + 1) & 0xFF;
    v2 = (v5 + 32) & 0xFFFF;
  }
  while ( v3 <= 4 );
  return v8;
}
