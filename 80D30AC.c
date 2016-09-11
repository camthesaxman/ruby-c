int __fastcall sub_80D30AC(unsigned __int8 a1)
{
  int v2; // [sp+0h] [bp-4h]@0

  LOBYTE(word_3004B0E) = *(_BYTE *)(v202F7B4 + 16) & 1;
  word_3004B0E = (unsigned __int8)word_3004B0E;
  move_anim_task_del(a1);
  return v2;
}
