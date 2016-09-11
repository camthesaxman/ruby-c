int __fastcall sub_80D29CC(int a1)
{
  int v1; // r4@1
  signed int v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  ++*(_WORD *)(a1 + 56);
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 52), 5);
  *(_WORD *)(v1 + 38) = *(_WORD *)(v1 + 56) / 2;
  *(_WORD *)(v1 + 52) = (*(_WORD *)(v1 + 52) + 3) & 0xFF;
  v2 = *(_WORD *)(v1 + 56);
  if ( v2 > 20 )
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (v2 % 2 & 1);
  if ( (signed int)*(_WORD *)(v1 + 56) > 30 )
    move_anim_8072740(v1);
  return v4;
}
