int sub_802FCE0()
{
  int v0; // r6@1
  unsigned __int8 v1; // r0@1
  char v2; // r0@1
  char *v3; // r1@1
  int v5; // [sp+Ch] [bp-4h]@0

  sub_8031AF4(v2024EAC, v2024A60);
  v0 = v2024EAC;
  v1 = battle_get_per_side_status(v2024A60);
  GetMonSpriteTemplate_803C5A0(v0, v1);
  v2 = CreateSprite(33705612, 80, (((8 - (unsigned int)gTrainerBackPicCoords[4 * v2024EAC]) << 18) + 5242880) >> 16);
  *(_BYTE *)(v2024A60 + 0x2024BE0) = v2;
  v3 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v3[5] = v3[5] & 0xF | 16 * v2024A60;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] = -96;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = 2;
  dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_80313A0;
  dword_3004330[v2024A60] = (int)sub_802D23C;
  return v5;
}
