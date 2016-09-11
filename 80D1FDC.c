int __fastcall sub_80D1FDC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r2@1
  int v3; // r0@3
  int v4; // r0@3
  int v6; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46);
  if ( *(_WORD *)(a1 + 46) )
  {
    v3 = *(_WORD *)(a1 + 48) + *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 54) = v3;
    *(_WORD *)(v1 + 36) = v3 << 16 >> 24;
    *(_WORD *)(v1 + 38) = sine(*(_WORD *)(v1 + 52), *(_WORD *)(v1 + 50));
    v4 = (*(_WORD *)(v1 + 52) + 3) & 0xFF;
    *(_WORD *)(v1 + 52) = v4;
    if ( v4 > 100 )
      *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (*(_WORD *)(v1 + 52) % 2 & 1);
    if ( (signed int)*(_WORD *)(v1 + 52) > 120 )
      move_anim_8072740(v1);
  }
  else
  {
    *(_WORD *)(a1 + 48) = word_3004B00[0];
    *(_WORD *)(a1 + 50) = word_3004B02;
    *(_WORD *)(a1 + 46) = 1;
  }
  return v6;
}
