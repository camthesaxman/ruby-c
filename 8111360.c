int sub_8111360()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v200000C )
  {
    if ( v200000C == 1 && !(UpdatePaletteFade() << 24) )
    {
      sub_80FAB10();
      SetMainCallback2(v2000008);
    }
  }
  else
  {
    BeginNormalPaletteFade(-21, 0, 0, 0x10u, v200000C);
    ++v200000C;
  }
  return v1;
}
