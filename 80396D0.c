int sub_80396D0()
{
  signed int v0; // r5@2
  _BYTE *v1; // r4@4
  int v2; // r0@4
  int v3; // r9@6
  unsigned __int8 v4; // r0@6
  int v5; // r4@6
  char v6; // r0@6
  char v7; // r0@6
  char *v8; // r2@6
  char *v9; // r1@6
  __int16 v10; // r0@6
  char *v11; // r1@6
  int v13; // [sp+14h] [bp-4h]@0

  if ( v20239F8 & 0x40 )
  {
    v0 = 16;
    if ( battle_get_per_side_status(v2024A60) & 2 )
      v0 = 65520;
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
  sub_8031A6C(v1[28 * v2 + 19], v2024A60);
  v4 = battle_get_per_side_status(v2024A60);
  GetMonSpriteTemplate_803C5A0(v3, v4);
  v5 = (((8 - gTrainerFrontPicCoords[4 * v3]) << 18) + 2621440) >> 16;
  sub_8079E90(v2024A60);
  v6 = CreateSprite(33705612, (unsigned int)((v0 << 16) + 11534336) >> 16, v5);
  *(_BYTE *)(v2024A60 + 0x2024BE0) = v6;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] = -240;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = 2;
  v7 = IndexOfSpritePaletteTag(*(_WORD *)&gTrainerFrontPicPaletteTable[8 * v3 + 4]);
  v8 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v8[5] = v8[5] & 0xF | 16 * v7;
  v9 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  *((_WORD *)v9 + 28) = *((_WORD *)v9 + 2) & 0x3FF;
  v10 = GetSpriteTileStartByTag(*(_WORD *)&gTrainerFrontPicTable[8 * v3 + 6]);
  v11 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  *((_WORD *)v11 + 2) = *((_WORD *)v11 + 2) & 0xFC00 | v10 & 0x3FF;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 6] = v3;
  dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_80313A0;
  dword_3004330[v2024A60] = (int)sub_803757C;
  return v13;
}
