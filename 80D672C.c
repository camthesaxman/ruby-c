int __fastcall sub_80D672C(int a1)
{
  int v1; // r4@1
  int v2; // r0@3
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 36) = sine(*(_WORD *)(a1 + 60), *(_WORD *)(a1 + 56));
  *(_WORD *)(v1 + 38) = cosine(*(_WORD *)(v1 + 60), *(_WORD *)(v1 + 56));
  *(_WORD *)(v1 + 60) = (*(_WORD *)(v1 + 58) + *(_WORD *)(v1 + 60)) & 0xFF;
  if ( !(*(_WORD *)(v1 + 60) % (signed int)*(_WORD *)(v1 + 54)) )
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
  v2 = *(_WORD *)(v1 + 46);
  *(_WORD *)(v1 + 46) = v2 - 1;
  if ( v2 << 16 <= 0 )
    move_anim_8072740(v1);
  return v4;
}
