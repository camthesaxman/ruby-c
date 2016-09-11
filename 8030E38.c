int __fastcall sub_8030E38(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  unsigned __int16 v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 56) & 0xFF;
  FreeSpriteOamMatrix(a1);
  v3 = GetSpritePaletteTagByPaletteNum((unsigned int)*(_BYTE *)(v1 + 5) >> 4);
  FreeSpritePaletteByTag(v3);
  DestroySprite(v1);
  sub_80318FC((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2 + 0x2024A6A));
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2 + 33704928)], 0);
  return v5;
}
