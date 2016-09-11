int __fastcall sub_8079CEC(unsigned __int8 a1)
{
  signed __int16 v1; // r1@1
  int v3; // [sp+0h] [bp-4h]@0

  v1 = 0;
  if ( v202F7BE > 0x1Eu )
  {
    v1 = 1;
    if ( v202F7BE > 0x64u )
    {
      v1 = 3;
      if ( v202F7BE <= 0xC8u )
        v1 = 2;
    }
  }
  word_3004B0E = v1;
  move_anim_task_del(a1);
  return v3;
}
