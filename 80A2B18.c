int sub_80A2B18()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    sub_80A2B40(36 * v0 + 33718912);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return v2;
}
