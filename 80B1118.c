int sub_80B1118()
{
  signed int v0; // r4@1
  signed int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v0 = 0;
  v1 = 160;
  do
  {
    LoadPalette(v1 + 33652740, 16 * (*(_BYTE *)(v0 + 33785494) + 5), 32);
    v1 += 32;
    ++v0;
  }
  while ( v0 <= 3 );
  sub_80AE514();
  return v3;
}
