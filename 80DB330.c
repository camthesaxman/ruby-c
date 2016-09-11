int __fastcall sub_80DB330(int a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 38) += *(_WORD *)(a1 + 50) << 16 >> 24;
  if ( *(_WORD *)(a1 + 34) + (signed int)*(_WORD *)(a1 + 38) > -32 )
    *(_BYTE *)(a1 + 62) &= 0xFBu;
  if ( (signed int)*(_WORD *)(a1 + 38) > 0 )
    move_anim_8072740(a1);
  return v2;
}
