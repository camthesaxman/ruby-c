int __fastcall sub_8037680(int a1)
{
  signed int v1; // r6@1
  int v2; // r0@1
  void (*v3)(); // r4@6
  int v5; // [sp+10h] [bp-4h]@0

  v1 = 0;
  v2 = battle_type_is_double(a1) << 24;
  if ( !v2 || battle_type_is_double(v2) << 24 && v20239F8 & 0x40 )
  {
    if ( (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]] != SpriteCallbackDummy )
      goto _0803770E;
    goto _0803770C;
  }
  v3 = (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60]];
  if ( v3 == SpriteCallbackDummy && (void (*)())dword_2020020[17 * (unsigned __int8)byte_3004340[v2024A60 ^ 2]] == v3 )
_0803770C:
    v1 = 1;
_0803770E:
  if ( sub_80753C4() << 24 )
    v1 = 0;
  if ( v1 )
  {
    if ( (unsigned __int8)battle_get_per_side_status(v2024A60) == 1 )
    {
      if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017811) & 1) || !(*(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017811) & 1) )
        return v5;
      *(_BYTE *)(12 * v2024A60 + 0x2017810) &= 0x7Fu;
      *(_BYTE *)(12 * v2024A60 + 0x2017811) &= 0xFEu;
      *(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017810) &= 0x7Fu;
      *(_BYTE *)(12 * (v2024A60 ^ 2) + 0x2017811) &= 0xFEu;
      FreeSpriteTilesByTag(0x27F9u);
      FreeSpritePaletteByTag(0x27F9u);
    }
    if ( v20239F8 & 0x40 )
    {
      if ( (unsigned __int8)battle_get_per_side_status(v2024A60) == 1 )
        m4aMPlayContinue(&unk_3007380);
    }
    else
    {
      m4aMPlayVolumeControl(&unk_3007380, 0xFFFF, 256);
    }
    *(_BYTE *)(12 * v2024A60 + 0x2017819) = 3;
    dword_3004330[v2024A60] = (int)sub_8037644;
  }
  return v5;
}
