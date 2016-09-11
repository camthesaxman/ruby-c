int sub_8033160()
{
  int v0; // r0@2
  int v2; // [sp+Ch] [bp-4h]@0

  if ( !(*(_BYTE *)(12 * v2024A60 + 0x2017810) & 0x40) )
  {
    FreeSpriteOamMatrix((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    DestroySprite((int)&gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)]);
    sub_8032A08(v2024A60);
    v0 = sub_8043DB0((unsigned __int8)byte_3004340[v2024A60]);
    sub_80334EC(v0);
  }
  return v2;
}
