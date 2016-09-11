int sub_802FBB4()
{
  signed int v0; // r7@2
  int v1; // r5@5
  unsigned __int8 v2; // r0@5
  int v3; // r4@5
  char v4; // r0@5
  char *v5; // r1@5
  int v7; // [sp+14h] [bp-4h]@0

  if ( v20239F8 & 0x40 )
  {
    v0 = 65520;
    if ( battle_get_per_side_status(v2024A60) & 2 )
      v0 = 16;
  }
  else
  {
    v0 = 0;
  }
  sub_8031AF4(v2024EAC, v2024A60);
  v1 = v2024EAC;
  v2 = battle_get_per_side_status(v2024A60);
  GetMonSpriteTemplate_803C5A0(v1, v2);
  v3 = (((8 - gTrainerBackPicCoords[4 * v2024EAC]) << 18) + 5242880) >> 16;
  sub_8079E90(v2024A60);
  v4 = CreateSprite(33705612, (unsigned int)((v0 << 16) + 5242880) >> 16, v3);
  *(_BYTE *)(v2024A60 + 0x2024BE0) = v4;
  v5 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v5[5] = v5[5] & 0xF | 16 * v2024A60;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] = 240;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = -2;
  dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_80313A0;
  dword_3004330[v2024A60] = (int)sub_802D204;
  return v7;
}
