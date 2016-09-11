int __fastcall sub_80E2978(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B04 )
    sub_8078764(a1, 1);
  else
    sub_80787B0(a1, 1);
  *(_WORD *)(v1 + 46) = word_3004B06;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  *(_DWORD *)(v1 + 28) = sub_80782D8;
  return v3;
}
