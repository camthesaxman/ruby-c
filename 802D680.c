int sub_802D680()
{
  int v1; // [sp+Ch] [bp-4h]@0

  if ( (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]] == SpriteCallbackDummy
    && *(_BYTE *)(12 * v2024A60 + 0x2017811) & 1 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017810) &= 0x7Fu;
    *(_BYTE *)(12 * v2024A60 + 0x2017811) &= 0xFEu;
    FreeSpriteTilesByTag(0x27F9u);
    FreeSpritePaletteByTag(0x27F9u);
    if ( *(_BYTE *)(4 * v2024A60 + 0x2017800) & 4 )
      move_anim_start_t4(v2024A60, v2024A60);
    dword_3004330[v2024A60] = (int)sub_802D730;
  }
  return v1;
}
