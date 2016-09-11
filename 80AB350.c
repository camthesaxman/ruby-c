int sub_80AB350()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  LoadFontDefaultPalette((int)&gWindowConfig_81E6FD8);
  FillPalette(0, 0, 2);
  v0 = 10;
  do
  {
    LoadPalette(33746090, v0 + 240, 2);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xD );
  FillPalette(32319, 243, 2);
  return v2;
}
