int __fastcall sub_80DC020(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 48) > *(_WORD *)(a1 + 46) - 10 )
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * (*(_WORD *)(a1 + 48) & 1);
  if ( *(_WORD *)(a1 + 48) == *(_WORD *)(a1 + 46) )
    move_anim_8072740(a1);
  ++*(_WORD *)(v1 + 48);
  return v3;
}
