int sub_813789C()
{
  int v0; // r0@2
  int v2; // [sp+Ch] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
  {
    FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    v0 = sub_8043DB0(byte_3004340[v2024A60]);
    dp01_tbl5_exec_completed(v0);
  }
  return v2;
}
