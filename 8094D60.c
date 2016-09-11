int sub_8094D60()
{
  unsigned int v0; // r4@1
  unsigned __int8 v1; // r0@2
  int v3; // [sp+0h] [bp-264h]@1
  int v4; // [sp+260h] [bp-4h]@3

  memcpy(&v3, dword_3004360, 600);
  v0 = 0;
  do
  {
    v1 = sub_8094C20(v0);
    memcpy(&dword_3004360[25 * v1], &v3 + 25 * v0, 100);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 5 );
  return v4;
}
