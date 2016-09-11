int sub_813420C()
{
  unsigned int v0; // r2@1
  int v2; // [sp+Ch] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_BYTE *)(2 * v0 + 0x20392FC) = 0;
    *(_BYTE *)(2 * v0 + 0x20392FD) = 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 2 );
  v2039302 = 0;
  v2039303 = 0;
  return v2;
}
