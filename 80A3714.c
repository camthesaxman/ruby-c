int sub_80A3714()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  v0 = 0;
  do
  {
    sub_80A9684(gUnknown_083C1618[2 * v0], LOBYTE(gUnknown_083C1618[2 * v0 + 1]));
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 4 );
  sub_80A3684();
  return v2;
}
