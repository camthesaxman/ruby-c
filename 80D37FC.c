int __fastcall sub_80D37FC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r1@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078764(a1, 1);
  v2 = word_3004B08;
  *(_WORD *)(v1 + 46) = word_3004B08;
  *(_WORD *)(v1 + 50) = word_3004B04 + *(_WORD *)(v1 + 32);
  *(_WORD *)(v1 + 54) = v2 + *(_WORD *)(v1 + 34);
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v4;
}
