int sub_8120588()
{
  char *v0; // r0@1
  int v1; // r4@1
  signed int v2; // r0@1
  char *v3; // r1@1
  int v5; // [sp+14h] [bp-4h]@0

  oamt_add_pos2_onto_pos1((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = 50;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 50] = -40;
  v0 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  *((_WORD *)v0 + 27) = *((_WORD *)v0 + 17);
  dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_8078B34;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 56] = v2024A60;
  oamt_set_x3A_32((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)], (int)sub_8030E38);
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)], 1);
  v1 = (unsigned __int8)AllocSpritePalette(-10503);
  v2 = sub_803FC34(v2024A60);
  LOWORD(v1) = 16 * v1;
  LoadCompressedPalette(
    *(_DWORD *)&gTrainerBackPicPaletteTable[8 * *((_BYTE *)&gLinkPlayers + 28 * v2 + 19)],
    v1 + 256,
    32);
  v3 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v3[5] = v3[5] & 0xF | v1;
  LOWORD(dword_3004B20[10 * (unsigned __int8)CreateTask((int)sub_812071C, 5) + 2]) = v2024A60;
  if ( *(_BYTE *)(12 * v2024A60 + 0x2017810) & 1 )
    dword_3004B20[10 * *(_BYTE *)(v2024A60 + 0x2024E68)] = (int)sub_8044CA0;
  v2017849 |= 1u;
  dword_3004330[v2024A60] = (int)nullsub_74;
  return v5;
}
