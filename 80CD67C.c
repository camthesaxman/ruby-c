int __fastcall sub_80CD67C(int a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  if ( !(*(_WORD *)(a1 + 46) % 3 << 16) )
  {
    ++*(_WORD *)(a1 + 48);
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(a1 + 62) << 29 >> 31) ^ 1);
  }
  ++*(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 48) == 8 )
    move_anim_8072740(a1);
  return v2;
}
