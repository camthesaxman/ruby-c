int __fastcall sub_80DF760(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( battle_side_get_owner(v202F7C8) << 24 )
    StartSpriteAffineAnim(v1, 1);
  sub_80DF63C(v1);
  return v3;
}
