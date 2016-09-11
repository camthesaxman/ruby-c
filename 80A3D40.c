int sub_80A3D40()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    sub_80A3D24(v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 4 );
  return v2;
}
