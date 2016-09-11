int CB2_813B7EC()
{
  int v1; // [sp+0h] [bp-4h]@0

  if ( !(UpdatePaletteFade() << 24) )
    SetMainCallback2((int)CB2_InitTitleScreen);
  return v1;
}
