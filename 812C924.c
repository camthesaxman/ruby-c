int __fastcall sub_812C924(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  __int16 *v2; // r1@2
  signed __int16 v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (unsigned __int8)battle_side_get_owner(v202F7C9) == 1 )
  {
    v2 = word_3004B00;
    v3 = 0;
  }
  else
  {
    v2 = word_3004B00;
    v3 = 1;
  }
  v2[7] = v3;
  move_anim_task_del(v1);
  return v5;
}
