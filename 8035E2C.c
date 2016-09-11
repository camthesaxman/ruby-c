int sub_8035E2C()
{
  unsigned __int8 v0; // r1@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = *(_BYTE *)(12 * v2024A60 + 0x2017815);
  *(_BYTE *)(12 * v2024A60 + 0x2017815) = v0 + 1;
  if ( v0 > 0x5Cu )
  {
    *(_BYTE *)(12 * v2024A60 + 0x2017815) = 0;
    sub_80334EC();
  }
  return v2;
}
