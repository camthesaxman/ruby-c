int sub_811DB1C()
{
  int v0; // r0@2
  int v2; // [sp+Ch] [bp-4h]@0

  if ( (void (*)())dword_2020020[17 * *(_BYTE *)(v2024A60 + 0x2024BE0)] == SpriteCallbackDummy )
  {
    nullsub_10();
    FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    v0 = DestroySprite((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    dp01_tbl3_exec_completed(v0);
  }
  return v2;
}
