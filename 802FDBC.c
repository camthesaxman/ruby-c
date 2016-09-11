int sub_802FDBC()
{
  char *v0; // r0@1
  int v2; // [sp+Ch] [bp-4h]@0

  oamt_add_pos2_onto_pos1(&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 46] = 50;
  *(_WORD *)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 50] = -40;
  v0 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  *((_WORD *)v0 + 27) = *((_WORD *)v0 + 17);
  dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] = (int)sub_8078B34;
  oamt_set_x3A_32(&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)], SpriteCallbackDummy);
  StartSpriteAnim((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)], 1);
  dword_3004330[v2024A60] = (int)sub_802D274;
  return v2;
}
