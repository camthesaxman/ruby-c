int __fastcall sub_80E3B4C(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  LOBYTE(word_3004B0E) = battle_side_get_owner(v202F7C8);
  word_3004B0E = (unsigned __int8)word_3004B0E;
  move_anim_task_del(v1);
  return v3;
}
