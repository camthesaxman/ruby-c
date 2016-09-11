int __fastcall sub_80CAE74(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
  {
    move_anim_8072740(v1);
  }
  else
  {
    *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 56), 8);
    if ( ((*(_WORD *)(v1 + 56) - 59) & 0xFFFFu) <= 4 || ((*(_WORD *)(v1 + 56) - 187) & 0xFFFFu) <= 4 )
      *(_BYTE *)(v1 + 3) = *(_BYTE *)(v1 + 3) & 0xC1 | 2 * (((unsigned int)*(_BYTE *)(v1 + 3) << 26 >> 27) ^ 8);
    *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 56) + 5) & 0xFF;
  }
  return v3;
}
