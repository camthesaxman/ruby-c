int sub_80FDBA8()
{
  unsigned int v0; // r4@1
  int v2; // [sp+8h] [bp-4h]@0

  *(_WORD *)dword_3005E08 = 0;
  *(_WORD *)(dword_3005E08 + 2) = 0;
  v0 = 0;
  do
  {
    *(_WORD *)(2 * v0 + dword_3005E08 + 4) = (((_WORD)v0 + 2) << 11) | (((_WORD)v0 + 2) << 6) | 2 * (v0 + 2);
    v0 = (v0 + 1) & 0xFF;
  }
  while ( v0 <= 0xD );
  return v2;
}
