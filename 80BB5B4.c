int sub_80BB5B4()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    sub_80BB594(v0);
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 0x13 );
  return v2;
}
