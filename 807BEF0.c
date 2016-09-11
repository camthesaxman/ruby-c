int __fastcall sub_807BEF0(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@2
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) != 1 || (v2 = *(_WORD *)(a1 + 48) + 1, *(_WORD *)(v1 + 48) = v2, v2 & 0x10) )
    *(_BYTE *)(v1 + 62) &= 0xFBu;
  else
    *(_BYTE *)(v1 + 62) |= 4u;
  return v4;
}
