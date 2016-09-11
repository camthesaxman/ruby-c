int __fastcall sub_812D6CC(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  unsigned __int8 v3; // r0@2
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  if ( *((_WORD *)v2 + 4) )
  {
    if ( !(sub_807992C((int)&dword_3004B20[10 * a1]) << 24) )
      move_anim_task_del(v1);
  }
  else
  {
    v3 = obj_id_for_side_relative_to_move(0);
    sub_80798F4((int)v2, v3);
    ++*((_WORD *)v2 + 4);
  }
  return v5;
}
