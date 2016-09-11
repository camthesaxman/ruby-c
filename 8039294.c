int sub_8039294()
{
  int v0; // r4@1
  unsigned __int8 v1; // r0@1
  __int16 v2; // r5@1
  char v3; // r0@1
  char *v4; // r1@1
  unsigned __int16 v5; // r0@1
  int v7; // [sp+1Ch] [bp-4h]@0

  v0 = (unsigned __int16)GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 11);
  sub_8031794((int)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), v2024A60);
  v1 = battle_get_per_side_status(v2024A60);
  GetMonSpriteTemplate_803C56C(v0, v1);
  v2 = (unsigned __int8)sub_8077ABC(v2024A60, 2);
  LOWORD(v0) = (unsigned __int8)sub_8077F68(v2024A60);
  sub_8079E90(v2024A60);
  v3 = CreateSprite(33705612, v2, v0);
  *(_BYTE *)(v2024A60 + 0x2024BE0) = v3;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 36] = -240;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = v2024A60;
  v4 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v4[5] = v4[5] & 0xF | 16 * v2024A60;
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)], *(_BYTE *)(v2024A60 + 0x2024E84));
  LOBYTE(v0) = v2024A60;
  v5 = GetMonData((char *)&unk_30045C0 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A), 11);
  sub_8032984(v0, v5);
  dword_3004330[v2024A60] = (int)sub_8037A74;
  return v7;
}
