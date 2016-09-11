int sub_811043C()
{
  signed int v0; // r4@1
  int v1; // r0@2
  int v3; // [sp+4h] [bp-4h]@0

  MenuDrawTextWindow(1u, 0);
  sub_8072BD8(&gUnknown_0842C9F0, 0, 1u, 0xF0u);
  sub_81102E8();
  MenuPrint((int)&gUnknown_0842CA20, 12, 6u);
  v0 = 0;
  do
  {
    v1 = 16 * v0++ + 33720300;
    sub_8110348(v1, (unsigned int)((v0 << 25) + 100663296) >> 24);
  }
  while ( v0 <= 4 );
  return v3;
}
