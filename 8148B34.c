int sub_8148B34()
{
  int v1; // [sp+8h] [bp-4h]@0

  if ( byte_3001BAC && byte_3001BAC == 1 )
  {
    UpdatePaletteFade();
    if ( !(v202F38F & 0x80) )
      DoSoftReset();
  }
  else
  {
    BeginNormalPaletteFade(-1, 0, 0, 0x10u, -1);
    byte_3001BAC = 1;
  }
  return v1;
}
