int __fastcall sub_808EDB8(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_BYTE *)(a1 + 5) &= 0xF3u;
  *(_BYTE *)(a1 + 1) &= 0xFCu;
  *(_WORD *)(a1 + 36) = 0;
  *(_WORD *)(a1 + 38) = 0;
  if ( *(_DWORD *)(a1 + 32) == 3670064 )
  {
    *(_DWORD *)(a1 + 28) = nullsub_58;
  }
  else
  {
    if ( (signed int)*(_WORD *)(a1 + 32) > 48 )
      --*(_WORD *)(a1 + 32);
    if ( (signed int)*(_WORD *)(a1 + 32) <= 47 )
      ++*(_WORD *)(a1 + 32);
    if ( (signed int)*(_WORD *)(a1 + 34) > 56 )
      --*(_WORD *)(a1 + 34);
    if ( (signed int)*(_WORD *)(a1 + 34) <= 55 )
      ++*(_WORD *)(a1 + 34);
  }
  return v2;
}
