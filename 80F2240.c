int __fastcall sub_80F2240(int a1)
{
  int v1; // r2@1
  __int16 v2; // r3@2
  __int16 v3; // r0@3
  __int16 v4; // r0@6
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) == v2006DAD )
  {
    v2 = *(_WORD *)(a1 + 56);
    if ( *(_WORD *)(a1 + 56) )
    {
      v3 = *(_WORD *)(a1 + 54);
      *(_WORD *)(v1 + 32) += v3;
      *(_WORD *)(v1 + 56) = v2 - v3;
    }
    if ( *(_BYTE *)(v1 + 63) & 0x20 )
      sub_80F240C(v1);
  }
  else
  {
    v4 = *(_WORD *)(a1 + 32) + 8;
    *(_WORD *)(v1 + 32) = v4;
    if ( v4 >= (signed int)*(_WORD *)(v1 + 52) )
      sub_80F240C(v1);
  }
  return v6;
}
