int __fastcall sub_80E1B88(unsigned __int8 a1)
{
  signed __int16 v1; // r2@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = 0;
  if ( v202F7BC > 0x63u )
    v1 = 1;
  word_3004B1E = v1;
  move_anim_task_del(a1);
  return v3;
}
