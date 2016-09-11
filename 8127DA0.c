int __fastcall sub_8127DA0(int a1)
{
  int v1; // r3@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  *(_BYTE *)(a1 + 62) |= 4u;
  *(_BYTE *)(a1 + 44) |= 0x40u;
  v2 = *(_WORD *)(a1 + 54) - 1;
  *(_WORD *)(v1 + 54) = v2;
  if ( !(v2 << 16) )
    *(_WORD *)(v1 + 46) = 1;
  return v4;
}
