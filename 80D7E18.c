int __fastcall sub_80D7E18(int a1)
{
  int v1; // r4@1
  int v2; // r1@5
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078CE8(a1);
  if ( !*(_WORD *)(v1 + 46) )
    *(_WORD *)(v1 + 46) = 1;
  *(_WORD *)(v1 + 38) += sine(*(_WORD *)(v1 + 60), *(_WORD *)(v1 + 56));
  *(_WORD *)(v1 + 60) = (*(_WORD *)(v1 + 58) + *(_WORD *)(v1 + 60)) & 0xFF;
  if ( *(_WORD *)(v1 + 46) == 1 )
  {
    if ( (unsigned int)(*(_WORD *)(v1 + 32) + *(_WORD *)(v1 + 36) + 16) > 0x110
      || (v2 = *(_WORD *)(v1 + 34) + *(_WORD *)(v1 + 38), v2 > 160)
      || v2 < -16 )
    {
      move_anim_8072740(v1);
    }
  }
  return v4;
}
