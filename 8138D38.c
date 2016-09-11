int sub_8138D38()
{
  unsigned __int8 v0; // r0@1
  char v1; // r0@1
  char *v2; // r1@1
  int v4; // [sp+Ch] [bp-4h]@0

  sub_8031AF4(2u, v2024A60);
  v0 = battle_get_per_side_status(v2024A60);
  GetMonSpriteTemplate_803C5A0(2u, v0);
  v1 = CreateSprite(33705612, 80, 80);
  *(_BYTE *)(v2024A60 + 0x2024BE0) = v1;
  v2 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v2[5] = v2[5] & 0xF | 16 * v2024A60;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] = 240;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = -2;
  dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_80313A0;
  dword_3004330[v2024A60] = (int)sub_813741C;
  return v4;
}
