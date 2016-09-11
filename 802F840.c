int sub_802F840()
{
  char *v0; // r1@1
  int v2; // [sp+4h] [bp-4h]@0

  sub_80318FC((char *)&unk_3004360 + 100 * *(_WORD *)(2 * v2024A60 + 0x2024A6A));
  v0 = &gSprites[68 * *(_BYTE *)(v2024A60 + 0x2024BE0)];
  v0[5] = v0[5] & 0xF | 16 * v2024A60;
  dword_3004330[v2024A60] = (int)bx_0802E404;
  return v2;
}
