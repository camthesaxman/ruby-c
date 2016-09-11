int __fastcall sub_80DB9E4(int a1)
{
  int v1; // r6@1
  unsigned __int8 v2; // r0@2
  int v3; // r4@2
  unsigned __int8 v4; // r0@2
  unsigned int v5; // r5@2
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  if ( !(sub_8076BE0() << 24) )
  {
    v2 = battle_get_side_with_given_state(1u);
    v3 = v2;
    v4 = battle_get_per_side_status_permutated(v2);
    v5 = (-(v4 ^ 1) | v4 ^ 1u) >> 31;
    if ( b_side_obj__get_some_boolean(v3) << 24 )
      sub_8076464(v5);
    if ( b_side_obj__get_some_boolean(v3 ^ 2) << 24 )
      sub_8076464(v5 ^ 1);
  }
  *(_DWORD *)(v1 + 28) = move_anim_8072740;
  return v7;
}
