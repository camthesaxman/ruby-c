int __fastcall sub_80D90A4(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  StartSpriteAnim(a1, word_3004B08);
  if ( word_3004B06 )
    sub_8078764(v1, 1);
  else
    sub_80787B0(v1, 1);
  *(_WORD *)(v1 + 46) = word_3004B04;
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v3;
}
