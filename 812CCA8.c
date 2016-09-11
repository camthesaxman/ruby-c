int __fastcall sub_812CCA8(unsigned __int8 a1)
{
  unsigned __int8 v1; // r4@1
  int v3; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( sub_8076BE0() << 24 )
  {
    v4000048 = 16191;
    word_3004200 = 0;
    word_3004244 = 0;
  }
  move_anim_task_del(v1);
  return v3;
}
