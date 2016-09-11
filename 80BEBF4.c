int sub_80BEBF4()
{
  unsigned int v0; // r4@1
  int v2; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    sub_80BEC10(v0);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xF );
  return v2;
}
