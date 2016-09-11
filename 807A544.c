int __fastcall sub_807A544(int a1)
{
  int v1; // r4@1
  __int16 *v2; // r1@2
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078650(a1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
    word_3004B06 = -word_3004B06;
    *(_BYTE *)(v1 + 63) |= 1u;
    v2 = word_3004B00;
  }
  else
  {
    v2 = word_3004B00;
    *(_WORD *)(v1 + 32) += word_3004B00[0];
  }
  *(_WORD *)(v1 + 34) += v2[1];
  *(_WORD *)(v1 + 46) = v2[2];
  *(_WORD *)(v1 + 48) = v2[3];
  *(_WORD *)(v1 + 52) = v2[4];
  *(_WORD *)(v1 + 56) = v2[5];
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_8078504;
  return v4;
}
