int sub_80AE514()
{
  unsigned int v0; // r5@1
  int v2; // [sp+20h] [bp-4h]@0

  v0 = 0;
  do
  {
    FillWindowRect_DefaultPalette(
      (int)&unk_3004210,
      0,
      gUnknown_083CA308[2 * *(_BYTE *)(v0 + 33785494)],
      byte_83CA309[2 * *(_BYTE *)(v0 + 33785494)],
      gUnknown_083CA310[2 * *(_BYTE *)(v0 + 33785494)] + 5,
      byte_83CA311[2 * *(_BYTE *)(v0 + 33785494)] + 1);
    sub_80AE5BC(v0);
    sub_80AE6CC(v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  return v2;
}
