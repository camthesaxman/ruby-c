int __fastcall sub_80D8048(int a1)
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
    *(_WORD *)(v1 + 36) += sine(*(_WORD *)(v1 + 56), *(_WORD *)(v1 + 58));
    *(_WORD *)(v1 + 38) += cosine(*(_WORD *)(v1 + 56), -6);
    if ( ((*(_WORD *)(v1 + 56) - 64) & 0xFFFFu) > 0x7F )
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * ((sub_8079ED4(*(_BYTE *)(v1 + 60)) + 1) & 3);
    else
      *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (sub_8079ED4(*(_BYTE *)(v1 + 60)) & 3);
    *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 56) + 3) & 0xFF;
  }
  return v3;
}
