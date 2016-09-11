int sub_80B4A90()
{
  signed int v0; // r2@1
  signed int v1; // r1@1
  int v3; // [sp+4h] [bp-4h]@0

  v0 = 127;
  v1 = 33714484;
  do
  {
    *(_DWORD *)v1 = 0;
    *(_DWORD *)(v1 + 4) = 0;
    v1 -= 8;
    --v0;
  }
  while ( v0 >= 0 );
  return v3;
}
