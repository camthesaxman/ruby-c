int __fastcall unref_sub_80DB6E4(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  char *v2; // r1@2
  char v3; // r0@2
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( word_3004B00[0] )
  {
    v2 = &gSprites[68 * (unsigned __int8)obj_id_for_side_relative_to_move(0) + 62];
    v3 = *v2 & 0xFB;
  }
  else
  {
    v2 = &gSprites[68 * (unsigned __int8)obj_id_for_side_relative_to_move(0) + 62];
    v3 = *v2 | 4;
  }
  *v2 = v3;
  move_anim_task_del(v1);
  return v5;
}
