int __fastcall sub_80F4138(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  signed __int16 v3; // r0@3
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = -v200030C;
  *(_WORD *)(v1 + 38) = v2;
  if ( (signed __int16)v2 > -32 )
  {
    if ( *(_WORD *)(v1 + 46) == 1 )
    {
      *(_BYTE *)(v1 + 62) &= 0xFBu;
      v3 = 0;
      goto _080F418C;
    }
  }
  else if ( !*(_WORD *)(v1 + 46) )
  {
    *(_BYTE *)(v1 + 62) |= 4u;
    v3 = 1;
_080F418C:
    *(_WORD *)(v1 + 46) = v3;
    return v5;
  }
  return v5;
}
