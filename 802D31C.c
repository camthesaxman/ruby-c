int sub_802D31C()
{
  signed int v0; // r6@1
  void (*v1)(); // r4@6
  int v2; // r0@17
  int v4; // [sp+10h] [bp-4h]@0

  v0 = 0;
  if ( !(((int (*)(void))battle_type_is_double)() << 24)
    || ((int (*)(void))battle_type_is_double)() << 24 && v20239F8 & 0x40 )
  {
    if ( (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]] != SpriteCallbackDummy )
      goto _0802D3AA;
    goto _0802D3A8;
  }
  v1 = (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]];
  if ( v1 == SpriteCallbackDummy && (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60 ^ 2]] == v1 )
_0802D3A8:
    v0 = 1;
_0802D3AA:
  if ( sub_80753C4() << 24 )
    v0 = 0;
  if ( v0 && *(_BYTE *)(12 * v2024A60 + 0x2017811) & 1 && *(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017811) & 1 )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017810) &= 0x7Fu;
    *(_BYTE *)(12 * v2024A60 + 0x2017811) &= 0xFEu;
    *(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017810) &= 0x7Fu;
    *(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017811) &= 0xFEu;
    FreeSpriteTilesByTag(0x27F9u);
    FreeSpritePaletteByTag(0x27F9u);
    if ( v20239F8 & 0x40 )
      m4aMPlayContinue(&unk_3007380);
    else
      m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
    v2 = sub_80324F8((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), v2024A60);
    if ( battle_type_is_double(v2) << 24 )
      sub_80324F8((char *)&unk_3004360 + 100 * *(_WORD *)(2 * (v2024A60 ^ 2) + 0x2024A6A), v2024A60 ^ 2);
    *(_BYTE *)(12 * v2024A60 + 0x2017819) = 3;
    dword_3004330[v2024A60] = (int)sub_802D2E0;
  }
  return v4;
}
