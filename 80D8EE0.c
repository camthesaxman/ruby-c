int __fastcall sub_80D8EE0(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8078718(a1) << 24 )
  {
    StartSpriteAnim(v1, 1);
    *(_DWORD *)(v1 + 28) = sub_8078600;
    oamt_set_x3A_32(v1, (int)move_anim_8072740);
  }
  return v3;
}
