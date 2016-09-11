int __fastcall sub_80CB710(int a1)
{
  __int16 v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = *(_WORD *)(a1 + 46) + 1;
  *(_WORD *)(a1 + 46) = v1;
  if ( v1 > *(_WORD *)(a1 + 50) - 10 )
    *(_BYTE *)(a1 + 62) = *(_BYTE *)(a1 + 62) & 0xFB | 4 * (*(_WORD *)(a1 + 46) % 2 & 1);
  if ( *(_WORD *)(a1 + 46) > (signed int)*(_WORD *)(a1 + 50) )
    move_anim_8072740(a1);
  return v3;
}
