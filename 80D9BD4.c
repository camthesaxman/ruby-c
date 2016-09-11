int __fastcall sub_80D9BD4(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B04 )
    sub_8078764(a1, 0);
  else
    sub_80787B0(a1, 0);
  if ( sub_8076BE0() << 24 )
  {
    StartSpriteAnim(v1, 2);
  }
  else if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    StartSpriteAnim(v1, 1);
  }
  *(_DWORD *)(v1 + 28) = sub_8078600;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
