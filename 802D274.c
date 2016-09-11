int sub_802D274()
{
  int v1; // [sp+Ch] [bp-4h]@0

  if ( (void (*)())dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] == SpriteCallbackDummy )
  {
    nullsub_10(v2024EAC);
    FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    dp01_tbl1_exec_completed();
  }
  return v1;
}
