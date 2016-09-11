int __fastcall sub_80E2870(int a1)
{
  int v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B02 == -1 )
  {
    LOBYTE(word_3004B02) = Random() & 3;
    word_3004B02 = (unsigned __int8)word_3004B02;
  }
  StartSpriteAffineAnim(v1, word_3004B02);
  if ( word_3004B00[0] )
    sub_8078764(v1, 0);
  else
    sub_80787B0(v1, 0);
  *(_WORD *)(v1 + 36) += (unsigned __int16)Random() % 0x30u - 24;
  *(_WORD *)(v1 + 38) += (unsigned __int16)Random() % 0x18u - 12;
  oamt_set_x3A_32(v1, (int)move_anim_8074EE0);
  *(_DWORD *)(v1 + 28) = sub_80785E4;
  return v3;
}
