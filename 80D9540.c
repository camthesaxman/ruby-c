int __fastcall sub_80D9540(int a1)
{
  int v1; // r4@1
  int v2; // r0@3
  int v3; // r0@3
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( *(_WORD *)(a1 + 46) )
  {
    v2 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 54) = v2;
    *(_WORD *)(v1 + 36) = v2 << 16 >> 24;
    *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 52), *(_WORD *)(v1 + 50));
    v3 = (*(_WORD *)(v1 + 52) + 3) & 0xFF;
    *(_WORD *)(v1 + 52) = v3;
    if ( v3 > 100 )
      *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (*(_WORD *)(v1 + 52) % 2 & 1);
    if ( (signed int)*(_WORD *)(v1 + 52) > 120 )
      move_anim_8072740(v1);
  }
  else
  {
    sub_8078764(a1, 1);
    *(_WORD *)(v1 + 48) = word_3004B04;
    *(_WORD *)(v1 + 50) = word_3004B06;
    ++*(_WORD *)(v1 + 46);
  }
  return v5;
}
