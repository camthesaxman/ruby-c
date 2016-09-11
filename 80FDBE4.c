int sub_80FDBE4()
{
  unsigned int v0; // r3@1
  int v2; // [sp+4h] [bp-4h]@0

  *(_WORD *)dword_3005E08 = 0;
  v0 = 0;
  do
  {
    *(_WORD *)(2 * v0 + dword_3005E08 + 2) = ((_WORD)v0 << 10) | 32 * v0 | v0;
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0x1F );
  return v2;
}
