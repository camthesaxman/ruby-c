int sub_810A864()
{
  int v1; // [sp+Ch] [bp-4h]@0

  BeginNormalPaletteFade(-1, 0, 0x10u, 0, 0);
  v4000200 |= 1u;
  v4000004 |= 8u;
  SetVBlankCallback((int)sub_810A704);
  SetMainCallback2((int)sub_810AB3C);
  v4000050 = 0;
  v4000052 = 0;
  v4000054 = 0;
  v400000E = 1793;
  v4000008 = 7944;
  v4000000 = 6464;
  return v1;
}
