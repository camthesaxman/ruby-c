int __fastcall sub_80CEEE8(int a1)
{
  int v1; // r4@1
  int v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078B5C(a1) << 24 )
  {
    move_anim_8072740(v1);
  }
  else
  {
    v2 = (unsigned __int16)sine(*(_WORD *)(v1 + 56), 8);
    if ( (signed int)*(_WORD *)(v1 + 36) < 0 )
      v2 = 0xFFFF * v2 & 0xFFFF;
    *(_WORD *)(v1 + 36) += v2;
    *(_WORD *)(v1 + 38) += sine(*(_WORD *)(v1 + 56), 4);
    *(_WORD *)(v1 + 56) = (*(_WORD *)(v1 + 56) + 8) & 0xFF;
  }
  return v4;
}
