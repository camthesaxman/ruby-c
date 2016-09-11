int sub_8133F80()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    sub_8133F4C(v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 7 );
  return v2;
}
