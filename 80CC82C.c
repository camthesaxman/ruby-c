int __fastcall sub_80CC82C(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
    v2 = word_3004B02;
  }
  else
  {
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    v2 = word_3004B02;
  }
  *(_WORD *)(v1 + 34) += v2;
  *(_DWORD *)(v1 + 28) = sub_8078600;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v4;
}
