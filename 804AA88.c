int sub_804AA88()
{
  signed int v0; // r3@1
  int v1; // r1@2
  int v3; // [sp+14h] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_BYTE *)(dword_3004824 + 8 * v0 + 2268) = 0;
    v1 = dword_3004824 + 8 * v0;
    *(_WORD *)(v1 + 2270) = 0;
    v1 += 2272;
    *(_BYTE *)v1;
    *(_BYTE *)v1 = -1;
    ++v0;
  }
  while ( v0 <= 3 );
  return v3;
}
