int ResetPaletteFade()
{
  unsigned int v0; // r4@1
  int v1; // r0@2
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    ResetPaletteStruct(v0);
    v1 = (v0 + 1) << 24;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  ResetPaletteFadeControl(v1);
  return v3;
}
