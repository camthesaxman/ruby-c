int __fastcall sub_80E4264(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int v2; // r4@1
  __int16 *v3; // r1@2
  signed __int16 v4; // r0@2
  int v6; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = battle_side_get_owner(v202F7C8);
  if ( v2 << 24 == battle_side_get_owner(v202F7C9) << 24 )
  {
    v3 = word_3004B00;
    v4 = 1;
  }
  else
  {
    v3 = word_3004B00;
    v4 = 0;
  }
  v3[7] = v4;
  move_anim_task_del(v1);
  return v6;
}
