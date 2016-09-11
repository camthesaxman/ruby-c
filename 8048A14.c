int sub_8048A14()
{
  unsigned __int8 v0; // r0@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = *(_BYTE *)(dword_3004824 + 180) + 1;
  *(_BYTE *)(dword_3004824 + 180) = v0;
  if ( v0 > 0xFu )
  {
    BeginNormalPaletteFade(-1, 0, 0, 16);
    *(_BYTE *)(dword_3004824 + 123) = 10;
  }
  return v2;
}
