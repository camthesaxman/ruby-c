int sub_8035EC4()
{
  char *v0; // r2@2
  int v2; // [sp+4h] [bp-4h]@0

  if ( sub_8078874(v2024A60) << 24 )
  {
    v0 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0) + 62];
    *v0 = *v0 & 0xFB | 4 * (*(_BYTE *)((v2024A60 << 9) + 0x2023A61) & 1);
    sub_8031F88(v2024A60);
  }
  sub_80334EC();
  return v2;
}
