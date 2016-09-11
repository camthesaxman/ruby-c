int __fastcall sub_80D6294(int a1)
{
  int v1; // r5@1
  __int16 *v2; // r2@2
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  *(_WORD *)(a1 + 32) = (unsigned __int8)sub_8077ABC(v202F7C9, 2u);
  *(_WORD *)(v1 + 34) = (unsigned __int8)sub_8077ABC(v202F7C9, 3u);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    v2 = word_3004B00;
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
    *(_WORD *)(v1 + 34) -= word_3004B02;
  }
  else
  {
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    *(_WORD *)(v1 + 34) += word_3004B02;
    v2 = word_3004B00;
  }
  *(_WORD *)(v1 + 46) = 0;
  *(_WORD *)(v1 + 48) = v2[2];
  *(_WORD *)(v1 + 50) = v2[3];
  *(_WORD *)(v1 + 52) = v2[4];
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_8078114;
  return v4;
}
