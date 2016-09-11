int sub_80B0324()
{
  int v0; // r0@1
  unsigned int v1; // r2@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = (unsigned __int8)CreateTask((int)sub_80B0458, 30);
  v2019211 = v0;
  v1 = 0;
  do
  {
    *((_WORD *)&byte_3004B28[40 * v0] + 4 * v1) = 255;
    v1 = (v1 + 1) & 0xFF;
  }
  while ( v1 <= 3 );
  return v3;
}
