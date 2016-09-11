int sub_8033308()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( *(_BYTE *)(12 * v2024A60 + 0x2017811) & 1 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017810) &= 0x7Fu;
    *(_BYTE *)(12 * v2024A60 + 0x2017811) &= 0xFEu;
    FreeSpriteTilesByTag(0x27F9u);
    FreeSpritePaletteByTag(0x27F9u);
    StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)], 0);
    sub_8045A5C(
      (unsigned __int8)byte_3004340[v2024A60],
      (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A),
      0);
    sub_804777C(v2024A60);
    sub_8043DFC((unsigned __int8)byte_3004340[v2024A60]);
    sub_8031F88(v2024A60);
    dword_3004330[v2024A60] = (int)sub_8033264;
  }
  return v1;
}
