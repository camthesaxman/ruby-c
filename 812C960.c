int __fastcall sub_812C960(unsigned __int8 a1)
{
  unsigned __int8 v1; // r2@1
  __int16 *v2; // r1@2
  signed __int16 v3; // r0@2
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  if ( v202F7B8 <= 0 )
  {
    v2 = word_3004B00;
    v3 = 1;
  }
  else
  {
    v2 = word_3004B00;
    v3 = 0;
  }
  v2[7] = v3;
  move_anim_task_del(v1);
  return v5;
}
