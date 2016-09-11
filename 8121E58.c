int sub_8121E58()
{
  unsigned int v0; // r1@1
  int v2; // [sp+0h] [bp-4h]@0

  v0 = 0;
  do
  {
    *(_BYTE *)(v0 + 33788528) = 0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 2 );
  return v2;
}
