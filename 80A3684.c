int sub_80A3684()
{
  unsigned int v0; // r2@1
  char *v1; // r0@2
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 0;
  do
  {
    v1 = &byte_3005D10[4 * v0];
    *v1 = 0;
    v1[1] = 0;
    v1[2] = 0;
    v1[3] = 0;
    v0 = (v0 + 1) & 0xFFFF;
  }
  while ( v0 <= 4 );
  v2038559 = 0;
  return v3;
}
