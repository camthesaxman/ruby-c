int __fastcall sub_807BF28(int a1, int a2)
{
  unsigned int v2; // r0@1
  unsigned int v3; // r6@1
  int v4; // r7@1
  int v5; // r5@2
  char *v6; // r4@2
  int v8; // [sp+10h] [bp-4h]@0

  v2 = (unsigned int)((a1 << 16) - 0x200000) >> 16;
  v3 = 0;
  v4 = a2 << 16;
  do
  {
    v5 = (signed __int16)v2;
    v6 = &gSprites[68 * (unsigned __int8)CreateSprite((int)&gSpriteTemplate_8393F74, v2, SHIWORD(v4))];
    StartSpriteAnim((int)v6, v3);
    *((_WORD *)v6 + 23) = 1;
    v3 = (v3 + 1) & 0xFF;
    v2 = (v5 + 32) & 0xFFFF;
  }
  while ( v3 <= 2 );
  return v8;
}
