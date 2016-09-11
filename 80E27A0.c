int __fastcall sub_80E27A0(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  StartSpriteAffineAnim(a1, word_3004B06);
  if ( word_3004B04 )
    sub_8078764(v1, 1);
  else
    sub_80787B0(v1, 1);
  *(_DWORD *)(v1 + 28) = sub_80785E4;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
