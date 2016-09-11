int __fastcall sub_80EB890(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r3@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  if ( v1 >> 24 <= 0x20 )
    *(_BYTE *)((v1 >> 27) + 0x20284C0) |= 1 << (v2 & 7);
  return v4;
}
