int sub_80E752C()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v2001024 )
  {
    if ( v2001024 == 1 && !(UpdatePaletteFade() << 24) )
      SetMainCallback2(v2001000);
  }
  else
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, v2001024);
    ++v2001024;
  }
  return v1;
}
