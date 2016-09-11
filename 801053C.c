int __fastcall sub_801053C(int a1)
{
  int v1; // r3@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 52) - 1;
  *(_WORD *)(v1 + 52) = v2;
  if ( !(v2 << 16) )
  {
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
    *(_WORD *)(v1 + 52) = 8;
  }
  return v4;
}
