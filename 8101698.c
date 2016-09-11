int __fastcall sub_8101698(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = (*(_WORD *)(a1 + 46) + 1) & 0x1F;
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 <= 15 )
    *(_BYTE *)(v1 + 62) &= 0xFBu;
  else
    *(_BYTE *)(v1 + 62) |= 4u;
  return v4;
}
