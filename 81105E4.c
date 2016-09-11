int sub_81105E4()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  MenuDrawTextWindow(3u, 1u);
  sub_8072BD8(&gUnknown_0842CA49, 3, 2u, 0xC8u);
  MenuPrint((int)&gUnknown_0842CA63, 5, 6u);
  MenuPrint((int)&gUnknown_0842CA69, 5, 0xCu);
  v0 = 5;
  do
  {
    sub_8071F60(-82, v0, 0xAu);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x19 );
  sub_8110594(0, 10, 6u);
  sub_8110538(0, 10, 8u);
  sub_8110594(1u, 10, 0xCu);
  sub_8110538(1, 10, 0xEu);
  return v2;
}
