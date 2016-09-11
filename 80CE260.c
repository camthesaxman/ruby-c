int __fastcall unref_sub_80CE260(unsigned __int8 a1)
{
  unsigned __int8 v1; // r7@1
  unsigned int i; // r4@1
  int v4; // [sp+10h] [bp-4h]@0

  v1 = a1;
  for ( i = 0; i < v2024A68; i = (i + 1) & 0xFF )
  {
    if ( word_3004B00[0] == 1 && !(battle_side_get_owner(i) << 24) )
      sub_8043DB0(byte_3004340[i]);
    if ( word_3004B02 == 1 && (unsigned __int8)battle_side_get_owner(i) == 1 )
      sub_8043DB0(byte_3004340[i]);
  }
  move_anim_task_del(v1);
  return v4;
}
