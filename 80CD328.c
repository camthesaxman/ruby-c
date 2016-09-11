int __fastcall sub_80CD328(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  sub_8078650(a1);
  if ( battle_side_get_owner(v202F7C8) << 24 )
  {
    *(_WORD *)(v1 + 32) -= word_3004B00[0];
    *(_WORD *)(v1 + 34) += word_3004B02;
    *(_WORD *)(v1 + 52) = -1;
    StartSpriteAffineAnim(v1, 1);
  }
  else
  {
    *(_WORD *)(v1 + 32) += word_3004B00[0];
    *(_WORD *)(v1 + 34) += word_3004B02;
    *(_WORD *)(v1 + 52) = 1;
  }
  *(_DWORD *)(v1 + 28) = sub_80CD394;
  return v3;
}
