int __fastcall sub_80CF610(int a1)
{
  int v1; // r4@1
  char v2; // r1@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  sub_8078650(a1);
  sub_807867C(v1, word_3004B00[0]);
  *(_WORD *)(v1 + 34) += word_3004B02;
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = *(_BYTE *)(v1 + 63) | 1;
    *(_BYTE *)(v1 + 63) = v2;
    if ( word_3004B04 )
      *(_BYTE *)(v1 + 63) = v2 | 2;
  }
  else if ( word_3004B04 )
  {
    *(_BYTE *)(v1 + 63) |= 2u;
  }
  *(_DWORD *)(v1 + 28) = sub_8078600;
  oamt_set_x3A_32(v1, (int)move_anim_8072740);
  return v4;
}
