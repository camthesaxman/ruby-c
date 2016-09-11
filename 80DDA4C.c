int __fastcall sub_80DDA4C(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  if ( v202F7B8 <= 32 )
    word_3004B0E = 0;
  if ( (unsigned int)(v202F7B8 - 33) <= 0x20 )
    word_3004B0E = 1;
  if ( v202F7B8 > 65 )
    word_3004B0E = 2;
  move_anim_task_del(a1);
  return v2;
}
