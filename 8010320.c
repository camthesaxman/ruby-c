int __fastcall sub_8010320(int a1)
{
  int v1; // r3@1
  int v2; // r0@1
  __int16 v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 54) - 1;
  *(_WORD *)(v1 + 54) = v2;
  if ( !(v2 << 16) )
  {
    *(_WORD *)(v1 + 54) = 8;
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
    v3 = *(_WORD *)(v1 + 52) - 1;
    *(_WORD *)(v1 + 52) = v3;
    if ( !v3 )
    {
      *(_BYTE *)(v1 + 62) &= 0xFBu;
      *(_DWORD *)(v1 + 28) = nullsub_37;
      dword_3004284 = 0;
    }
  }
  return v5;
}
