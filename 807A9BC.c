int __fastcall sub_807A9BC(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 46) = word_3004B04;
  *(_WORD *)(a1 + 50) = word_3004B08 + *(_WORD *)(a1 + 32);
  *(_WORD *)(a1 + 54) = word_3004B0A + *(_WORD *)(a1 + 34);
  if ( battle_side_get_owner(v202F7C9) << 24 )
  {
    *(_WORD *)(v1 + 32) += word_3004B08 - 30;
    v2 = word_3004B0A - 80;
  }
  else
  {
    *(_WORD *)(v1 + 32) += word_3004B08 + 30;
    v2 = word_3004B0A - 20;
  }
  *(_WORD *)(v1 + 34) = v2;
  *(_DWORD *)(v1 + 28) = sub_8078B34;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v4;
}
