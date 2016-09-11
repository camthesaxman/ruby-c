int __fastcall sub_8132370(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C9) << 24 )
  {
    *(_WORD *)(v1 + 46) = 11;
    *(_WORD *)(v1 + 48) = 192;
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    *(_WORD *)(v1 + 34) += word_3004B02;
  }
  else
  {
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
    *(_WORD *)(v1 + 34) += word_3004B02;
    *(_WORD *)(v1 + 46) = -11;
    *(_WORD *)(v1 + 48) = 192;
    StartSpriteAffineAnim(v1, 1);
  }
  *(_DWORD *)(v1 + 28) = sub_8132318;
  return v3;
}
