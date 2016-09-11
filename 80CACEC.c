int __fastcall sub_80CACEC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( !(sub_8076BE0() << 24) && battle_type_is_double() << 24 )
  {
    if ( (unsigned __int8)battle_get_per_side_status_permutated(v202F7C9) == 1 )
      v400000C |= 3u;
    else
      v400000A = v400000A & 0xFC | 1;
    move_anim_task_del(v1);
  }
  else
  {
    move_anim_task_del(v1);
  }
  return v3;
}
