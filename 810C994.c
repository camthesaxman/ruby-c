int sub_810C994()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    sub_810C950(v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x27 );
  return v2;
}
