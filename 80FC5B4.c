int sub_80FC5B4()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( v2000004 )
  {
    if ( v2000004 == 1 && !(UpdatePaletteFade() << 24) )
      sub_80FC244((int)sub_80FC600);
  }
  else
  {
    BeginNormalPaletteFade(-1, 0, 0x10u, 0, v2000004);
    ++v2000004;
  }
  return v1;
}
