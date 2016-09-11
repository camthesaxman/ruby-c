int __fastcall sub_80D902C(int a1)
{
  int v1; // r5@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B0E == 1 && battle_side_get_owner(v202F7C8) << 24 )
  {
    word_3004B02 = -word_3004B02;
    word_3004B06 = -word_3004B06;
  }
  StartSpriteAnim(v1, word_3004B0C);
  word_3004B0C = 0;
  sub_8079534(v1);
  return v3;
}
