int sub_8037A74()
{
  int v0; // r0@6
  int v2; // [sp+10h] [bp-4h]@0

  if ( (unsigned int)(unsigned __int8)gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 63] << 27 >> 31 == 1
    && !*(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] )
  {
    if ( *(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x80 )
    {
      if ( *(_BYTE *)(12 * v2024A60 + 0x2017811) & 1 )
      {
        *(_BYTE *)(12 * v2024A60 + 0x2017810) &= 0x7Fu;
        *(_BYTE *)(12 * v2024A60 + 0x2017811) &= 0xFEu;
        FreeSpriteTilesByTag(0x27F9u);
        v0 = FreeSpritePaletteByTag(0x27F9u);
        dp01_tbl4_exec_completed(v0);
      }
    }
    else
    {
      sub_8141828(v2024A60, (char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A));
    }
  }
  return v2;
}
