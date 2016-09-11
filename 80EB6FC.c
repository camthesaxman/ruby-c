int __fastcall sub_80EB6FC(_WORD *a1, int a2)
{
  _WORD *v2; // r2@1
  unsigned int i; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v2 = a1;
  for ( i = (unsigned int)((a2 << 16) - 0x10000) >> 16; i != 0xFFFF; i = (i - 1) & 0xFFFF )
  {
    *v2 = -1;
    ++v2;
  }
  return v5;
}
