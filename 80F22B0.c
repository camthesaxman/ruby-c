int __fastcall sub_80F22B0(int a1)
{
  int v1; // r2@1
  __int16 v2; // r0@3
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) == v2006DAD )
  {
    if ( (signed int)*(_WORD *)(a1 + 36) > -16 )
    {
      v2 = *(_WORD *)(a1 + 36) - 4;
_080F22F0:
      *(_WORD *)(v1 + 36) = v2;
      return v4;
    }
  }
  else if ( (signed int)*(_WORD *)(a1 + 36) < 0 )
  {
    v2 = *(_WORD *)(a1 + 36) + 4;
    goto _080F22F0;
  }
  return v4;
}
