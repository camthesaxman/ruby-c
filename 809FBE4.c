int sub_809FBE4()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    sub_80A1918(v0, 1);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x1B );
  MenuZeroFillWindowRect(0xBu, 4u, 0x1Du, 0x12u);
  return v2;
}
