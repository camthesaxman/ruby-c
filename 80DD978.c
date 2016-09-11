int __fastcall sub_80DD978(int a1)
{
  int v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C8) == 1 )
    StartSpriteAffineAnim(v1, 1);
  sub_807941C(v1);
  return v3;
}
