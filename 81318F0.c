int __fastcall sub_81318F0(unsigned __int8 a1)
{
  int v2; // [sp+4h] [bp-4h]@0

  word_3004B0E = 0;
  if ( ((v202F7BE - 61) & 0xFFu) <= 0x1E )
    word_3004B0E = 1;
  if ( ((v202F7BE - 92) & 0xFFu) <= 0x6C )
    word_3004B0E = 2;
  if ( v202F7BE > 0xC8u )
    word_3004B0E = 3;
  move_anim_task_del(a1);
  return v2;
}
