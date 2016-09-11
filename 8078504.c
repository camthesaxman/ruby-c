int __fastcall sub_8078504(int a1)
{
  int v1; // r1@2
  int v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    sub_8078104(a1);
  }
  else
  {
    --*(_WORD *)(a1 + 46);
    v1 = *(_WORD *)(a1 + 50);
    *(_WORD *)(a1 + 36) = v1 << 16 >> 24;
    *(_WORD *)(a1 + 50) = v1 + *(_WORD *)(a1 + 48);
    v2 = *(_WORD *)(a1 + 54);
    *(_WORD *)(a1 + 38) = v2 << 16 >> 24;
    *(_WORD *)(a1 + 54) = v2 + *(_WORD *)(a1 + 52);
    if ( !(*(_WORD *)(a1 + 46) % (signed int)*(_WORD *)(a1 + 56)) && *(_WORD *)(a1 + 56) )
      *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(a1 + 62) << 29 >> 31) ^ 1);
  }
  return v4;
}
