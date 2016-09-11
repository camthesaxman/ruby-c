int __fastcall sub_80E3BA4(unsigned __int8 a1)
{
  signed __int16 v1; // r4@1
  int v3; // [sp+8h] [bp-4h]@0

  v1 = 0;
  if ( (v202F7C8 ^ 2) == v202F7C9 )
    v1 = 1;
  word_3004B0E = v1;
  move_anim_task_del(a1);
  return v3;
}
