int __fastcall sub_80E09C4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r6@1
  unsigned __int8 v2; // r0@1
  unsigned int v3; // r5@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = battle_get_per_side_status_permutated(v202F7C8);
  v3 = (-(v2 ^ 1) | v2 ^ 1u) >> 31;
  sub_8076464(v3);
  if ( b_side_obj__get_some_boolean(v202F7C8 ^ 2) << 24 )
    sub_8076464(v3 ^ 1);
  move_anim_task_del(v1);
  return v5;
}
