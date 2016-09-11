int __fastcall sub_80C6130(int a1)
{
  int v1; // r2@1
  int v2; // r0@3
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 54) || *(_WORD *)(v20387EC + 12) != 1 )
    return v4;
  v2 = *(_WORD *)(a1 + 46) + *(_WORD *)(a1 + 32);
  *(_WORD *)(v1 + 32) = v2;
  if ( (unsigned int)((v2 + 15) << 16) <= 0x10E0000 )
    *(_BYTE *)(v1 + 62) &= 0xFBu;
  if ( (signed int)*(_WORD *)(v1 + 48) <= 0 )
  {
    if ( *(_WORD *)(v1 + 32) > (signed int)*(_WORD *)(v1 + 50) )
      goto _080C6196;
  }
  else if ( *(_WORD *)(v1 + 32) < (signed int)*(_WORD *)(v1 + 50) )
  {
    goto _080C6196;
  }
  *(_WORD *)(v1 + 54) = 1;
_080C6196:
  if ( *(_WORD *)(v1 + 54) )
  {
    ++*(_WORD *)(v20387EC + 10);
    *(_WORD *)(v1 + 32) = *(_WORD *)(v1 + 50);
  }
  return v4;
}
