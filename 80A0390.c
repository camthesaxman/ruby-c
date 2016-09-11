int sub_80A0390()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    MenuZeroFillWindowRect(0xFu, 2 * v0 + 4, 0x1Cu, 2 * v0 + 5);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 3 );
  return v2;
}
