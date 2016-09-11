int __fastcall sub_80D2834(int a1)
{
  int v1; // r1@2
  int v3; // [sp+0h] [bp-4h]@0

  *(_WORD *)(a1 + 36) += *(_WORD *)(a1 + 46);
  *(_WORD *)(a1 + 38) += *(_WORD *)(a1 + 48);
  if ( (unsigned int)(*(_WORD *)(a1 + 32) + *(_WORD *)(a1 + 36) + 16) > 0x110
    || (v1 = *(_WORD *)(a1 + 34) + *(_WORD *)(a1 + 38), v1 > 160)
    || v1 < -16 )
  {
    move_anim_8072740(a1);
  }
  return v3;
}
