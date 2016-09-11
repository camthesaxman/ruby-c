int sub_80375B4()
{
  int v0; // r2@1
  char *v1; // r1@2
  int v2; // r0@2
  int v4; // [sp+Ch] [bp-4h]@0

  v0 = 17 * *(_BYTE *)(v2024A60 + 0x2024BE0);
  if ( (void (*)())dword_2020020[v0] == SpriteCallbackDummy )
  {
    sub_8031B74(*(_WORD *)&gSprites[v0 * 4 + 6]);
    v1 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
    *((_WORD *)v1 + 2) = *((_WORD *)v1 + 2) & 0xFC00 | *((_WORD *)v1 + 28) & 0x3FF;
    FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    v2 = DestroySprite((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    dp01_tbl4_exec_completed(v2);
  }
  return v4;
}
