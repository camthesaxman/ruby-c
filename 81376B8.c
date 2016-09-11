int sub_81376B8()
{
  signed int v0; // r4@1
  int v1; // r0@6
  int v3; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]] == SpriteCallbackDummy )
    v0 = 1;
  if ( v0 && *(_BYTE *)(12 * v2024A60 + 0x2017811) & 1 && *(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017811) & 1 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017810) &= 0x7Fu;
    *(_BYTE *)(12 * v2024A60 + 0x2017811) &= 0xFEu;
    *(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017810) &= 0x7Fu;
    *(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017811) &= 0xFEu;
    FreeSpriteTilesByTag(0x27F9u);
    FreeSpritePaletteByTag(0x27F9u);
    CreateTask((int)c3_0802FDF4, 10);
    v1 = sub_80324F8((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], v2024A60);
    dp01_tbl5_exec_completed(v1);
  }
  return v3;
}
