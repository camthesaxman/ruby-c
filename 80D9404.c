int __fastcall sub_80D9404(int a1)
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
    *(_WORD *)(v1 + 38) += sine(*(_WORD *)(v1 + 60) << 16 >> 24, *(_WORD *)(v1 + 56));
    *(_WORD *)(v1 + 60) += *(_WORD *)(v1 + 58);
  }
  return v3;
}
