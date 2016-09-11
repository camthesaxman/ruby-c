int __fastcall sub_8141D7C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  v202F7C8 = battle_get_side_with_given_state(0);
  v202F7C9 = battle_get_side_with_given_state(1u);
  move_anim_task_del(v1);
  return v3;
}
