int sub_811F6D8()
{
  int v0; // r2@1
  __int16 v1; // r4@1
  unsigned __int8 v2; // r0@1
  __int16 v3; // r5@1
  __int16 v4; // r4@1
  char v5; // r0@1
  char *v6; // r1@1
  int v8; // [sp+10h] [bp-4h]@0

  sub_80318FC((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], v2024A60);
  v1 = GetMonData((int)&dword_3004360[25 * *(_WORD *)(2 * v2024A60 + 0x2024A6A)], 11, v0);
  v2 = battle_get_per_side_status(v2024A60);
  GetMonSpriteTemplate_803C56C(v1, v2);
  v3 = (unsigned __int8)sub_8077ABC(v2024A60, 2u);
  v4 = (unsigned __int8)sub_8077F68(v2024A60);
  sub_8079E90(v2024A60);
  v5 = CreateSprite(33705612, v3, v4);
  *(_BYTE *)(v2024A60 + 0x2024BE0) = v5;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] = -240;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = v2024A60;
  v6 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v6[5] = v6[5] & 0xF | 16 * v2024A60;
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)], *(_BYTE *)(v2024A60 + 0x2024E84));
  dword_3004330[v2024A60] = (int)sub_811DDE8;
  return v8;
}
