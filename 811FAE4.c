int sub_811FAE4()
{
  signed int v0; // r5@2
  _BYTE *v1; // r4@4
  signed int v2; // r0@4
  int v3; // r4@6
  unsigned __int8 v4; // r0@6
  int v5; // r4@6
  char v6; // r0@6
  char *v7; // r1@6
  int v9; // [sp+10h] [bp-4h]@0

  if ( v20239F8 & 0x40 )
  {
    v0 = 65520;
    if ( battle_get_per_side_status(v2024A60) & 2 )
      v0 = 16;
    v1 = &gLinkPlayers;
    v2 = sub_803FC34(v2024A60);
  }
  else
  {
    v0 = 0;
    v1 = &gLinkPlayers;
    v2 = (GetMultiplayerId() ^ 1) & 0xFF;
  }
  v3 = v1[28 * v2 + 19];
  sub_8031AF4(v3, v2024A60);
  v4 = battle_get_per_side_status(v2024A60);
  GetMonSpriteTemplate_803C5A0(v3, v4);
  v5 = (((8 - gTrainerBackPicCoords[4 * v3]) << 18) + 5242880) >> 16;
  sub_8079E90(v2024A60);
  v6 = CreateSprite(33705612, (unsigned int)((v0 << 16) + 5242880) >> 16, v5);
  *(_BYTE *)(v2024A60 + 0x2024BE0) = v6;
  v7 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v7[5] = v7[5] & 0xF | 16 * v2024A60;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] = 240;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = -2;
  dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_80313A0;
  dword_3004330[v2024A60] = (int)sub_811DAE4;
  return v9;
}
