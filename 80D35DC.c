int __fastcall sub_80D35DC(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
    move_anim_8072740(v1);
  *(_WORD *)(v1 + 38) += sine(*(_WORD *)(v1 + 58) << 16 >> 24, *(_WORD *)(v1 + 60));
  if ( (*(_WORD *)(v1 + 58) + (signed int)*(_WORD *)(v1 + 56)) >> 8 <= 127 )
  {
    *(_WORD *)(v1 + 58) += *(_WORD *)(v1 + 56);
  }
  else
  {
    *(_WORD *)(v1 + 58) = 0;
    *(_WORD *)(v1 + 60) = -*(_WORD *)(v1 + 60);
  }
  return v3;
}
