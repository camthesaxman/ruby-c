int sub_81471A4()
{
  int v1; // [sp+4h] [bp-4h]@0

  v203933E = 0;
  if ( word_300179E & 1 )
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
    SetVBlankCallback((int)sub_8146E3C);
    SetMainCallback2((int)sub_81471EC);
  }
  return v1;
}
